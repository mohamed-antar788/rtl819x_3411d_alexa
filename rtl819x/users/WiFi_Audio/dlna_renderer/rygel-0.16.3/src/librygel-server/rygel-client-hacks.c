/* rygel-client-hacks.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-client-hacks.vala, do not modify */

/*
 * Copyright (C) 2011 Red Hat, Inc.
 * Copyright (C) 2010 Nokia Corporation.
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
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>
#include <gee.h>
#include <libsoup/soup.h>
#include <glib/gi18n-lib.h>


#define RYGEL_TYPE_CLIENT_HACKS (rygel_client_hacks_get_type ())
#define RYGEL_CLIENT_HACKS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_CLIENT_HACKS, RygelClientHacks))
#define RYGEL_CLIENT_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_CLIENT_HACKS, RygelClientHacksClass))
#define RYGEL_IS_CLIENT_HACKS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_CLIENT_HACKS))
#define RYGEL_IS_CLIENT_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_CLIENT_HACKS))
#define RYGEL_CLIENT_HACKS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_CLIENT_HACKS, RygelClientHacksClass))

typedef struct _RygelClientHacks RygelClientHacks;
typedef struct _RygelClientHacksClass RygelClientHacksClass;
typedef struct _RygelClientHacksPrivate RygelClientHacksPrivate;

#define RYGEL_TYPE_MEDIA_QUERY_ACTION (rygel_media_query_action_get_type ())
#define RYGEL_MEDIA_QUERY_ACTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_QUERY_ACTION, RygelMediaQueryAction))
#define RYGEL_MEDIA_QUERY_ACTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_QUERY_ACTION, RygelMediaQueryActionClass))
#define RYGEL_IS_MEDIA_QUERY_ACTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_QUERY_ACTION))
#define RYGEL_IS_MEDIA_QUERY_ACTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_QUERY_ACTION))
#define RYGEL_MEDIA_QUERY_ACTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_QUERY_ACTION, RygelMediaQueryActionClass))

typedef struct _RygelMediaQueryAction RygelMediaQueryAction;
typedef struct _RygelMediaQueryActionClass RygelMediaQueryActionClass;

#define RYGEL_TYPE_MEDIA_OBJECT (rygel_media_object_get_type ())
#define RYGEL_MEDIA_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_OBJECT, RygelMediaObject))
#define RYGEL_MEDIA_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_OBJECT, RygelMediaObjectClass))
#define RYGEL_IS_MEDIA_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_OBJECT))
#define RYGEL_IS_MEDIA_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_OBJECT))
#define RYGEL_MEDIA_OBJECT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_OBJECT, RygelMediaObjectClass))

typedef struct _RygelMediaObject RygelMediaObject;
typedef struct _RygelMediaObjectClass RygelMediaObjectClass;

#define RYGEL_TYPE_MEDIA_ITEM (rygel_media_item_get_type ())
#define RYGEL_MEDIA_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItem))
#define RYGEL_MEDIA_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItemClass))
#define RYGEL_IS_MEDIA_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_ITEM))
#define RYGEL_IS_MEDIA_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_ITEM))
#define RYGEL_MEDIA_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItemClass))

typedef struct _RygelMediaItem RygelMediaItem;
typedef struct _RygelMediaItemClass RygelMediaItemClass;

#define RYGEL_TYPE_MEDIA_CONTAINER (rygel_media_container_get_type ())
#define RYGEL_MEDIA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainer))
#define RYGEL_MEDIA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainerClass))
#define RYGEL_IS_MEDIA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_CONTAINER))
#define RYGEL_IS_MEDIA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_CONTAINER))
#define RYGEL_MEDIA_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainerClass))

typedef struct _RygelMediaContainer RygelMediaContainer;
typedef struct _RygelMediaContainerClass RygelMediaContainerClass;

#define RYGEL_TYPE_SEARCHABLE_CONTAINER (rygel_searchable_container_get_type ())
#define RYGEL_SEARCHABLE_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_SEARCHABLE_CONTAINER, RygelSearchableContainer))
#define RYGEL_IS_SEARCHABLE_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_SEARCHABLE_CONTAINER))
#define RYGEL_SEARCHABLE_CONTAINER_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_TYPE_SEARCHABLE_CONTAINER, RygelSearchableContainerIface))

typedef struct _RygelSearchableContainer RygelSearchableContainer;
typedef struct _RygelSearchableContainerIface RygelSearchableContainerIface;

#define RYGEL_TYPE_SEARCH_EXPRESSION (rygel_search_expression_get_type ())
#define RYGEL_SEARCH_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_SEARCH_EXPRESSION, RygelSearchExpression))
#define RYGEL_SEARCH_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_SEARCH_EXPRESSION, RygelSearchExpressionClass))
#define RYGEL_IS_SEARCH_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_SEARCH_EXPRESSION))
#define RYGEL_IS_SEARCH_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_SEARCH_EXPRESSION))
#define RYGEL_SEARCH_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_SEARCH_EXPRESSION, RygelSearchExpressionClass))

typedef struct _RygelSearchExpression RygelSearchExpression;
typedef struct _RygelSearchExpressionClass RygelSearchExpressionClass;

#define RYGEL_TYPE_MEDIA_OBJECTS (rygel_media_objects_get_type ())
#define RYGEL_MEDIA_OBJECTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_OBJECTS, RygelMediaObjects))
#define RYGEL_MEDIA_OBJECTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_OBJECTS, RygelMediaObjectsClass))
#define RYGEL_IS_MEDIA_OBJECTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_OBJECTS))
#define RYGEL_IS_MEDIA_OBJECTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_OBJECTS))
#define RYGEL_MEDIA_OBJECTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_OBJECTS, RygelMediaObjectsClass))

typedef struct _RygelMediaObjects RygelMediaObjects;
typedef struct _RygelMediaObjectsClass RygelMediaObjectsClass;
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define RYGEL_TYPE_PANASONIC_HACKS (rygel_panasonic_hacks_get_type ())
#define RYGEL_PANASONIC_HACKS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_PANASONIC_HACKS, RygelPanasonicHacks))
#define RYGEL_PANASONIC_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_PANASONIC_HACKS, RygelPanasonicHacksClass))
#define RYGEL_IS_PANASONIC_HACKS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_PANASONIC_HACKS))
#define RYGEL_IS_PANASONIC_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_PANASONIC_HACKS))
#define RYGEL_PANASONIC_HACKS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_PANASONIC_HACKS, RygelPanasonicHacksClass))

typedef struct _RygelPanasonicHacks RygelPanasonicHacks;
typedef struct _RygelPanasonicHacksClass RygelPanasonicHacksClass;

#define RYGEL_TYPE_XBOX_HACKS (rygel_xbox_hacks_get_type ())
#define RYGEL_XBOX_HACKS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_XBOX_HACKS, RygelXBoxHacks))
#define RYGEL_XBOX_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_XBOX_HACKS, RygelXBoxHacksClass))
#define RYGEL_IS_XBOX_HACKS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_XBOX_HACKS))
#define RYGEL_IS_XBOX_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_XBOX_HACKS))
#define RYGEL_XBOX_HACKS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_XBOX_HACKS, RygelXBoxHacksClass))

typedef struct _RygelXBoxHacks RygelXBoxHacks;
typedef struct _RygelXBoxHacksClass RygelXBoxHacksClass;

#define RYGEL_TYPE_WMP_HACKS (rygel_wmp_hacks_get_type ())
#define RYGEL_WMP_HACKS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_WMP_HACKS, RygelWMPHacks))
#define RYGEL_WMP_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_WMP_HACKS, RygelWMPHacksClass))
#define RYGEL_IS_WMP_HACKS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_WMP_HACKS))
#define RYGEL_IS_WMP_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_WMP_HACKS))
#define RYGEL_WMP_HACKS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_WMP_HACKS, RygelWMPHacksClass))

typedef struct _RygelWMPHacks RygelWMPHacks;
typedef struct _RygelWMPHacksClass RygelWMPHacksClass;

#define RYGEL_TYPE_XBMC_HACKS (rygel_xbmc_hacks_get_type ())
#define RYGEL_XBMC_HACKS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_XBMC_HACKS, RygelXBMCHacks))
#define RYGEL_XBMC_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_XBMC_HACKS, RygelXBMCHacksClass))
#define RYGEL_IS_XBMC_HACKS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_XBMC_HACKS))
#define RYGEL_IS_XBMC_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_XBMC_HACKS))
#define RYGEL_XBMC_HACKS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_XBMC_HACKS, RygelXBMCHacksClass))

typedef struct _RygelXBMCHacks RygelXBMCHacks;
typedef struct _RygelXBMCHacksClass RygelXBMCHacksClass;
#define _rygel_search_expression_unref0(var) ((var == NULL) ? NULL : (var = (rygel_search_expression_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _RygelClientHacksSearchData RygelClientHacksSearchData;

typedef enum  {
	RYGEL_CLIENT_HACKS_ERROR_NA
} RygelClientHacksError;
#define RYGEL_CLIENT_HACKS_ERROR rygel_client_hacks_error_quark ()
struct _RygelSearchableContainerIface {
	GTypeInterface parent_iface;
	void (*search) (RygelSearchableContainer* self, RygelSearchExpression* expression, guint offset, guint max_count, const gchar* sort_criteria, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
	RygelMediaObjects* (*search_finish) (RygelSearchableContainer* self, GAsyncResult* _res_, guint* total_matches, GError** error);
	GeeArrayList* (*get_search_classes) (RygelSearchableContainer* self);
	void (*set_search_classes) (RygelSearchableContainer* self, GeeArrayList* value);
};

struct _RygelClientHacks {
	GObject parent_instance;
	RygelClientHacksPrivate * priv;
	GRegex* agent_regex;
};

struct _RygelClientHacksClass {
	GObjectClass parent_class;
	void (*translate_container_id) (RygelClientHacks* self, RygelMediaQueryAction* action, gchar** container_id);
	void (*apply) (RygelClientHacks* self, RygelMediaItem* item);
	void (*filter_sort_criteria) (RygelClientHacks* self, gchar** sort_criteria);
	void (*search) (RygelClientHacks* self, RygelSearchableContainer* container, RygelSearchExpression* expression, guint offset, guint max_count, const gchar* sort_criteria, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
	RygelMediaObjects* (*search_finish) (RygelClientHacks* self, GAsyncResult* _res_, guint* total_matches, GError** error);
};

struct _RygelClientHacksPrivate {
	const gchar* _object_id;
};

struct _RygelClientHacksSearchData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	RygelClientHacks* self;
	RygelSearchableContainer* container;
	RygelSearchExpression* expression;
	guint offset;
	guint max_count;
	guint total_matches;
	gchar* sort_criteria;
	GCancellable* cancellable;
	RygelMediaObjects* result;
	RygelSearchableContainer* _tmp0_;
	RygelSearchExpression* _tmp1_;
	guint _tmp2_;
	guint _tmp3_;
	const gchar* _tmp4_;
	GCancellable* _tmp5_;
	guint _tmp6_;
	RygelMediaObjects* _tmp7_;
	RygelMediaObjects* _tmp8_;
	GError * _inner_error_;
};


static gpointer rygel_client_hacks_parent_class = NULL;

GQuark rygel_client_hacks_error_quark (void);
GType rygel_client_hacks_get_type (void) G_GNUC_CONST;
GType rygel_media_query_action_get_type (void) G_GNUC_CONST;
GType rygel_media_object_get_type (void) G_GNUC_CONST;
GType rygel_media_item_get_type (void) G_GNUC_CONST;
GType rygel_media_container_get_type (void) G_GNUC_CONST;
gpointer rygel_search_expression_ref (gpointer instance);
void rygel_search_expression_unref (gpointer instance);
GParamSpec* rygel_param_spec_search_expression (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_value_set_search_expression (GValue* value, gpointer v_object);
void rygel_value_take_search_expression (GValue* value, gpointer v_object);
gpointer rygel_value_get_search_expression (const GValue* value);
GType rygel_search_expression_get_type (void) G_GNUC_CONST;
GType rygel_media_objects_get_type (void) G_GNUC_CONST;
GType rygel_searchable_container_get_type (void) G_GNUC_CONST;
#define RYGEL_CLIENT_HACKS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_CLIENT_HACKS, RygelClientHacksPrivate))
enum  {
	RYGEL_CLIENT_HACKS_DUMMY_PROPERTY,
	RYGEL_CLIENT_HACKS_OBJECT_ID
};
#define RYGEL_CLIENT_HACKS_CORRECT_OBJECT_ID "ObjectID"
RygelClientHacks* rygel_client_hacks_construct (GType object_type, const gchar* agent, SoupMessage* message, GError** error);
static void rygel_client_hacks_check_headers (RygelClientHacks* self, SoupMessageHeaders* headers, GError** error);
RygelClientHacks* rygel_client_hacks_create (SoupMessage* message, GError** error);
RygelPanasonicHacks* rygel_panasonic_hacks_new (SoupMessage* message, GError** error);
RygelPanasonicHacks* rygel_panasonic_hacks_construct (GType object_type, SoupMessage* message, GError** error);
GType rygel_panasonic_hacks_get_type (void) G_GNUC_CONST;
RygelXBoxHacks* rygel_xbox_hacks_new (SoupMessage* message, GError** error);
RygelXBoxHacks* rygel_xbox_hacks_construct (GType object_type, SoupMessage* message, GError** error);
GType rygel_xbox_hacks_get_type (void) G_GNUC_CONST;
RygelWMPHacks* rygel_wmp_hacks_new (SoupMessage* message, GError** error);
RygelWMPHacks* rygel_wmp_hacks_construct (GType object_type, SoupMessage* message, GError** error);
GType rygel_wmp_hacks_get_type (void) G_GNUC_CONST;
RygelXBMCHacks* rygel_xbmc_hacks_new (SoupMessage* message, GError** error);
RygelXBMCHacks* rygel_xbmc_hacks_construct (GType object_type, SoupMessage* message, GError** error);
GType rygel_xbmc_hacks_get_type (void) G_GNUC_CONST;
void rygel_client_hacks_translate_container_id (RygelClientHacks* self, RygelMediaQueryAction* action, gchar** container_id);
static void rygel_client_hacks_real_translate_container_id (RygelClientHacks* self, RygelMediaQueryAction* action, gchar** container_id);
void rygel_client_hacks_apply (RygelClientHacks* self, RygelMediaItem* item);
static void rygel_client_hacks_real_apply (RygelClientHacks* self, RygelMediaItem* item);
void rygel_client_hacks_filter_sort_criteria (RygelClientHacks* self, gchar** sort_criteria);
static void rygel_client_hacks_real_filter_sort_criteria (RygelClientHacks* self, gchar** sort_criteria);
static void rygel_client_hacks_real_search_data_free (gpointer _data);
static void rygel_client_hacks_real_search (RygelClientHacks* self, RygelSearchableContainer* container, RygelSearchExpression* expression, guint offset, guint max_count, const gchar* sort_criteria, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
void rygel_client_hacks_search (RygelClientHacks* self, RygelSearchableContainer* container, RygelSearchExpression* expression, guint offset, guint max_count, const gchar* sort_criteria, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
RygelMediaObjects* rygel_client_hacks_search_finish (RygelClientHacks* self, GAsyncResult* _res_, guint* total_matches, GError** error);
static gboolean rygel_client_hacks_real_search_co (RygelClientHacksSearchData* _data_);
void rygel_searchable_container_search (RygelSearchableContainer* self, RygelSearchExpression* expression, guint offset, guint max_count, const gchar* sort_criteria, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
RygelMediaObjects* rygel_searchable_container_search_finish (RygelSearchableContainer* self, GAsyncResult* _res_, guint* total_matches, GError** error);
static void rygel_client_hacks_search_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
const gchar* rygel_client_hacks_get_object_id (RygelClientHacks* self);
void rygel_client_hacks_set_object_id (RygelClientHacks* self, const gchar* value);
static void rygel_client_hacks_finalize (GObject* obj);
static void _vala_rygel_client_hacks_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_rygel_client_hacks_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


GQuark rygel_client_hacks_error_quark (void) {
	return g_quark_from_static_string ("rygel_client_hacks_error-quark");
}


RygelClientHacks* rygel_client_hacks_construct (GType object_type, const gchar* agent, SoupMessage* message, GError** error) {
	RygelClientHacks * self = NULL;
	SoupMessage* _tmp3_;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (agent != NULL, NULL);
	self = (RygelClientHacks*) g_object_new (object_type, NULL);
	{
		const gchar* _tmp0_;
		GRegex* _tmp1_;
		GRegex* _tmp2_;
		_tmp0_ = agent;
		_tmp1_ = g_regex_new (_tmp0_, G_REGEX_CASELESS | G_REGEX_RAW, 0, &_inner_error_);
		_tmp2_ = _tmp1_;
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch14_g_regex_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		_g_regex_unref0 (self->agent_regex);
		self->agent_regex = _tmp2_;
	}
	goto __finally14;
	__catch14_g_regex_error:
	{
		GError* _error_ = NULL;
		_error_ = _inner_error_;
		_inner_error_ = NULL;
		g_assert_not_reached ();
		_g_error_free0 (_error_);
	}
	__finally14:
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == RYGEL_CLIENT_HACKS_ERROR) {
			g_propagate_error (error, _inner_error_);
			_g_object_unref0 (self);
			return NULL;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
	_tmp3_ = message;
	if (_tmp3_ != NULL) {
		SoupMessage* _tmp4_;
		SoupMessageHeaders* _tmp5_;
		_tmp4_ = message;
		_tmp5_ = _tmp4_->request_headers;
		rygel_client_hacks_check_headers (self, _tmp5_, &_inner_error_);
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == RYGEL_CLIENT_HACKS_ERROR) {
				g_propagate_error (error, _inner_error_);
				_g_object_unref0 (self);
				return NULL;
			} else {
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return NULL;
			}
		}
	}
	return self;
}


RygelClientHacks* rygel_client_hacks_create (SoupMessage* message, GError** error) {
	RygelClientHacks* result = NULL;
	SoupMessage* _tmp9_;
	RygelXBMCHacks* _tmp10_;
	RygelXBMCHacks* _tmp11_;
	GError * _inner_error_ = NULL;
	{
		SoupMessage* _tmp0_;
		RygelPanasonicHacks* _tmp1_;
		RygelPanasonicHacks* _tmp2_;
		_tmp0_ = message;
		_tmp1_ = rygel_panasonic_hacks_new (_tmp0_, &_inner_error_);
		_tmp2_ = _tmp1_;
		if (_inner_error_ != NULL) {
			goto __catch15_g_error;
		}
		result = (RygelClientHacks*) _tmp2_;
		return result;
	}
	goto __finally15;
	__catch15_g_error:
	{
		GError* _error_ = NULL;
		_error_ = _inner_error_;
		_inner_error_ = NULL;
		_g_error_free0 (_error_);
	}
	__finally15:
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == RYGEL_CLIENT_HACKS_ERROR) {
			g_propagate_error (error, _inner_error_);
			return NULL;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
	{
		SoupMessage* _tmp3_;
		RygelXBoxHacks* _tmp4_;
		RygelXBoxHacks* _tmp5_;
		_tmp3_ = message;
		_tmp4_ = rygel_xbox_hacks_new (_tmp3_, &_inner_error_);
		_tmp5_ = _tmp4_;
		if (_inner_error_ != NULL) {
			goto __catch16_g_error;
		}
		result = (RygelClientHacks*) _tmp5_;
		return result;
	}
	goto __finally16;
	__catch16_g_error:
	{
		GError* _error_ = NULL;
		_error_ = _inner_error_;
		_inner_error_ = NULL;
		_g_error_free0 (_error_);
	}
	__finally16:
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == RYGEL_CLIENT_HACKS_ERROR) {
			g_propagate_error (error, _inner_error_);
			return NULL;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
	{
		SoupMessage* _tmp6_;
		RygelWMPHacks* _tmp7_;
		RygelWMPHacks* _tmp8_;
		_tmp6_ = message;
		_tmp7_ = rygel_wmp_hacks_new (_tmp6_, &_inner_error_);
		_tmp8_ = _tmp7_;
		if (_inner_error_ != NULL) {
			goto __catch17_g_error;
		}
		result = (RygelClientHacks*) _tmp8_;
		return result;
	}
	goto __finally17;
	__catch17_g_error:
	{
		GError* _error_ = NULL;
		_error_ = _inner_error_;
		_inner_error_ = NULL;
		_g_error_free0 (_error_);
	}
	__finally17:
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == RYGEL_CLIENT_HACKS_ERROR) {
			g_propagate_error (error, _inner_error_);
			return NULL;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
	_tmp9_ = message;
	_tmp10_ = rygel_xbmc_hacks_new (_tmp9_, &_inner_error_);
	_tmp11_ = _tmp10_;
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == RYGEL_CLIENT_HACKS_ERROR) {
			g_propagate_error (error, _inner_error_);
			return NULL;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
	result = (RygelClientHacks*) _tmp11_;
	return result;
}


static void rygel_client_hacks_real_translate_container_id (RygelClientHacks* self, RygelMediaQueryAction* action, gchar** container_id) {
	g_return_if_fail (action != NULL);
	g_return_if_fail (*container_id != NULL);
}


void rygel_client_hacks_translate_container_id (RygelClientHacks* self, RygelMediaQueryAction* action, gchar** container_id) {
	g_return_if_fail (self != NULL);
	RYGEL_CLIENT_HACKS_GET_CLASS (self)->translate_container_id (self, action, container_id);
}


static void rygel_client_hacks_real_apply (RygelClientHacks* self, RygelMediaItem* item) {
	g_return_if_fail (item != NULL);
}


void rygel_client_hacks_apply (RygelClientHacks* self, RygelMediaItem* item) {
	g_return_if_fail (self != NULL);
	RYGEL_CLIENT_HACKS_GET_CLASS (self)->apply (self, item);
}


static void rygel_client_hacks_real_filter_sort_criteria (RygelClientHacks* self, gchar** sort_criteria) {
	g_return_if_fail (*sort_criteria != NULL);
}


void rygel_client_hacks_filter_sort_criteria (RygelClientHacks* self, gchar** sort_criteria) {
	g_return_if_fail (self != NULL);
	RYGEL_CLIENT_HACKS_GET_CLASS (self)->filter_sort_criteria (self, sort_criteria);
}


static void rygel_client_hacks_real_search_data_free (gpointer _data) {
	RygelClientHacksSearchData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->container);
	_rygel_search_expression_unref0 (_data_->expression);
	_g_free0 (_data_->sort_criteria);
	_g_object_unref0 (_data_->cancellable);
	_g_object_unref0 (_data_->result);
	_g_object_unref0 (_data_->self);
	g_slice_free (RygelClientHacksSearchData, _data_);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static gpointer _rygel_search_expression_ref0 (gpointer self) {
	return self ? rygel_search_expression_ref (self) : NULL;
}


static void rygel_client_hacks_real_search (RygelClientHacks* self, RygelSearchableContainer* container, RygelSearchExpression* expression, guint offset, guint max_count, const gchar* sort_criteria, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RygelClientHacksSearchData* _data_;
	RygelClientHacks* _tmp0_;
	RygelSearchableContainer* _tmp1_;
	RygelSearchableContainer* _tmp2_;
	RygelSearchExpression* _tmp3_;
	RygelSearchExpression* _tmp4_;
	guint _tmp5_;
	guint _tmp6_;
	const gchar* _tmp7_;
	gchar* _tmp8_;
	GCancellable* _tmp9_;
	GCancellable* _tmp10_;
	_data_ = g_slice_new0 (RygelClientHacksSearchData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, rygel_client_hacks_real_search);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, rygel_client_hacks_real_search_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = container;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	_data_->container = _tmp2_;
	_tmp3_ = expression;
	_tmp4_ = _rygel_search_expression_ref0 (_tmp3_);
	_data_->expression = _tmp4_;
	_tmp5_ = offset;
	_data_->offset = _tmp5_;
	_tmp6_ = max_count;
	_data_->max_count = _tmp6_;
	_tmp7_ = sort_criteria;
	_tmp8_ = g_strdup (_tmp7_);
	_data_->sort_criteria = _tmp8_;
	_tmp9_ = cancellable;
	_tmp10_ = _g_object_ref0 (_tmp9_);
	_data_->cancellable = _tmp10_;
	rygel_client_hacks_real_search_co (_data_);
}


static RygelMediaObjects* rygel_client_hacks_real_search_finish (RygelClientHacks* self, GAsyncResult* _res_, guint* total_matches, GError** error) {
	RygelMediaObjects* result;
	RygelClientHacksSearchData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return NULL;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
	if (total_matches) {
		*total_matches = _data_->total_matches;
	}
	result = _data_->result;
	_data_->result = NULL;
	return result;
}


static void rygel_client_hacks_search_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	RygelClientHacksSearchData* _data_;
	_data_ = _user_data_;
	_data_->_source_object_ = source_object;
	_data_->_res_ = _res_;
	rygel_client_hacks_real_search_co (_data_);
}


static gboolean rygel_client_hacks_real_search_co (RygelClientHacksSearchData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		case 1:
		goto _state_1;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = _data_->container;
	_data_->_tmp1_ = _data_->expression;
	_data_->_tmp2_ = _data_->offset;
	_data_->_tmp3_ = _data_->max_count;
	_data_->_tmp4_ = _data_->sort_criteria;
	_data_->_tmp5_ = _data_->cancellable;
	_data_->_tmp6_ = 0U;
	_data_->_state_ = 1;
	rygel_searchable_container_search (_data_->_tmp0_, _data_->_tmp1_, _data_->_tmp2_, _data_->_tmp3_, _data_->_tmp4_, _data_->_tmp5_, rygel_client_hacks_search_ready, _data_);
	return FALSE;
	_state_1:
	_data_->_tmp7_ = NULL;
	_data_->_tmp7_ = rygel_searchable_container_search_finish (_data_->_tmp0_, _data_->_res_, &_data_->_tmp6_, &_data_->_inner_error_);
	_data_->total_matches = _data_->_tmp6_;
	_data_->_tmp8_ = _data_->_tmp7_;
	if (_data_->_inner_error_ != NULL) {
		g_simple_async_result_set_from_error (_data_->_async_result, _data_->_inner_error_);
		g_error_free (_data_->_inner_error_);
		if (_data_->_state_ == 0) {
			g_simple_async_result_complete_in_idle (_data_->_async_result);
		} else {
			g_simple_async_result_complete (_data_->_async_result);
		}
		g_object_unref (_data_->_async_result);
		return FALSE;
	}
	_data_->result = _data_->_tmp8_;
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


void rygel_client_hacks_search (RygelClientHacks* self, RygelSearchableContainer* container, RygelSearchExpression* expression, guint offset, guint max_count, const gchar* sort_criteria, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RYGEL_CLIENT_HACKS_GET_CLASS (self)->search (self, container, expression, offset, max_count, sort_criteria, cancellable, _callback_, _user_data_);
}


RygelMediaObjects* rygel_client_hacks_search_finish (RygelClientHacks* self, GAsyncResult* _res_, guint* total_matches, GError** error) {
	return RYGEL_CLIENT_HACKS_GET_CLASS (self)->search_finish (self, _res_, total_matches, error);
}


static void rygel_client_hacks_check_headers (RygelClientHacks* self, SoupMessageHeaders* headers, GError** error) {
	SoupMessageHeaders* _tmp0_;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_;
	gchar* agent;
	gboolean _tmp3_ = FALSE;
	const gchar* _tmp4_;
	gboolean _tmp8_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (headers != NULL);
	_tmp0_ = headers;
	_tmp1_ = soup_message_headers_get_one (_tmp0_, "User-Agent");
	_tmp2_ = g_strdup (_tmp1_);
	agent = _tmp2_;
	_tmp4_ = agent;
	if (_tmp4_ == NULL) {
		_tmp3_ = TRUE;
	} else {
		GRegex* _tmp5_;
		const gchar* _tmp6_;
		gboolean _tmp7_ = FALSE;
		_tmp5_ = self->agent_regex;
		_tmp6_ = agent;
		_tmp7_ = g_regex_match (_tmp5_, _tmp6_, 0, NULL);
		_tmp3_ = !_tmp7_;
	}
	_tmp8_ = _tmp3_;
	if (_tmp8_) {
		const gchar* _tmp9_ = NULL;
		GError* _tmp10_;
		_tmp9_ = _ ("Not Applicable");
		_tmp10_ = g_error_new_literal (RYGEL_CLIENT_HACKS_ERROR, RYGEL_CLIENT_HACKS_ERROR_NA, _tmp9_);
		_inner_error_ = _tmp10_;
		if (_inner_error_->domain == RYGEL_CLIENT_HACKS_ERROR) {
			g_propagate_error (error, _inner_error_);
			_g_free0 (agent);
			return;
		} else {
			_g_free0 (agent);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
	}
	_g_free0 (agent);
}


const gchar* rygel_client_hacks_get_object_id (RygelClientHacks* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_object_id;
	result = _tmp0_;
	return result;
}


void rygel_client_hacks_set_object_id (RygelClientHacks* self, const gchar* value) {
	const gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_object_id = _tmp0_;
	g_object_notify ((GObject *) self, "object-id");
}


static void rygel_client_hacks_class_init (RygelClientHacksClass * klass) {
	rygel_client_hacks_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelClientHacksPrivate));
	RYGEL_CLIENT_HACKS_CLASS (klass)->translate_container_id = rygel_client_hacks_real_translate_container_id;
	RYGEL_CLIENT_HACKS_CLASS (klass)->apply = rygel_client_hacks_real_apply;
	RYGEL_CLIENT_HACKS_CLASS (klass)->filter_sort_criteria = rygel_client_hacks_real_filter_sort_criteria;
	RYGEL_CLIENT_HACKS_CLASS (klass)->search = rygel_client_hacks_real_search;
	RYGEL_CLIENT_HACKS_CLASS (klass)->search_finish = rygel_client_hacks_real_search_finish;
	G_OBJECT_CLASS (klass)->get_property = _vala_rygel_client_hacks_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_rygel_client_hacks_set_property;
	G_OBJECT_CLASS (klass)->finalize = rygel_client_hacks_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_CLIENT_HACKS_OBJECT_ID, g_param_spec_string ("object-id", "object-id", "object-id", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void rygel_client_hacks_instance_init (RygelClientHacks * self) {
	self->priv = RYGEL_CLIENT_HACKS_GET_PRIVATE (self);
	self->priv->_object_id = RYGEL_CLIENT_HACKS_CORRECT_OBJECT_ID;
}


static void rygel_client_hacks_finalize (GObject* obj) {
	RygelClientHacks * self;
	self = RYGEL_CLIENT_HACKS (obj);
	_g_regex_unref0 (self->agent_regex);
	G_OBJECT_CLASS (rygel_client_hacks_parent_class)->finalize (obj);
}


GType rygel_client_hacks_get_type (void) {
	static volatile gsize rygel_client_hacks_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_client_hacks_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelClientHacksClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_client_hacks_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelClientHacks), 0, (GInstanceInitFunc) rygel_client_hacks_instance_init, NULL };
		GType rygel_client_hacks_type_id;
		rygel_client_hacks_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelClientHacks", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&rygel_client_hacks_type_id__volatile, rygel_client_hacks_type_id);
	}
	return rygel_client_hacks_type_id__volatile;
}


static void _vala_rygel_client_hacks_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	RygelClientHacks * self;
	self = RYGEL_CLIENT_HACKS (object);
	switch (property_id) {
		case RYGEL_CLIENT_HACKS_OBJECT_ID:
		g_value_set_string (value, rygel_client_hacks_get_object_id (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_rygel_client_hacks_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	RygelClientHacks * self;
	self = RYGEL_CLIENT_HACKS (object);
	switch (property_id) {
		case RYGEL_CLIENT_HACKS_OBJECT_ID:
		rygel_client_hacks_set_object_id (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



