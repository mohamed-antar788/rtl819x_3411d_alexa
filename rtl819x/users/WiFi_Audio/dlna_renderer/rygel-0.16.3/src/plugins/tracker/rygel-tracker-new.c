/* rygel-tracker-new.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-tracker-new.vala, do not modify */

/*
 * Copyright (C) 2008 Zeeshan Ali (Khattak) <zeeshanak@gnome.org>.
 * Copyright (C) 2008,2010 Nokia Corporation.
 *
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
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
#include <libtracker-sparql/tracker-sparql.h>


#define RYGEL_TRACKER_TYPE_SEARCH_CONTAINER (rygel_tracker_search_container_get_type ())
#define RYGEL_TRACKER_SEARCH_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER, RygelTrackerSearchContainer))
#define RYGEL_TRACKER_SEARCH_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER, RygelTrackerSearchContainerClass))
#define RYGEL_TRACKER_IS_SEARCH_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER))
#define RYGEL_TRACKER_IS_SEARCH_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER))
#define RYGEL_TRACKER_SEARCH_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER, RygelTrackerSearchContainerClass))

typedef struct _RygelTrackerSearchContainer RygelTrackerSearchContainer;
typedef struct _RygelTrackerSearchContainerClass RygelTrackerSearchContainerClass;
typedef struct _RygelTrackerSearchContainerPrivate RygelTrackerSearchContainerPrivate;

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

#define RYGEL_TRACKER_TYPE_ITEM_FACTORY (rygel_tracker_item_factory_get_type ())
#define RYGEL_TRACKER_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactory))
#define RYGEL_TRACKER_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactoryClass))
#define RYGEL_TRACKER_IS_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY))
#define RYGEL_TRACKER_IS_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_ITEM_FACTORY))
#define RYGEL_TRACKER_ITEM_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactoryClass))

typedef struct _RygelTrackerItemFactory RygelTrackerItemFactory;
typedef struct _RygelTrackerItemFactoryClass RygelTrackerItemFactoryClass;

#define RYGEL_TRACKER_TYPE_NEW (rygel_tracker_new_get_type ())
#define RYGEL_TRACKER_NEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_NEW, RygelTrackerNew))
#define RYGEL_TRACKER_NEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_NEW, RygelTrackerNewClass))
#define RYGEL_TRACKER_IS_NEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_NEW))
#define RYGEL_TRACKER_IS_NEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_NEW))
#define RYGEL_TRACKER_NEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_NEW, RygelTrackerNewClass))

typedef struct _RygelTrackerNew RygelTrackerNew;
typedef struct _RygelTrackerNewClass RygelTrackerNewClass;
typedef struct _RygelTrackerNewPrivate RygelTrackerNewPrivate;

#define RYGEL_TRACKER_TYPE_QUERY_TRIPLETS (rygel_tracker_query_triplets_get_type ())
#define RYGEL_TRACKER_QUERY_TRIPLETS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS, RygelTrackerQueryTriplets))
#define RYGEL_TRACKER_QUERY_TRIPLETS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS, RygelTrackerQueryTripletsClass))
#define RYGEL_TRACKER_IS_QUERY_TRIPLETS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS))
#define RYGEL_TRACKER_IS_QUERY_TRIPLETS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS))
#define RYGEL_TRACKER_QUERY_TRIPLETS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS, RygelTrackerQueryTripletsClass))

typedef struct _RygelTrackerQueryTriplets RygelTrackerQueryTriplets;
typedef struct _RygelTrackerQueryTripletsClass RygelTrackerQueryTripletsClass;
typedef struct _RygelTrackerItemFactoryPrivate RygelTrackerItemFactoryPrivate;

#define RYGEL_TRACKER_TYPE_QUERY_TRIPLET (rygel_tracker_query_triplet_get_type ())
#define RYGEL_TRACKER_QUERY_TRIPLET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLET, RygelTrackerQueryTriplet))
#define RYGEL_TRACKER_QUERY_TRIPLET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_QUERY_TRIPLET, RygelTrackerQueryTripletClass))
#define RYGEL_TRACKER_IS_QUERY_TRIPLET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLET))
#define RYGEL_TRACKER_IS_QUERY_TRIPLET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_QUERY_TRIPLET))
#define RYGEL_TRACKER_QUERY_TRIPLET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLET, RygelTrackerQueryTripletClass))

typedef struct _RygelTrackerQueryTriplet RygelTrackerQueryTriplet;
typedef struct _RygelTrackerQueryTripletClass RygelTrackerQueryTripletClass;
#define _rygel_tracker_query_triplet_unref0(var) ((var == NULL) ? NULL : (var = (rygel_tracker_query_triplet_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _RygelTrackerSearchContainer {
	RygelSimpleContainer parent_instance;
	RygelTrackerSearchContainerPrivate * priv;
	RygelTrackerSelectionQuery* query;
	RygelTrackerItemFactory* item_factory;
};

struct _RygelTrackerSearchContainerClass {
	RygelSimpleContainerClass parent_class;
};

struct _RygelTrackerNew {
	RygelTrackerSearchContainer parent_instance;
	RygelTrackerNewPrivate * priv;
};

struct _RygelTrackerNewClass {
	RygelTrackerSearchContainerClass parent_class;
};

struct _RygelTrackerItemFactory {
	GTypeInstance parent_instance;
	volatile int ref_count;
	RygelTrackerItemFactoryPrivate * priv;
	gchar* category;
	gchar* category_iri;
	gchar* upnp_class;
	gchar* upload_dir;
	GeeArrayList* properties;
};

struct _RygelTrackerItemFactoryClass {
	GTypeClass parent_class;
	void (*finalize) (RygelTrackerItemFactory *self);
	RygelMediaItem* (*create) (RygelTrackerItemFactory* self, const gchar* id, const gchar* uri, RygelTrackerSearchContainer* parent, TrackerSparqlCursor* metadata, GError** error);
	void (*set_metadata) (RygelTrackerItemFactory* self, RygelMediaItem* item, const gchar* uri, TrackerSparqlCursor* metadata, GError** error);
};


static gpointer rygel_tracker_new_parent_class = NULL;

GType rygel_tracker_search_container_get_type (void) G_GNUC_CONST;
gpointer rygel_tracker_query_ref (gpointer instance);
void rygel_tracker_query_unref (gpointer instance);
GParamSpec* rygel_tracker_param_spec_query (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_tracker_value_set_query (GValue* value, gpointer v_object);
void rygel_tracker_value_take_query (GValue* value, gpointer v_object);
gpointer rygel_tracker_value_get_query (const GValue* value);
GType rygel_tracker_query_get_type (void) G_GNUC_CONST;
GType rygel_tracker_selection_query_get_type (void) G_GNUC_CONST;
gpointer rygel_tracker_item_factory_ref (gpointer instance);
void rygel_tracker_item_factory_unref (gpointer instance);
GParamSpec* rygel_tracker_param_spec_item_factory (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_tracker_value_set_item_factory (GValue* value, gpointer v_object);
void rygel_tracker_value_take_item_factory (GValue* value, gpointer v_object);
gpointer rygel_tracker_value_get_item_factory (const GValue* value);
GType rygel_tracker_item_factory_get_type (void) G_GNUC_CONST;
GType rygel_tracker_new_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_TRACKER_NEW_DUMMY_PROPERTY
};
#define RYGEL_TRACKER_NEW_ADDED_PREDICATE "tracker:added"
#define RYGEL_TRACKER_NEW_ADDED_VARIABLE "?added"
#define RYGEL_TRACKER_NEW_THREE_DAYS_AS_SEC ((glong) 259200)
RygelTrackerNew* rygel_tracker_new_new (RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory);
RygelTrackerNew* rygel_tracker_new_construct (GType object_type, RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory);
RygelTrackerQueryTriplets* rygel_tracker_query_triplets_new (void);
RygelTrackerQueryTriplets* rygel_tracker_query_triplets_construct (GType object_type);
GType rygel_tracker_query_triplets_get_type (void) G_GNUC_CONST;
#define RYGEL_TRACKER_SELECTION_QUERY_ITEM_VARIABLE "?item"
RygelTrackerQueryTriplet* rygel_tracker_query_triplet_new (const gchar* subject, const gchar* predicate, const gchar* obj);
RygelTrackerQueryTriplet* rygel_tracker_query_triplet_construct (GType object_type, const gchar* subject, const gchar* predicate, const gchar* obj);
gpointer rygel_tracker_query_triplet_ref (gpointer instance);
void rygel_tracker_query_triplet_unref (gpointer instance);
GParamSpec* rygel_tracker_param_spec_query_triplet (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_tracker_value_set_query_triplet (GValue* value, gpointer v_object);
void rygel_tracker_value_take_query_triplet (GValue* value, gpointer v_object);
gpointer rygel_tracker_value_get_query_triplet (const GValue* value);
GType rygel_tracker_query_triplet_get_type (void) G_GNUC_CONST;
RygelTrackerSearchContainer* rygel_tracker_search_container_new (const gchar* id, RygelMediaContainer* parent, const gchar* title, RygelTrackerItemFactory* item_factory, RygelTrackerQueryTriplets* triplets, GeeArrayList* filters);
RygelTrackerSearchContainer* rygel_tracker_search_container_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, RygelTrackerItemFactory* item_factory, RygelTrackerQueryTriplets* triplets, GeeArrayList* filters);


RygelTrackerNew* rygel_tracker_new_construct (GType object_type, RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory) {
	RygelTrackerNew * self = NULL;
	RygelTrackerQueryTriplets* _tmp0_;
	RygelTrackerQueryTriplets* triplets;
	RygelTrackerItemFactory* _tmp1_;
	const gchar* _tmp2_;
	RygelTrackerQueryTriplet* _tmp3_;
	RygelTrackerQueryTriplet* _tmp4_;
	RygelTrackerQueryTriplet* _tmp5_;
	RygelTrackerQueryTriplet* _tmp6_;
	GTimeVal time = {0};
	glong _tmp7_;
	GeeArrayList* _tmp8_;
	GeeArrayList* filters;
	gchar* _tmp9_ = NULL;
	gchar* _tmp10_;
	gchar* _tmp11_;
	gchar* _tmp12_;
	gchar* _tmp13_;
	gchar* _tmp14_;
	RygelMediaContainer* _tmp15_;
	const gchar* _tmp16_;
	gchar* _tmp17_;
	gchar* _tmp18_;
	RygelMediaContainer* _tmp19_;
	RygelTrackerItemFactory* _tmp20_;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (item_factory != NULL, NULL);
	_tmp0_ = rygel_tracker_query_triplets_new ();
	triplets = _tmp0_;
	_tmp1_ = item_factory;
	_tmp2_ = _tmp1_->category;
	_tmp3_ = rygel_tracker_query_triplet_new (RYGEL_TRACKER_SELECTION_QUERY_ITEM_VARIABLE, "a", _tmp2_);
	_tmp4_ = _tmp3_;
	gee_abstract_collection_add ((GeeAbstractCollection*) triplets, _tmp4_);
	_rygel_tracker_query_triplet_unref0 (_tmp4_);
	_tmp5_ = rygel_tracker_query_triplet_new (RYGEL_TRACKER_SELECTION_QUERY_ITEM_VARIABLE, RYGEL_TRACKER_NEW_ADDED_PREDICATE, RYGEL_TRACKER_NEW_ADDED_VARIABLE);
	_tmp6_ = _tmp5_;
	gee_abstract_collection_add ((GeeAbstractCollection*) triplets, _tmp6_);
	_rygel_tracker_query_triplet_unref0 (_tmp6_);
	g_get_current_time (&time);
	_tmp7_ = time.tv_sec;
	time.tv_sec = _tmp7_ - RYGEL_TRACKER_NEW_THREE_DAYS_AS_SEC;
	_tmp8_ = gee_array_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL);
	filters = _tmp8_;
	_tmp9_ = g_time_val_to_iso8601 (&time);
	_tmp10_ = _tmp9_;
	_tmp11_ = g_strconcat (RYGEL_TRACKER_NEW_ADDED_VARIABLE " > \"", _tmp10_, NULL);
	_tmp12_ = _tmp11_;
	_tmp13_ = g_strconcat (_tmp12_, "\"", NULL);
	_tmp14_ = _tmp13_;
	gee_abstract_collection_add ((GeeAbstractCollection*) filters, _tmp14_);
	_g_free0 (_tmp14_);
	_g_free0 (_tmp12_);
	_g_free0 (_tmp10_);
	_tmp15_ = parent;
	_tmp16_ = ((RygelMediaObject*) _tmp15_)->id;
	_tmp17_ = g_strconcat (_tmp16_, "New", NULL);
	_tmp18_ = _tmp17_;
	_tmp19_ = parent;
	_tmp20_ = item_factory;
	self = (RygelTrackerNew*) rygel_tracker_search_container_construct (object_type, _tmp18_, _tmp19_, "New", _tmp20_, triplets, filters);
	_g_free0 (_tmp18_);
	_g_object_unref0 (filters);
	_g_object_unref0 (triplets);
	return self;
}


RygelTrackerNew* rygel_tracker_new_new (RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory) {
	return rygel_tracker_new_construct (RYGEL_TRACKER_TYPE_NEW, parent, item_factory);
}


static void rygel_tracker_new_class_init (RygelTrackerNewClass * klass) {
	rygel_tracker_new_parent_class = g_type_class_peek_parent (klass);
}


static void rygel_tracker_new_instance_init (RygelTrackerNew * self) {
}


/**
 * A container listing all newly (<3 days) added items.
 */
GType rygel_tracker_new_get_type (void) {
	static volatile gsize rygel_tracker_new_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_tracker_new_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelTrackerNewClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_tracker_new_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelTrackerNew), 0, (GInstanceInitFunc) rygel_tracker_new_instance_init, NULL };
		GType rygel_tracker_new_type_id;
		rygel_tracker_new_type_id = g_type_register_static (RYGEL_TRACKER_TYPE_SEARCH_CONTAINER, "RygelTrackerNew", &g_define_type_info, 0);
		g_once_init_leave (&rygel_tracker_new_type_id__volatile, rygel_tracker_new_type_id);
	}
	return rygel_tracker_new_type_id__volatile;
}



