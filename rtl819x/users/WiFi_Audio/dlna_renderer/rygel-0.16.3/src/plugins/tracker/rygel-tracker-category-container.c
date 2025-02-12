/* rygel-tracker-category-container.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-tracker-category-container.vala, do not modify */

/*
 * Copyright (C) 2010 Nokia Corporation.
 *
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *                               <zeeshan.ali@nokia.com>
 *
 * This file is part of Rygel.
 *
 * Rygel is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Rygel is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include <glib.h>
#include <glib-object.h>
#include <rygel-server.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>
#include <gio/gio.h>


#define RYGEL_TRACKER_TYPE_CATEGORY_CONTAINER (rygel_tracker_category_container_get_type ())
#define RYGEL_TRACKER_CATEGORY_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_CATEGORY_CONTAINER, RygelTrackerCategoryContainer))
#define RYGEL_TRACKER_CATEGORY_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_CATEGORY_CONTAINER, RygelTrackerCategoryContainerClass))
#define RYGEL_TRACKER_IS_CATEGORY_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_CATEGORY_CONTAINER))
#define RYGEL_TRACKER_IS_CATEGORY_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_CATEGORY_CONTAINER))
#define RYGEL_TRACKER_CATEGORY_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_CATEGORY_CONTAINER, RygelTrackerCategoryContainerClass))

typedef struct _RygelTrackerCategoryContainer RygelTrackerCategoryContainer;
typedef struct _RygelTrackerCategoryContainerClass RygelTrackerCategoryContainerClass;
typedef struct _RygelTrackerCategoryContainerPrivate RygelTrackerCategoryContainerPrivate;

#define RYGEL_TRACKER_TYPE_ITEM_FACTORY (rygel_tracker_item_factory_get_type ())
#define RYGEL_TRACKER_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactory))
#define RYGEL_TRACKER_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactoryClass))
#define RYGEL_TRACKER_IS_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY))
#define RYGEL_TRACKER_IS_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_ITEM_FACTORY))
#define RYGEL_TRACKER_ITEM_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactoryClass))

typedef struct _RygelTrackerItemFactory RygelTrackerItemFactory;
typedef struct _RygelTrackerItemFactoryClass RygelTrackerItemFactoryClass;

#define RYGEL_TRACKER_TYPE_SEARCH_CONTAINER (rygel_tracker_search_container_get_type ())
#define RYGEL_TRACKER_SEARCH_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER, RygelTrackerSearchContainer))
#define RYGEL_TRACKER_SEARCH_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER, RygelTrackerSearchContainerClass))
#define RYGEL_TRACKER_IS_SEARCH_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER))
#define RYGEL_TRACKER_IS_SEARCH_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER))
#define RYGEL_TRACKER_SEARCH_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER, RygelTrackerSearchContainerClass))

typedef struct _RygelTrackerSearchContainer RygelTrackerSearchContainer;
typedef struct _RygelTrackerSearchContainerClass RygelTrackerSearchContainerClass;

#define RYGEL_TRACKER_TYPE_CATEGORY_ALL_CONTAINER (rygel_tracker_category_all_container_get_type ())
#define RYGEL_TRACKER_CATEGORY_ALL_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_CATEGORY_ALL_CONTAINER, RygelTrackerCategoryAllContainer))
#define RYGEL_TRACKER_CATEGORY_ALL_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_CATEGORY_ALL_CONTAINER, RygelTrackerCategoryAllContainerClass))
#define RYGEL_TRACKER_IS_CATEGORY_ALL_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_CATEGORY_ALL_CONTAINER))
#define RYGEL_TRACKER_IS_CATEGORY_ALL_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_CATEGORY_ALL_CONTAINER))
#define RYGEL_TRACKER_CATEGORY_ALL_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_CATEGORY_ALL_CONTAINER, RygelTrackerCategoryAllContainerClass))

typedef struct _RygelTrackerCategoryAllContainer RygelTrackerCategoryAllContainer;
typedef struct _RygelTrackerCategoryAllContainerClass RygelTrackerCategoryAllContainerClass;
#define _rygel_tracker_item_factory_unref0(var) ((var == NULL) ? NULL : (var = (rygel_tracker_item_factory_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block1Data Block1Data;

#define RYGEL_TRACKER_TYPE_METADATA_CONTAINER (rygel_tracker_metadata_container_get_type ())
#define RYGEL_TRACKER_METADATA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_METADATA_CONTAINER, RygelTrackerMetadataContainer))
#define RYGEL_TRACKER_METADATA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_METADATA_CONTAINER, RygelTrackerMetadataContainerClass))
#define RYGEL_TRACKER_IS_METADATA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_METADATA_CONTAINER))
#define RYGEL_TRACKER_IS_METADATA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_METADATA_CONTAINER))
#define RYGEL_TRACKER_METADATA_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_METADATA_CONTAINER, RygelTrackerMetadataContainerClass))

typedef struct _RygelTrackerMetadataContainer RygelTrackerMetadataContainer;
typedef struct _RygelTrackerMetadataContainerClass RygelTrackerMetadataContainerClass;

#define RYGEL_TRACKER_TYPE_METADATA_MULTI_VALUES (rygel_tracker_metadata_multi_values_get_type ())
#define RYGEL_TRACKER_METADATA_MULTI_VALUES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_METADATA_MULTI_VALUES, RygelTrackerMetadataMultiValues))
#define RYGEL_TRACKER_METADATA_MULTI_VALUES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_METADATA_MULTI_VALUES, RygelTrackerMetadataMultiValuesClass))
#define RYGEL_TRACKER_IS_METADATA_MULTI_VALUES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_METADATA_MULTI_VALUES))
#define RYGEL_TRACKER_IS_METADATA_MULTI_VALUES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_METADATA_MULTI_VALUES))
#define RYGEL_TRACKER_METADATA_MULTI_VALUES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_METADATA_MULTI_VALUES, RygelTrackerMetadataMultiValuesClass))

typedef struct _RygelTrackerMetadataMultiValues RygelTrackerMetadataMultiValues;
typedef struct _RygelTrackerMetadataMultiValuesClass RygelTrackerMetadataMultiValuesClass;

#define RYGEL_TRACKER_TYPE_TAGS (rygel_tracker_tags_get_type ())
#define RYGEL_TRACKER_TAGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_TAGS, RygelTrackerTags))
#define RYGEL_TRACKER_TAGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_TAGS, RygelTrackerTagsClass))
#define RYGEL_TRACKER_IS_TAGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_TAGS))
#define RYGEL_TRACKER_IS_TAGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_TAGS))
#define RYGEL_TRACKER_TAGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_TAGS, RygelTrackerTagsClass))

typedef struct _RygelTrackerTags RygelTrackerTags;
typedef struct _RygelTrackerTagsClass RygelTrackerTagsClass;

#define RYGEL_TRACKER_TYPE_METADATA_VALUES (rygel_tracker_metadata_values_get_type ())
#define RYGEL_TRACKER_METADATA_VALUES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_METADATA_VALUES, RygelTrackerMetadataValues))
#define RYGEL_TRACKER_METADATA_VALUES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_METADATA_VALUES, RygelTrackerMetadataValuesClass))
#define RYGEL_TRACKER_IS_METADATA_VALUES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_METADATA_VALUES))
#define RYGEL_TRACKER_IS_METADATA_VALUES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_METADATA_VALUES))
#define RYGEL_TRACKER_METADATA_VALUES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_METADATA_VALUES, RygelTrackerMetadataValuesClass))

typedef struct _RygelTrackerMetadataValues RygelTrackerMetadataValues;
typedef struct _RygelTrackerMetadataValuesClass RygelTrackerMetadataValuesClass;

#define RYGEL_TRACKER_TYPE_TITLES (rygel_tracker_titles_get_type ())
#define RYGEL_TRACKER_TITLES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_TITLES, RygelTrackerTitles))
#define RYGEL_TRACKER_TITLES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_TITLES, RygelTrackerTitlesClass))
#define RYGEL_TRACKER_IS_TITLES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_TITLES))
#define RYGEL_TRACKER_IS_TITLES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_TITLES))
#define RYGEL_TRACKER_TITLES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_TITLES, RygelTrackerTitlesClass))

typedef struct _RygelTrackerTitles RygelTrackerTitles;
typedef struct _RygelTrackerTitlesClass RygelTrackerTitlesClass;

#define RYGEL_TRACKER_TYPE_NEW (rygel_tracker_new_get_type ())
#define RYGEL_TRACKER_NEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_NEW, RygelTrackerNew))
#define RYGEL_TRACKER_NEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_NEW, RygelTrackerNewClass))
#define RYGEL_TRACKER_IS_NEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_NEW))
#define RYGEL_TRACKER_IS_NEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_NEW))
#define RYGEL_TRACKER_NEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_NEW, RygelTrackerNewClass))

typedef struct _RygelTrackerNew RygelTrackerNew;
typedef struct _RygelTrackerNewClass RygelTrackerNewClass;

struct _RygelTrackerCategoryContainer {
	RygelSimpleContainer parent_instance;
	RygelTrackerCategoryContainerPrivate * priv;
	RygelTrackerItemFactory* item_factory;
};

struct _RygelTrackerCategoryContainerClass {
	RygelSimpleContainerClass parent_class;
};

struct _RygelTrackerCategoryContainerPrivate {
	RygelTrackerCategoryAllContainer* all_container;
};

struct _Block1Data {
	int _ref_count_;
	RygelTrackerCategoryContainer * self;
	gulong signal_id;
};


static gpointer rygel_tracker_category_container_parent_class = NULL;

GType rygel_tracker_category_container_get_type (void) G_GNUC_CONST;
gpointer rygel_tracker_item_factory_ref (gpointer instance);
void rygel_tracker_item_factory_unref (gpointer instance);
GParamSpec* rygel_tracker_param_spec_item_factory (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_tracker_value_set_item_factory (GValue* value, gpointer v_object);
void rygel_tracker_value_take_item_factory (GValue* value, gpointer v_object);
gpointer rygel_tracker_value_get_item_factory (const GValue* value);
GType rygel_tracker_item_factory_get_type (void) G_GNUC_CONST;
GType rygel_tracker_search_container_get_type (void) G_GNUC_CONST;
GType rygel_tracker_category_all_container_get_type (void) G_GNUC_CONST;
#define RYGEL_TRACKER_CATEGORY_CONTAINER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TRACKER_TYPE_CATEGORY_CONTAINER, RygelTrackerCategoryContainerPrivate))
enum  {
	RYGEL_TRACKER_CATEGORY_CONTAINER_DUMMY_PROPERTY
};
RygelTrackerCategoryContainer* rygel_tracker_category_container_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, RygelTrackerItemFactory* item_factory);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
RygelTrackerCategoryAllContainer* rygel_tracker_category_all_container_new (RygelTrackerCategoryContainer* parent);
RygelTrackerCategoryAllContainer* rygel_tracker_category_all_container_construct (GType object_type, RygelTrackerCategoryContainer* parent);
RygelTrackerTags* rygel_tracker_tags_new (RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory);
RygelTrackerTags* rygel_tracker_tags_construct (GType object_type, RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory);
GType rygel_tracker_metadata_container_get_type (void) G_GNUC_CONST;
GType rygel_tracker_metadata_multi_values_get_type (void) G_GNUC_CONST;
GType rygel_tracker_tags_get_type (void) G_GNUC_CONST;
RygelTrackerTitles* rygel_tracker_titles_new (RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory);
RygelTrackerTitles* rygel_tracker_titles_construct (GType object_type, RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory);
GType rygel_tracker_metadata_values_get_type (void) G_GNUC_CONST;
GType rygel_tracker_titles_get_type (void) G_GNUC_CONST;
RygelTrackerNew* rygel_tracker_new_new (RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory);
RygelTrackerNew* rygel_tracker_new_construct (GType object_type, RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory);
GType rygel_tracker_new_get_type (void) G_GNUC_CONST;
static void __lambda3_ (Block1Data* _data1_);
static void rygel_tracker_category_container_on_all_container_updated (RygelTrackerCategoryContainer* self, RygelMediaContainer* other);
static void _rygel_tracker_category_container_on_all_container_updated_rygel_media_container_container_updated (RygelMediaContainer* _sender, RygelMediaContainer* container, gpointer self);
static void ___lambda3__rygel_media_container_container_updated (RygelMediaContainer* _sender, RygelMediaContainer* container, gpointer self);
void rygel_tracker_category_container_add_create_class (RygelTrackerCategoryContainer* self, const gchar* create_class);
static void rygel_tracker_category_container_trigger_child_update (RygelTrackerCategoryContainer* self, RygelMediaObjects* children);
void rygel_tracker_metadata_container_fetch_metadata_values (RygelTrackerMetadataContainer* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void rygel_tracker_metadata_container_fetch_metadata_values_finish (RygelTrackerMetadataContainer* self, GAsyncResult* _res_);
void rygel_tracker_search_container_get_children_count (RygelTrackerSearchContainer* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void rygel_tracker_search_container_get_children_count_finish (RygelTrackerSearchContainer* self, GAsyncResult* _res_);
static void rygel_tracker_category_container_finalize (GObject* obj);


static Block1Data* block1_data_ref (Block1Data* _data1_) {
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		RygelTrackerCategoryContainer * self;
		self = _data1_->self;
		_g_object_unref0 (self);
		g_slice_free (Block1Data, _data1_);
	}
}


static gpointer _rygel_tracker_item_factory_ref0 (gpointer self) {
	return self ? rygel_tracker_item_factory_ref (self) : NULL;
}


static void _rygel_tracker_category_container_on_all_container_updated_rygel_media_container_container_updated (RygelMediaContainer* _sender, RygelMediaContainer* container, gpointer self) {
	rygel_tracker_category_container_on_all_container_updated (self, container);
}


static void __lambda3_ (Block1Data* _data1_) {
	RygelTrackerCategoryContainer * self;
	RygelTrackerCategoryAllContainer* _tmp0_;
	RygelTrackerCategoryAllContainer* _tmp1_;
	gulong _tmp2_;
	self = _data1_->self;
	_tmp0_ = self->priv->all_container;
	g_signal_connect_object ((RygelMediaContainer*) _tmp0_, "container-updated", (GCallback) _rygel_tracker_category_container_on_all_container_updated_rygel_media_container_container_updated, self, 0);
	_tmp1_ = self->priv->all_container;
	_tmp2_ = _data1_->signal_id;
	g_signal_handler_disconnect ((GObject*) _tmp1_, _tmp2_);
}


static void ___lambda3__rygel_media_container_container_updated (RygelMediaContainer* _sender, RygelMediaContainer* container, gpointer self) {
	__lambda3_ (self);
}


RygelTrackerCategoryContainer* rygel_tracker_category_container_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, RygelTrackerItemFactory* item_factory) {
	RygelTrackerCategoryContainer * self = NULL;
	Block1Data* _data1_;
	const gchar* _tmp0_;
	RygelMediaContainer* _tmp1_;
	const gchar* _tmp2_;
	RygelTrackerItemFactory* _tmp3_;
	RygelTrackerItemFactory* _tmp4_;
	RygelTrackerCategoryAllContainer* _tmp5_;
	RygelTrackerCategoryAllContainer* _tmp6_;
	RygelTrackerItemFactory* _tmp7_;
	RygelTrackerTags* _tmp8_;
	RygelTrackerTags* _tmp9_;
	RygelTrackerItemFactory* _tmp10_;
	RygelTrackerTitles* _tmp11_;
	RygelTrackerTitles* _tmp12_;
	RygelTrackerItemFactory* _tmp13_;
	RygelTrackerNew* _tmp14_;
	RygelTrackerNew* _tmp15_;
	RygelTrackerCategoryAllContainer* _tmp16_;
	gulong _tmp17_ = 0UL;
	g_return_val_if_fail (id != NULL, NULL);
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (title != NULL, NULL);
	g_return_val_if_fail (item_factory != NULL, NULL);
	_data1_ = g_slice_new0 (Block1Data);
	_data1_->_ref_count_ = 1;
	_tmp0_ = id;
	_tmp1_ = parent;
	_tmp2_ = title;
	self = (RygelTrackerCategoryContainer*) rygel_simple_container_construct (object_type, _tmp0_, _tmp1_, _tmp2_);
	_data1_->self = g_object_ref (self);
	_tmp3_ = item_factory;
	_tmp4_ = _rygel_tracker_item_factory_ref0 (_tmp3_);
	_rygel_tracker_item_factory_unref0 (self->item_factory);
	self->item_factory = _tmp4_;
	_tmp5_ = rygel_tracker_category_all_container_new (self);
	_g_object_unref0 (self->priv->all_container);
	self->priv->all_container = _tmp5_;
	_tmp6_ = self->priv->all_container;
	rygel_simple_container_add_child_container ((RygelSimpleContainer*) self, (RygelMediaContainer*) _tmp6_);
	_tmp7_ = item_factory;
	_tmp8_ = rygel_tracker_tags_new ((RygelMediaContainer*) self, _tmp7_);
	_tmp9_ = _tmp8_;
	rygel_simple_container_add_child_container ((RygelSimpleContainer*) self, (RygelMediaContainer*) _tmp9_);
	_g_object_unref0 (_tmp9_);
	_tmp10_ = self->item_factory;
	_tmp11_ = rygel_tracker_titles_new ((RygelMediaContainer*) self, _tmp10_);
	_tmp12_ = _tmp11_;
	rygel_simple_container_add_child_container ((RygelSimpleContainer*) self, (RygelMediaContainer*) _tmp12_);
	_g_object_unref0 (_tmp12_);
	_tmp13_ = self->item_factory;
	_tmp14_ = rygel_tracker_new_new ((RygelMediaContainer*) self, _tmp13_);
	_tmp15_ = _tmp14_;
	rygel_simple_container_add_child_container ((RygelSimpleContainer*) self, (RygelMediaContainer*) _tmp15_);
	_g_object_unref0 (_tmp15_);
	_data1_->signal_id = (gulong) 0;
	_tmp16_ = self->priv->all_container;
	_tmp17_ = g_signal_connect_data ((RygelMediaContainer*) _tmp16_, "container-updated", (GCallback) ___lambda3__rygel_media_container_container_updated, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
	_data1_->signal_id = _tmp17_;
	block1_data_unref (_data1_);
	_data1_ = NULL;
	return self;
}


void rygel_tracker_category_container_add_create_class (RygelTrackerCategoryContainer* self, const gchar* create_class) {
	RygelTrackerCategoryAllContainer* _tmp0_;
	GeeArrayList* _tmp1_;
	GeeArrayList* _tmp2_;
	const gchar* _tmp3_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (create_class != NULL);
	_tmp0_ = self->priv->all_container;
	_tmp1_ = rygel_writable_container_get_create_classes ((RygelWritableContainer*) _tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = create_class;
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp2_, _tmp3_);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void rygel_tracker_category_container_trigger_child_update (RygelTrackerCategoryContainer* self, RygelMediaObjects* children) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (children != NULL);
	{
		RygelMediaObjects* _tmp0_;
		RygelMediaObjects* _tmp1_;
		RygelMediaObjects* _container_list;
		RygelMediaObjects* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		gint _container_size;
		gint _container_index;
		_tmp0_ = children;
		_tmp1_ = _g_object_ref0 (_tmp0_);
		_container_list = _tmp1_;
		_tmp2_ = _container_list;
		_tmp3_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_container_size = _tmp4_;
		_container_index = -1;
		while (TRUE) {
			gint _tmp5_;
			gint _tmp6_;
			gint _tmp7_;
			RygelMediaObjects* _tmp8_;
			gint _tmp9_;
			gpointer _tmp10_ = NULL;
			RygelMediaObject* container;
			gboolean _tmp11_ = FALSE;
			RygelMediaObject* _tmp12_;
			RygelTrackerCategoryAllContainer* _tmp13_;
			gboolean _tmp15_;
			RygelMediaObject* _tmp16_;
			_tmp5_ = _container_index;
			_container_index = _tmp5_ + 1;
			_tmp6_ = _container_index;
			_tmp7_ = _container_size;
			if (!(_tmp6_ < _tmp7_)) {
				break;
			}
			_tmp8_ = _container_list;
			_tmp9_ = _container_index;
			_tmp10_ = gee_abstract_list_get ((GeeAbstractList*) _tmp8_, _tmp9_);
			container = (RygelMediaObject*) _tmp10_;
			_tmp12_ = container;
			_tmp13_ = self->priv->all_container;
			if (_tmp12_ == RYGEL_MEDIA_OBJECT (_tmp13_)) {
				_tmp11_ = TRUE;
			} else {
				RygelMediaObject* _tmp14_;
				_tmp14_ = container;
				_tmp11_ = _tmp14_ == NULL;
			}
			_tmp15_ = _tmp11_;
			if (_tmp15_) {
				_g_object_unref0 (container);
				continue;
			}
			_tmp16_ = container;
			if (RYGEL_TRACKER_IS_METADATA_VALUES (_tmp16_)) {
				RygelMediaObject* _tmp17_;
				_tmp17_ = container;
				rygel_tracker_metadata_container_fetch_metadata_values ((RygelTrackerMetadataContainer*) (RYGEL_TRACKER_IS_METADATA_VALUES (_tmp17_) ? ((RygelTrackerMetadataValues*) _tmp17_) : NULL), NULL, NULL);
			} else {
				RygelMediaObject* _tmp18_;
				_tmp18_ = container;
				if (RYGEL_TRACKER_IS_SEARCH_CONTAINER (_tmp18_)) {
					RygelMediaObject* _tmp19_;
					_tmp19_ = container;
					rygel_tracker_search_container_get_children_count (RYGEL_TRACKER_IS_SEARCH_CONTAINER (_tmp19_) ? ((RygelTrackerSearchContainer*) _tmp19_) : NULL, NULL, NULL);
				}
			}
			_g_object_unref0 (container);
		}
		_g_object_unref0 (_container_list);
	}
}


static void rygel_tracker_category_container_on_all_container_updated (RygelTrackerCategoryContainer* self, RygelMediaContainer* other) {
	RygelMediaContainer* _tmp0_;
	RygelTrackerCategoryAllContainer* _tmp1_;
	RygelMediaObjects* _tmp2_ = NULL;
	RygelMediaObjects* _tmp3_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (other != NULL);
	_tmp0_ = other;
	_tmp1_ = self->priv->all_container;
	if (_tmp0_ != RYGEL_MEDIA_CONTAINER (_tmp1_)) {
		return;
	}
	_tmp2_ = rygel_simple_container_get_all_children ((RygelSimpleContainer*) self);
	_tmp3_ = _tmp2_;
	rygel_tracker_category_container_trigger_child_update (self, _tmp3_);
	_g_object_unref0 (_tmp3_);
}


static void rygel_tracker_category_container_class_init (RygelTrackerCategoryContainerClass * klass) {
	rygel_tracker_category_container_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelTrackerCategoryContainerPrivate));
	G_OBJECT_CLASS (klass)->finalize = rygel_tracker_category_container_finalize;
}


static void rygel_tracker_category_container_instance_init (RygelTrackerCategoryContainer * self) {
	self->priv = RYGEL_TRACKER_CATEGORY_CONTAINER_GET_PRIVATE (self);
}


static void rygel_tracker_category_container_finalize (GObject* obj) {
	RygelTrackerCategoryContainer * self;
	self = RYGEL_TRACKER_CATEGORY_CONTAINER (obj);
	_rygel_tracker_item_factory_unref0 (self->item_factory);
	_g_object_unref0 (self->priv->all_container);
	G_OBJECT_CLASS (rygel_tracker_category_container_parent_class)->finalize (obj);
}


/**
 * Container listing content hierarchy for a specific category.
 */
GType rygel_tracker_category_container_get_type (void) {
	static volatile gsize rygel_tracker_category_container_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_tracker_category_container_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelTrackerCategoryContainerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_tracker_category_container_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelTrackerCategoryContainer), 0, (GInstanceInitFunc) rygel_tracker_category_container_instance_init, NULL };
		GType rygel_tracker_category_container_type_id;
		rygel_tracker_category_container_type_id = g_type_register_static (RYGEL_TYPE_SIMPLE_CONTAINER, "RygelTrackerCategoryContainer", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&rygel_tracker_category_container_type_id__volatile, rygel_tracker_category_container_type_id);
	}
	return rygel_tracker_category_container_type_id__volatile;
}



