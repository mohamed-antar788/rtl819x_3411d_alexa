/* rygel-tracker-years.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-tracker-years.vala, do not modify */

/*
 * Copyright (C) 2009 Nokia Corporation.
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
#include <glib/gi18n-lib.h>


#define RYGEL_TRACKER_TYPE_METADATA_CONTAINER (rygel_tracker_metadata_container_get_type ())
#define RYGEL_TRACKER_METADATA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_METADATA_CONTAINER, RygelTrackerMetadataContainer))
#define RYGEL_TRACKER_METADATA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_METADATA_CONTAINER, RygelTrackerMetadataContainerClass))
#define RYGEL_TRACKER_IS_METADATA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_METADATA_CONTAINER))
#define RYGEL_TRACKER_IS_METADATA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_METADATA_CONTAINER))
#define RYGEL_TRACKER_METADATA_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_METADATA_CONTAINER, RygelTrackerMetadataContainerClass))

typedef struct _RygelTrackerMetadataContainer RygelTrackerMetadataContainer;
typedef struct _RygelTrackerMetadataContainerClass RygelTrackerMetadataContainerClass;
typedef struct _RygelTrackerMetadataContainerPrivate RygelTrackerMetadataContainerPrivate;

#define RYGEL_TRACKER_TYPE_QUERY (rygel_tracker_query_get_type ())
#define RYGEL_TRACKER_QUERY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_QUERY, RygelTrackerQuery))
#define RYGEL_TRACKER_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_QUERY, RygelTrackerQueryClass))
#define RYGEL_TRACKER_IS_QUERY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_QUERY))
#define RYGEL_TRACKER_IS_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_QUERY))
#define RYGEL_TRACKER_QUERY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_QUERY, RygelTrackerQueryClass))

typedef struct _RygelTrackerQuery RygelTrackerQuery;
typedef struct _RygelTrackerQueryClass RygelTrackerQueryClass;

#define RYGEL_TRACKER_TYPE_SELECTION_QUERY (rygel_tracker_selection_query_get_type ())
#define RYGEL_TRACKER_SELECTION_QUERY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_SELECTION_QUERY, RygelTrackerSelectionQuery))
#define RYGEL_TRACKER_SELECTION_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_SELECTION_QUERY, RygelTrackerSelectionQueryClass))
#define RYGEL_TRACKER_IS_SELECTION_QUERY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_SELECTION_QUERY))
#define RYGEL_TRACKER_IS_SELECTION_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_SELECTION_QUERY))
#define RYGEL_TRACKER_SELECTION_QUERY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_SELECTION_QUERY, RygelTrackerSelectionQueryClass))

typedef struct _RygelTrackerSelectionQuery RygelTrackerSelectionQuery;
typedef struct _RygelTrackerSelectionQueryClass RygelTrackerSelectionQueryClass;

#define RYGEL_TRACKER_TYPE_SEARCH_CONTAINER (rygel_tracker_search_container_get_type ())
#define RYGEL_TRACKER_SEARCH_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER, RygelTrackerSearchContainer))
#define RYGEL_TRACKER_SEARCH_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER, RygelTrackerSearchContainerClass))
#define RYGEL_TRACKER_IS_SEARCH_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER))
#define RYGEL_TRACKER_IS_SEARCH_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER))
#define RYGEL_TRACKER_SEARCH_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER, RygelTrackerSearchContainerClass))

typedef struct _RygelTrackerSearchContainer RygelTrackerSearchContainer;
typedef struct _RygelTrackerSearchContainerClass RygelTrackerSearchContainerClass;

#define RYGEL_TRACKER_TYPE_ITEM_FACTORY (rygel_tracker_item_factory_get_type ())
#define RYGEL_TRACKER_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactory))
#define RYGEL_TRACKER_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactoryClass))
#define RYGEL_TRACKER_IS_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY))
#define RYGEL_TRACKER_IS_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_ITEM_FACTORY))
#define RYGEL_TRACKER_ITEM_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactoryClass))

typedef struct _RygelTrackerItemFactory RygelTrackerItemFactory;
typedef struct _RygelTrackerItemFactoryClass RygelTrackerItemFactoryClass;

#define RYGEL_TRACKER_TYPE_QUERY_TRIPLETS (rygel_tracker_query_triplets_get_type ())
#define RYGEL_TRACKER_QUERY_TRIPLETS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS, RygelTrackerQueryTriplets))
#define RYGEL_TRACKER_QUERY_TRIPLETS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS, RygelTrackerQueryTripletsClass))
#define RYGEL_TRACKER_IS_QUERY_TRIPLETS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS))
#define RYGEL_TRACKER_IS_QUERY_TRIPLETS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS))
#define RYGEL_TRACKER_QUERY_TRIPLETS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS, RygelTrackerQueryTripletsClass))

typedef struct _RygelTrackerQueryTriplets RygelTrackerQueryTriplets;
typedef struct _RygelTrackerQueryTripletsClass RygelTrackerQueryTripletsClass;

#define RYGEL_TRACKER_TYPE_METADATA_VALUES (rygel_tracker_metadata_values_get_type ())
#define RYGEL_TRACKER_METADATA_VALUES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_METADATA_VALUES, RygelTrackerMetadataValues))
#define RYGEL_TRACKER_METADATA_VALUES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_METADATA_VALUES, RygelTrackerMetadataValuesClass))
#define RYGEL_TRACKER_IS_METADATA_VALUES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_METADATA_VALUES))
#define RYGEL_TRACKER_IS_METADATA_VALUES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_METADATA_VALUES))
#define RYGEL_TRACKER_METADATA_VALUES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_METADATA_VALUES, RygelTrackerMetadataValuesClass))

typedef struct _RygelTrackerMetadataValues RygelTrackerMetadataValues;
typedef struct _RygelTrackerMetadataValuesClass RygelTrackerMetadataValuesClass;
typedef struct _RygelTrackerMetadataValuesPrivate RygelTrackerMetadataValuesPrivate;

#define RYGEL_TRACKER_TYPE_YEARS (rygel_tracker_years_get_type ())
#define RYGEL_TRACKER_YEARS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_YEARS, RygelTrackerYears))
#define RYGEL_TRACKER_YEARS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_YEARS, RygelTrackerYearsClass))
#define RYGEL_TRACKER_IS_YEARS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_YEARS))
#define RYGEL_TRACKER_IS_YEARS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_YEARS))
#define RYGEL_TRACKER_YEARS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_YEARS, RygelTrackerYearsClass))

typedef struct _RygelTrackerYears RygelTrackerYears;
typedef struct _RygelTrackerYearsClass RygelTrackerYearsClass;
typedef struct _RygelTrackerYearsPrivate RygelTrackerYearsPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _RygelTrackerMetadataContainer {
	RygelSimpleContainer parent_instance;
	RygelTrackerMetadataContainerPrivate * priv;
	RygelTrackerItemFactory* item_factory;
	RygelTrackerQueryTriplets* triplets;
};

struct _RygelTrackerMetadataContainerClass {
	RygelSimpleContainerClass parent_class;
	RygelTrackerSelectionQuery* (*create_query) (RygelTrackerMetadataContainer* self);
	RygelTrackerSearchContainer* (*create_container) (RygelTrackerMetadataContainer* self, const gchar* id, const gchar* title, const gchar* value);
	gchar* (*create_id_for_title) (RygelTrackerMetadataContainer* self, const gchar* title);
	gchar* (*create_title_for_value) (RygelTrackerMetadataContainer* self, const gchar* value);
	gchar* (*create_filter) (RygelTrackerMetadataContainer* self, const gchar* variable, const gchar* value);
};

struct _RygelTrackerMetadataValues {
	RygelTrackerMetadataContainer parent_instance;
	RygelTrackerMetadataValuesPrivate * priv;
};

struct _RygelTrackerMetadataValuesClass {
	RygelTrackerMetadataContainerClass parent_class;
};

struct _RygelTrackerYears {
	RygelTrackerMetadataValues parent_instance;
	RygelTrackerYearsPrivate * priv;
};

struct _RygelTrackerYearsClass {
	RygelTrackerMetadataValuesClass parent_class;
};


static gpointer rygel_tracker_years_parent_class = NULL;

GType rygel_tracker_metadata_container_get_type (void) G_GNUC_CONST;
gpointer rygel_tracker_query_ref (gpointer instance);
void rygel_tracker_query_unref (gpointer instance);
GParamSpec* rygel_tracker_param_spec_query (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_tracker_value_set_query (GValue* value, gpointer v_object);
void rygel_tracker_value_take_query (GValue* value, gpointer v_object);
gpointer rygel_tracker_value_get_query (const GValue* value);
GType rygel_tracker_query_get_type (void) G_GNUC_CONST;
GType rygel_tracker_selection_query_get_type (void) G_GNUC_CONST;
GType rygel_tracker_search_container_get_type (void) G_GNUC_CONST;
gpointer rygel_tracker_item_factory_ref (gpointer instance);
void rygel_tracker_item_factory_unref (gpointer instance);
GParamSpec* rygel_tracker_param_spec_item_factory (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_tracker_value_set_item_factory (GValue* value, gpointer v_object);
void rygel_tracker_value_take_item_factory (GValue* value, gpointer v_object);
gpointer rygel_tracker_value_get_item_factory (const GValue* value);
GType rygel_tracker_item_factory_get_type (void) G_GNUC_CONST;
GType rygel_tracker_query_triplets_get_type (void) G_GNUC_CONST;
GType rygel_tracker_metadata_values_get_type (void) G_GNUC_CONST;
GType rygel_tracker_years_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_TRACKER_YEARS_DUMMY_PROPERTY
};
RygelTrackerYears* rygel_tracker_years_new (RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory);
RygelTrackerYears* rygel_tracker_years_construct (GType object_type, RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory);
RygelTrackerMetadataValues* rygel_tracker_metadata_values_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, RygelTrackerItemFactory* item_factory, const gchar* property, const gchar* child_class);
static gchar* rygel_tracker_years_real_create_title_for_value (RygelTrackerMetadataContainer* base, const gchar* value);
static gchar* rygel_tracker_years_real_create_filter (RygelTrackerMetadataContainer* base, const gchar* variable, const gchar* value);
gchar* rygel_tracker_metadata_container_create_title_for_value (RygelTrackerMetadataContainer* self, const gchar* value);


RygelTrackerYears* rygel_tracker_years_construct (GType object_type, RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory) {
	RygelTrackerYears * self = NULL;
	RygelMediaContainer* _tmp0_;
	const gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	RygelMediaContainer* _tmp4_;
	const gchar* _tmp5_ = NULL;
	RygelTrackerItemFactory* _tmp6_;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (item_factory != NULL, NULL);
	_tmp0_ = parent;
	_tmp1_ = ((RygelMediaObject*) _tmp0_)->id;
	_tmp2_ = g_strconcat (_tmp1_, "Year", NULL);
	_tmp3_ = _tmp2_;
	_tmp4_ = parent;
	_tmp5_ = _ ("Year");
	_tmp6_ = item_factory;
	self = (RygelTrackerYears*) rygel_tracker_metadata_values_construct (object_type, _tmp3_, _tmp4_, _tmp5_, _tmp6_, "date", NULL);
	_g_free0 (_tmp3_);
	return self;
}


RygelTrackerYears* rygel_tracker_years_new (RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory) {
	return rygel_tracker_years_construct (RYGEL_TRACKER_TYPE_YEARS, parent, item_factory);
}


static glong string_strnlen (gchar* str, glong maxlen) {
	glong result = 0L;
	gchar* _tmp0_;
	glong _tmp1_;
	gchar* _tmp2_ = NULL;
	gchar* end;
	gchar* _tmp3_;
	_tmp0_ = str;
	_tmp1_ = maxlen;
	_tmp2_ = memchr (_tmp0_, 0, (gsize) _tmp1_);
	end = _tmp2_;
	_tmp3_ = end;
	if (_tmp3_ == NULL) {
		glong _tmp4_;
		_tmp4_ = maxlen;
		result = _tmp4_;
		return result;
	} else {
		gchar* _tmp5_;
		gchar* _tmp6_;
		_tmp5_ = end;
		_tmp6_ = str;
		result = (glong) (_tmp5_ - _tmp6_);
		return result;
	}
}


static gchar* string_substring (const gchar* self, glong offset, glong len) {
	gchar* result = NULL;
	glong string_length = 0L;
	gboolean _tmp0_ = FALSE;
	glong _tmp1_;
	gboolean _tmp3_;
	glong _tmp9_;
	glong _tmp15_;
	glong _tmp18_;
	glong _tmp19_;
	glong _tmp20_;
	glong _tmp21_;
	glong _tmp22_;
	gchar* _tmp23_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp1_ = offset;
	if (_tmp1_ >= ((glong) 0)) {
		glong _tmp2_;
		_tmp2_ = len;
		_tmp0_ = _tmp2_ >= ((glong) 0);
	} else {
		_tmp0_ = FALSE;
	}
	_tmp3_ = _tmp0_;
	if (_tmp3_) {
		glong _tmp4_;
		glong _tmp5_;
		glong _tmp6_ = 0L;
		_tmp4_ = offset;
		_tmp5_ = len;
		_tmp6_ = string_strnlen ((gchar*) self, _tmp4_ + _tmp5_);
		string_length = _tmp6_;
	} else {
		gint _tmp7_;
		gint _tmp8_;
		_tmp7_ = strlen (self);
		_tmp8_ = _tmp7_;
		string_length = (glong) _tmp8_;
	}
	_tmp9_ = offset;
	if (_tmp9_ < ((glong) 0)) {
		glong _tmp10_;
		glong _tmp11_;
		glong _tmp12_;
		_tmp10_ = string_length;
		_tmp11_ = offset;
		offset = _tmp10_ + _tmp11_;
		_tmp12_ = offset;
		g_return_val_if_fail (_tmp12_ >= ((glong) 0), NULL);
	} else {
		glong _tmp13_;
		glong _tmp14_;
		_tmp13_ = offset;
		_tmp14_ = string_length;
		g_return_val_if_fail (_tmp13_ <= _tmp14_, NULL);
	}
	_tmp15_ = len;
	if (_tmp15_ < ((glong) 0)) {
		glong _tmp16_;
		glong _tmp17_;
		_tmp16_ = string_length;
		_tmp17_ = offset;
		len = _tmp16_ - _tmp17_;
	}
	_tmp18_ = offset;
	_tmp19_ = len;
	_tmp20_ = string_length;
	g_return_val_if_fail ((_tmp18_ + _tmp19_) <= _tmp20_, NULL);
	_tmp21_ = offset;
	_tmp22_ = len;
	_tmp23_ = g_strndup (((gchar*) self) + _tmp21_, (gsize) _tmp22_);
	result = _tmp23_;
	return result;
}


static gchar* rygel_tracker_years_real_create_title_for_value (RygelTrackerMetadataContainer* base, const gchar* value) {
	RygelTrackerYears * self;
	gchar* result = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_ = NULL;
	self = (RygelTrackerYears*) base;
	g_return_val_if_fail (value != NULL, NULL);
	_tmp0_ = value;
	_tmp1_ = string_substring (_tmp0_, (glong) 0, (glong) 4);
	result = _tmp1_;
	return result;
}


static gchar* rygel_tracker_years_real_create_filter (RygelTrackerMetadataContainer* base, const gchar* variable, const gchar* value) {
	RygelTrackerYears * self;
	gchar* result = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_ = NULL;
	gchar* year;
	const gchar* _tmp2_;
	gint _tmp3_ = 0;
	gchar* _tmp4_ = NULL;
	gchar* next_year;
	const gchar* _tmp5_;
	gchar* _tmp6_;
	const gchar* _tmp7_;
	gchar* _tmp8_;
	const gchar* _tmp9_;
	gchar* _tmp10_;
	gchar* _tmp11_;
	const gchar* _tmp12_;
	gchar* _tmp13_;
	gchar* _tmp14_;
	gchar* _tmp15_;
	gchar* _tmp16_;
	const gchar* _tmp17_;
	gchar* _tmp18_;
	gchar* _tmp19_;
	gchar* _tmp20_;
	gchar* _tmp21_;
	const gchar* _tmp22_;
	gchar* _tmp23_;
	gchar* _tmp24_;
	gchar* _tmp25_;
	gchar* _tmp26_;
	self = (RygelTrackerYears*) base;
	g_return_val_if_fail (variable != NULL, NULL);
	g_return_val_if_fail (value != NULL, NULL);
	_tmp0_ = value;
	_tmp1_ = rygel_tracker_metadata_container_create_title_for_value ((RygelTrackerMetadataContainer*) self, _tmp0_);
	year = _tmp1_;
	_tmp2_ = year;
	_tmp3_ = atoi (_tmp2_);
	_tmp4_ = g_strdup_printf ("%i", _tmp3_ + 1);
	next_year = _tmp4_;
	_tmp5_ = year;
	_tmp6_ = g_strconcat (_tmp5_, "-01-01T00:00:00Z", NULL);
	_g_free0 (year);
	year = _tmp6_;
	_tmp7_ = next_year;
	_tmp8_ = g_strconcat (_tmp7_, "-01-01T00:00:00Z", NULL);
	_g_free0 (next_year);
	next_year = _tmp8_;
	_tmp9_ = variable;
	_tmp10_ = g_strconcat (_tmp9_, " > \"", NULL);
	_tmp11_ = _tmp10_;
	_tmp12_ = year;
	_tmp13_ = g_strconcat (_tmp11_, _tmp12_, NULL);
	_tmp14_ = _tmp13_;
	_tmp15_ = g_strconcat (_tmp14_, "\" && ", NULL);
	_tmp16_ = _tmp15_;
	_tmp17_ = variable;
	_tmp18_ = g_strconcat (_tmp16_, _tmp17_, NULL);
	_tmp19_ = _tmp18_;
	_tmp20_ = g_strconcat (_tmp19_, " < \"", NULL);
	_tmp21_ = _tmp20_;
	_tmp22_ = next_year;
	_tmp23_ = g_strconcat (_tmp21_, _tmp22_, NULL);
	_tmp24_ = _tmp23_;
	_tmp25_ = g_strconcat (_tmp24_, "\"", NULL);
	_tmp26_ = _tmp25_;
	_g_free0 (_tmp24_);
	_g_free0 (_tmp21_);
	_g_free0 (_tmp19_);
	_g_free0 (_tmp16_);
	_g_free0 (_tmp14_);
	_g_free0 (_tmp11_);
	result = _tmp26_;
	_g_free0 (next_year);
	_g_free0 (year);
	return result;
}


static void rygel_tracker_years_class_init (RygelTrackerYearsClass * klass) {
	rygel_tracker_years_parent_class = g_type_class_peek_parent (klass);
	RYGEL_TRACKER_METADATA_CONTAINER_CLASS (klass)->create_title_for_value = rygel_tracker_years_real_create_title_for_value;
	RYGEL_TRACKER_METADATA_CONTAINER_CLASS (klass)->create_filter = rygel_tracker_years_real_create_filter;
}


static void rygel_tracker_years_instance_init (RygelTrackerYears * self) {
}


/**
 * Container listing content hierarchy by year of creation.
 */
GType rygel_tracker_years_get_type (void) {
	static volatile gsize rygel_tracker_years_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_tracker_years_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelTrackerYearsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_tracker_years_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelTrackerYears), 0, (GInstanceInitFunc) rygel_tracker_years_instance_init, NULL };
		GType rygel_tracker_years_type_id;
		rygel_tracker_years_type_id = g_type_register_static (RYGEL_TRACKER_TYPE_METADATA_VALUES, "RygelTrackerYears", &g_define_type_info, 0);
		g_once_init_leave (&rygel_tracker_years_type_id__volatile, rygel_tracker_years_type_id);
	}
	return rygel_tracker_years_type_id__volatile;
}



