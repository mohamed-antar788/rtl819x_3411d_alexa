/*
 * Winnov WNV1 codec
 * Copyright (c) 2005 Konstantin Shishkov
 *
 * This file is part of Libav.
 *
 * Libav is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * Libav is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with Libav; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

/**
 * @file
 * Winnov WNV1 codec.
 */

#include "avcodec.h"
#include "get_bits.h"
#include "libavutil/common.h"


typedef struct WNV1Context{
    AVCodecContext *avctx;
    AVFrame pic;

    int shift;
    GetBitContext gb;
} WNV1Context;

static const uint16_t code_tab[16][2]={
{0x1FD,9}, {0xFD,8}, {0x7D,7}, {0x3D,6}, {0x1D,5}, {0x0D,4}, {0x005,3},
{0x000,1},
{0x004,3}, {0x0C,4}, {0x1C,5}, {0x3C,6}, {0x7C,7}, {0xFC,8}, {0x1FC,9}, {0xFF,8}
};

#define CODE_VLC_BITS 9
static VLC code_vlc;

/* returns modified base_value */
static inline int wnv1_get_code(WNV1Context *w, int base_value)
{
    int v = get_vlc2(&w->gb, code_vlc.table, CODE_VLC_BITS, 1);

    if(v==15)
        return av_reverse[ get_bits(&w->gb, 8 - w->shift) ];
    else
        return base_value + ((v - 7)<<w->shift);
}

static int decode_frame(AVCodecContext *avctx,
                        void *data, int *data_size,
                        AVPacket *avpkt)
{
    const uint8_t *buf = avpkt->data;
    int buf_size = avpkt->size;
    WNV1Context * const l = avctx->priv_data;
    AVFrame * const p= (AVFrame*)&l->pic;
    unsigned char *Y,*U,*V;
    int i, j;
    int prev_y = 0, prev_u = 0, prev_v = 0;
    uint8_t *rbuf;

    if (buf_size < 8) {
        av_log(avctx, AV_LOG_ERROR, "Packet is too short\n");
        return AVERROR_INVALIDDATA;
    }

    rbuf = av_malloc(buf_size + FF_INPUT_BUFFER_PADDING_SIZE);
    if(!rbuf){
        av_log(avctx, AV_LOG_ERROR, "Cannot allocate temporary buffer\n");
        return -1;
    }

    if(p->data[0])
        avctx->release_buffer(avctx, p);

    p->reference = 0;
    if(avctx->get_buffer(avctx, p) < 0){
        av_log(avctx, AV_LOG_ERROR, "get_buffer() failed\n");
        av_free(rbuf);
        return -1;
    }
    p->key_frame = 1;

    for(i=8; i<buf_size; i++)
        rbuf[i]= av_reverse[ buf[i] ];
    init_get_bits(&l->gb, rbuf+8, (buf_size-8)*8);

    if (buf[2] >> 4 == 6)
        l->shift = 2;
    else {
        l->shift = 8 - (buf[2] >> 4);
        if (l->shift > 4) {
            av_log_ask_for_sample(avctx, "Unknown WNV1 frame header value %i\n",
                                  buf[2] >> 4);
            l->shift = 4;
        }
        if (l->shift < 1) {
            av_log_ask_for_sample(avctx, "Unknown WNV1 frame header value %i\n",
                                  buf[2] >> 4);
            l->shift = 1;
        }
    }

    Y = p->data[0];
    U = p->data[1];
    V = p->data[2];
    for (j = 0; j < avctx->height; j++) {
        for (i = 0; i < avctx->width / 2; i++) {
            Y[i * 2] = wnv1_get_code(l, prev_y);
            prev_u = U[i] = wnv1_get_code(l, prev_u);
            prev_y = Y[(i * 2) + 1] = wnv1_get_code(l, Y[i * 2]);
            prev_v = V[i] = wnv1_get_code(l, prev_v);
        }
        Y += p->linesize[0];
        U += p->linesize[1];
        V += p->linesize[2];
    }


    *data_size = sizeof(AVFrame);
    *(AVFrame*)data = l->pic;
    av_free(rbuf);

    return buf_size;
}

static av_cold int decode_init(AVCodecContext *avctx){
    WNV1Context * const l = avctx->priv_data;
    static VLC_TYPE code_table[1 << CODE_VLC_BITS][2];

    l->avctx = avctx;
    avctx->pix_fmt = PIX_FMT_YUV422P;

    code_vlc.table = code_table;
    code_vlc.table_allocated = 1 << CODE_VLC_BITS;
    init_vlc(&code_vlc, CODE_VLC_BITS, 16,
             &code_tab[0][1], 4, 2,
             &code_tab[0][0], 4, 2, INIT_VLC_USE_NEW_STATIC);

    return 0;
}

static av_cold int decode_end(AVCodecContext *avctx){
    WNV1Context * const l = avctx->priv_data;
    AVFrame *pic = &l->pic;

    if (pic->data[0])
        avctx->release_buffer(avctx, pic);

    return 0;
}

AVCodec ff_wnv1_decoder = {
    .name           = "wnv1",
    .type           = AVMEDIA_TYPE_VIDEO,
    .id             = CODEC_ID_WNV1,
    .priv_data_size = sizeof(WNV1Context),
    .init           = decode_init,
    .close          = decode_end,
    .decode         = decode_frame,
    .capabilities   = CODEC_CAP_DR1,
    .long_name = NULL_IF_CONFIG_SMALL("Winnov WNV1"),
};
