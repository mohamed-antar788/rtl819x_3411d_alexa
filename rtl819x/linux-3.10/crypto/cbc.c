/*
 * CBC: Cipher Block Chaining mode
 *
 * Copyright (c) 2006 Herbert Xu <herbert@gondor.apana.org.au>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 */

#include <crypto/algapi.h>
#include <linux/err.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/log2.h>
#include <linux/module.h>
#include <linux/scatterlist.h>
#include <linux/slab.h>

#ifdef CONFIG_CRYPTO_DEV_REALTEK
#include "../drivers/crypto/realtek/rtl_crypto_helper.h"

#define AES_MAX_KEY_SIZE	32
#define DES_KEY_SIZE		8
#define DES3_EDE_KEY_SIZE	(3 * DES_KEY_SIZE)

#define CBC_3DES_NAME		"cbc(des3_ede)"
#define CBC_DES_NAME		"cbc(des)"
#define CBC_AES_NAME		"cbc(aes)"

extern int rtl_des3_ede_get_cbckey(struct crypto_tfm *tfm, const u8 *key,unsigned int keylen);
extern int rtl_aes_get_key(struct crypto_tfm *tfm, const u8 *key, u32 *keylen);
extern int rtl_des_get_cbckey(struct crypto_tfm *tfm, const u8 *key, unsigned int keylen);
#endif // CONFIG_CRYPTO_DEV_REALTEK
struct crypto_cbc_ctx {
	struct crypto_cipher *child;
#ifdef CONFIG_CRYPTO_DEV_REALTEK
	struct rtl_cipher_ctx rtl_ctx;
#endif
};

static int crypto_cbc_setkey(struct crypto_tfm *parent, const u8 *key,
			     unsigned int keylen)
{
	struct crypto_cbc_ctx *ctx = crypto_tfm_ctx(parent);
	struct crypto_cipher *child = ctx->child;
	int err;

	crypto_cipher_clear_flags(child, CRYPTO_TFM_REQ_MASK);
	crypto_cipher_set_flags(child, crypto_tfm_get_flags(parent) &
				       CRYPTO_TFM_REQ_MASK);
	err = crypto_cipher_setkey(child, key, keylen);
	crypto_tfm_set_flags(parent, crypto_cipher_get_flags(child) &
				     CRYPTO_TFM_RES_MASK);
#ifdef CONFIG_CRYPTO_DEV_REALTEK
	if (err == 0)
		err = rtl_cipher_setkey(child, &ctx->rtl_ctx, key, keylen);
#endif

	return err;
}

static int crypto_cbc_encrypt_segment(struct blkcipher_desc *desc,
				      struct blkcipher_walk *walk,
				      struct crypto_cipher *tfm)
{
	void (*fn)(struct crypto_tfm *, u8 *, const u8 *) =
		crypto_cipher_alg(tfm)->cia_encrypt;
	int bsize = crypto_cipher_blocksize(tfm);
	unsigned int nbytes = walk->nbytes;
	u8 *src = walk->src.virt.addr;
	u8 *dst = walk->dst.virt.addr;
	u8 *iv = walk->iv;

	do {
		crypto_xor(iv, src, bsize);
		fn(crypto_cipher_tfm(tfm), dst, iv);
		memcpy(iv, dst, bsize);

		src += bsize;
		dst += bsize;
	} while ((nbytes -= bsize) >= bsize);

	return nbytes;
}

static int crypto_cbc_encrypt_inplace(struct blkcipher_desc *desc,
				      struct blkcipher_walk *walk,
				      struct crypto_cipher *tfm)
{
	void (*fn)(struct crypto_tfm *, u8 *, const u8 *) =
		crypto_cipher_alg(tfm)->cia_encrypt;
	int bsize = crypto_cipher_blocksize(tfm);
	unsigned int nbytes = walk->nbytes;
	u8 *src = walk->src.virt.addr;
	u8 *iv = walk->iv;

	do {
		crypto_xor(src, iv, bsize);
		fn(crypto_cipher_tfm(tfm), src, src);
		iv = src;

		src += bsize;
	} while ((nbytes -= bsize) >= bsize);

	memcpy(walk->iv, iv, bsize);

	return nbytes;
}

static int crypto_cbc_encrypt(struct blkcipher_desc *desc,
			      struct scatterlist *dst, struct scatterlist *src,
			      unsigned int nbytes)
{
	struct blkcipher_walk walk;
	struct crypto_blkcipher *tfm = desc->tfm;
	struct crypto_cbc_ctx *ctx = crypto_blkcipher_ctx(tfm);
	struct crypto_cipher *child = ctx->child;
	int err;

#if defined(CONFIG_CRYPTO_DEV_REALTEK)	
	struct rtl_cipher_ctx *rtl_tmp_ctx = &ctx->rtl_ctx;	
	const char *algname = crypto_tfm_alg_name(tfm);
	u8	aes_cbc_key[AES_MAX_KEY_SIZE] = {0};
	u32 keylen = 0;
	
	if (algname){
		//printk("%s %d algname=%s tfm=0x%p\n", __FUNCTION__, __LINE__, algname, tfm);
		if (memcmp(algname, CBC_3DES_NAME, strlen(CBC_3DES_NAME)) == 0){
			rtl_des3_ede_get_cbckey((struct crypto_tfm *)child, rtl_tmp_ctx->key, DES3_EDE_KEY_SIZE);
		}
		else if (memcmp(algname, CBC_DES_NAME, strlen(CBC_DES_NAME)) == 0){
			rtl_des_get_cbckey((struct crypto_tfm *)child, rtl_tmp_ctx->key, DES_KEY_SIZE);
		}
		else if (memcmp(algname, CBC_AES_NAME, strlen(CBC_AES_NAME)) == 0){
			err = rtl_aes_get_key((struct crypto_tfm *)child, aes_cbc_key, &keylen);
			if (err == 0){
				rtl_cipher_setkey(child, &ctx->rtl_ctx, aes_cbc_key, keylen);
			}
		}
	}
#endif

	blkcipher_walk_init(&walk, dst, src, nbytes);
	err = blkcipher_walk_virt(desc, &walk);

	while ((nbytes = walk.nbytes)) {
#ifdef CONFIG_CRYPTO_DEV_REALTEK_DBG
		printk("%s: total=%d, walk=%d, blk=%d, src=%p, dst=%p\n", __FUNCTION__,
			walk.total, walk.nbytes, crypto_cipher_blocksize(child),
			walk.src.virt.addr, walk.dst.virt.addr
		);
#endif
#ifdef CONFIG_CRYPTO_DEV_REALTEK
		if (ctx->rtl_ctx.mode >= 0)
		{
			int bsize = crypto_cipher_blocksize(child);
			nbytes = rtl_cipher_crypt(child, 1,
				&ctx->rtl_ctx, walk.src.virt.addr, nbytes,
				walk.iv, walk.dst.virt.addr);

			// cbc mode update
			//memcpy(walk.iv, walk.dst.virt.addr,
				//crypto_cipher_blocksize(child));
			
			if (walk.src.virt.addr == walk.dst.virt.addr)
			{
				walk.src.virt.addr += (walk.nbytes - nbytes);
				memcpy(walk.iv, walk.src.virt.addr - bsize ,bsize);
			}
			else
			{
				walk.src.virt.addr += (walk.nbytes - nbytes);
				walk.dst.virt.addr += (walk.nbytes - nbytes);
				memcpy(walk.iv, walk.dst.virt.addr - bsize ,bsize);
			}
			//printk("%s %d (walk.nbytes - nbytes)=%d \n", __FUNCTION__, __LINE__, (walk.nbytes - nbytes));
			err = blkcipher_walk_done(desc, &walk, nbytes);
			continue;
		}
#endif
		if (walk.src.virt.addr == walk.dst.virt.addr)
			nbytes = crypto_cbc_encrypt_inplace(desc, &walk, child);
		else
			nbytes = crypto_cbc_encrypt_segment(desc, &walk, child);
		err = blkcipher_walk_done(desc, &walk, nbytes);
	}

	return err;
}

static int crypto_cbc_decrypt_segment(struct blkcipher_desc *desc,
				      struct blkcipher_walk *walk,
				      struct crypto_cipher *tfm)
{
	void (*fn)(struct crypto_tfm *, u8 *, const u8 *) =
		crypto_cipher_alg(tfm)->cia_decrypt;
	int bsize = crypto_cipher_blocksize(tfm);
	unsigned int nbytes = walk->nbytes;
	u8 *src = walk->src.virt.addr;
	u8 *dst = walk->dst.virt.addr;
	u8 *iv = walk->iv;

	do {
		fn(crypto_cipher_tfm(tfm), dst, src);
		crypto_xor(dst, iv, bsize);
		iv = src;

		src += bsize;
		dst += bsize;
	} while ((nbytes -= bsize) >= bsize);

	memcpy(walk->iv, iv, bsize);

	return nbytes;
}

static int crypto_cbc_decrypt_inplace(struct blkcipher_desc *desc,
				      struct blkcipher_walk *walk,
				      struct crypto_cipher *tfm)
{
	void (*fn)(struct crypto_tfm *, u8 *, const u8 *) =
		crypto_cipher_alg(tfm)->cia_decrypt;
	int bsize = crypto_cipher_blocksize(tfm);
	unsigned int nbytes = walk->nbytes;
	u8 *src = walk->src.virt.addr;
	u8 last_iv[bsize];

	/* Start of the last block. */
	src += nbytes - (nbytes & (bsize - 1)) - bsize;
	memcpy(last_iv, src, bsize);

	for (;;) {
		fn(crypto_cipher_tfm(tfm), src, src);
		if ((nbytes -= bsize) < bsize)
			break;
		crypto_xor(src, src - bsize, bsize);
		src -= bsize;
	}

	crypto_xor(src, walk->iv, bsize);
	memcpy(walk->iv, last_iv, bsize);

	return nbytes;
}

static int crypto_cbc_decrypt(struct blkcipher_desc *desc,
			      struct scatterlist *dst, struct scatterlist *src,
			      unsigned int nbytes)
{
	struct blkcipher_walk walk;
	struct crypto_blkcipher *tfm = desc->tfm;
	struct crypto_cbc_ctx *ctx = crypto_blkcipher_ctx(tfm);
	struct crypto_cipher *child = ctx->child;
	int err;
	#if defined(CONFIG_CRYPTO_DEV_REALTEK)	
	struct rtl_cipher_ctx *rtl_tmp_ctx = &ctx->rtl_ctx;
	const char *algname = crypto_tfm_alg_name(tfm);
	u8	aes_cbc_key[AES_MAX_KEY_SIZE] = {0};
	u32 keylen = 0;
	
	if (algname){
		//printk("%s %d algname=%s tfm=0x%p\n", __FUNCTION__, __LINE__, algname, tfm);
		if (memcmp(algname, CBC_3DES_NAME, strlen(CBC_3DES_NAME)) == 0){
			rtl_des3_ede_get_cbckey((struct crypto_tfm *)child, rtl_tmp_ctx->key, DES3_EDE_KEY_SIZE);
		}
		else if (memcmp(algname, CBC_DES_NAME, strlen(CBC_DES_NAME)) == 0){
			rtl_des_get_cbckey((struct crypto_tfm *)child, rtl_tmp_ctx->key, DES_KEY_SIZE);
		}
		else if (memcmp(algname, CBC_AES_NAME, strlen(CBC_AES_NAME)) == 0){
			err = rtl_aes_get_key((struct crypto_tfm *)child, aes_cbc_key, &keylen);
			if (err == 0){
				rtl_cipher_setkey(child, &ctx->rtl_ctx, aes_cbc_key, keylen);
			}
		}
	}
	#endif

	blkcipher_walk_init(&walk, dst, src, nbytes);
	err = blkcipher_walk_virt(desc, &walk);

	while ((nbytes = walk.nbytes)) {
#ifdef CONFIG_CRYPTO_DEV_REALTEK_DBG
		printk("%s %d: total=%d, walk=%d, blk=%d, src=%p, dst=%p ctx->rtl_ctx.mode=%d \n", __FUNCTION__,__LINE__,
			walk.total, walk.nbytes, crypto_cipher_blocksize(child),
			walk.src.virt.addr, walk.dst.virt.addr, ctx->rtl_ctx.mode
		);
#endif
#ifdef CONFIG_CRYPTO_DEV_REALTEK
		if (ctx->rtl_ctx.mode >= 0)
		{
			int bsize = crypto_cipher_blocksize(child);
			int offset = 0;
			u8 last_iv[bsize];
			if (walk.src.virt.addr == walk.dst.virt.addr)
			{
				
				offset = (nbytes - (nbytes & (bsize - 1)) - bsize);
				memcpy(last_iv, walk.src.virt.addr + offset, bsize);
			}
			nbytes = rtl_cipher_crypt(child, 0,
				&ctx->rtl_ctx, walk.src.virt.addr, nbytes,
				walk.iv, walk.dst.virt.addr);
			
			// cbc mode update			
			if (walk.src.virt.addr == walk.dst.virt.addr)
			{
				walk.src.virt.addr += (walk.nbytes - nbytes);	
				memcpy(walk.iv, last_iv, bsize);
			}
			else
			{
				walk.src.virt.addr += (walk.nbytes - nbytes);
				walk.dst.virt.addr += (walk.nbytes - nbytes);
				memcpy(walk.iv, walk.src.virt.addr - bsize, bsize);
			}
			err = blkcipher_walk_done(desc, &walk, nbytes);
			continue;
		}
#endif
		if (walk.src.virt.addr == walk.dst.virt.addr)
			nbytes = crypto_cbc_decrypt_inplace(desc, &walk, child);
		else
			nbytes = crypto_cbc_decrypt_segment(desc, &walk, child);
		err = blkcipher_walk_done(desc, &walk, nbytes);
	}

	return err;
}

static int crypto_cbc_init_tfm(struct crypto_tfm *tfm)
{
	struct crypto_instance *inst = (void *)tfm->__crt_alg;
	struct crypto_spawn *spawn = crypto_instance_ctx(inst);
	struct crypto_cbc_ctx *ctx = crypto_tfm_ctx(tfm);
	struct crypto_cipher *cipher;

	cipher = crypto_spawn_cipher(spawn);
	if (IS_ERR(cipher))
		return PTR_ERR(cipher);

	ctx->child = cipher;
#ifdef CONFIG_CRYPTO_DEV_REALTEK
	rtl_cipher_init_ctx(tfm, &ctx->rtl_ctx);
#endif
	return 0;
}

static void crypto_cbc_exit_tfm(struct crypto_tfm *tfm)
{
	struct crypto_cbc_ctx *ctx = crypto_tfm_ctx(tfm);
	crypto_free_cipher(ctx->child);
}

static struct crypto_instance *crypto_cbc_alloc(struct rtattr **tb)
{
	struct crypto_instance *inst;
	struct crypto_alg *alg;
	int err;

	err = crypto_check_attr_type(tb, CRYPTO_ALG_TYPE_BLKCIPHER);
	if (err)
		return ERR_PTR(err);

	alg = crypto_get_attr_alg(tb, CRYPTO_ALG_TYPE_CIPHER,
				  CRYPTO_ALG_TYPE_MASK);
	if (IS_ERR(alg))
		return ERR_CAST(alg);

	inst = ERR_PTR(-EINVAL);
	if (!is_power_of_2(alg->cra_blocksize))
		goto out_put_alg;

	inst = crypto_alloc_instance("cbc", alg);
	if (IS_ERR(inst))
		goto out_put_alg;

	inst->alg.cra_flags = CRYPTO_ALG_TYPE_BLKCIPHER;
	inst->alg.cra_priority = alg->cra_priority;
	inst->alg.cra_blocksize = alg->cra_blocksize;
	inst->alg.cra_alignmask = alg->cra_alignmask;
	inst->alg.cra_type = &crypto_blkcipher_type;

	/* We access the data as u32s when xoring. */
	inst->alg.cra_alignmask |= __alignof__(u32) - 1;

	inst->alg.cra_blkcipher.ivsize = alg->cra_blocksize;
	inst->alg.cra_blkcipher.min_keysize = alg->cra_cipher.cia_min_keysize;
	inst->alg.cra_blkcipher.max_keysize = alg->cra_cipher.cia_max_keysize;

	inst->alg.cra_ctxsize = sizeof(struct crypto_cbc_ctx);

	inst->alg.cra_init = crypto_cbc_init_tfm;
	inst->alg.cra_exit = crypto_cbc_exit_tfm;

	inst->alg.cra_blkcipher.setkey = crypto_cbc_setkey;
	inst->alg.cra_blkcipher.encrypt = crypto_cbc_encrypt;
	inst->alg.cra_blkcipher.decrypt = crypto_cbc_decrypt;

out_put_alg:
	crypto_mod_put(alg);
	return inst;
}

static void crypto_cbc_free(struct crypto_instance *inst)
{
	crypto_drop_spawn(crypto_instance_ctx(inst));
	kfree(inst);
}

static struct crypto_template crypto_cbc_tmpl = {
	.name = "cbc",
	.alloc = crypto_cbc_alloc,
	.free = crypto_cbc_free,
	.module = THIS_MODULE,
};

static int __init crypto_cbc_module_init(void)
{
	return crypto_register_template(&crypto_cbc_tmpl);
}

static void __exit crypto_cbc_module_exit(void)
{
	crypto_unregister_template(&crypto_cbc_tmpl);
}

module_init(crypto_cbc_module_init);
module_exit(crypto_cbc_module_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("CBC block cipher algorithm");
MODULE_ALIAS_CRYPTO("cbc");
