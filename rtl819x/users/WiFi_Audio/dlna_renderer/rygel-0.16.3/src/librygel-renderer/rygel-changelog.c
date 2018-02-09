/* rygel-changelog.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-changelog.vala, do not modify */

/*
 * Copyright (C) 2008 OpenedHand Ltd.
 * Copyright (C) 2009 Nokia Corporation.
 *
 * Author: Jorn Baayen <jorn@openedhand.com>
 *         Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *                               <zeeshan.ali@nokia.com>
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
#include <libgupnp/gupnp.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>
#include "rygel-libpre.h"

#define RYGEL_TYPE_CHANGE_LOG (rygel_change_log_get_type ())
#define RYGEL_CHANGE_LOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_CHANGE_LOG, RygelChangeLog))
#define RYGEL_CHANGE_LOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_CHANGE_LOG, RygelChangeLogClass))
#define RYGEL_IS_CHANGE_LOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_CHANGE_LOG))
#define RYGEL_IS_CHANGE_LOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_CHANGE_LOG))
#define RYGEL_CHANGE_LOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_CHANGE_LOG, RygelChangeLogClass))

typedef struct _RygelChangeLog RygelChangeLog;
typedef struct _RygelChangeLogClass RygelChangeLogClass;
typedef struct _RygelChangeLogPrivate RygelChangeLogPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_string_free0(var) ((var == NULL) ? NULL : (var = (g_string_free (var, TRUE), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _RygelChangeLog {
	GObject parent_instance;
	RygelChangeLogPrivate * priv;
};

struct _RygelChangeLogClass {
	GObjectClass parent_class;
};

struct _RygelChangeLogPrivate {
	GUPnPService* _service;
	gchar* service_ns;
	GString* str;
	GeeHashMap* hash;
	guint timeout_id;
	int isForTransition;
};


static gpointer rygel_change_log_parent_class = NULL;

GType rygel_change_log_get_type (void) G_GNUC_CONST;
#define RYGEL_CHANGE_LOG_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_CHANGE_LOG, RygelChangeLogPrivate))
enum  {
	RYGEL_CHANGE_LOG_DUMMY_PROPERTY,
	RYGEL_CHANGE_LOG_SERVICE
};
RygelChangeLog* rygel_change_log_new (GUPnPService* service, const gchar* service_ns);
RygelChangeLog* rygel_change_log_construct (GType object_type, GUPnPService* service, const gchar* service_ns);
void rygel_change_log_set_service (RygelChangeLog* self, GUPnPService* value);
static gboolean rygel_change_log_timeout (RygelChangeLog* self);
GUPnPService* rygel_change_log_get_service (RygelChangeLog* self);
gchar* rygel_change_log_finish (RygelChangeLog* self);
static void rygel_change_log_ensure_timeout (RygelChangeLog* self);
static gboolean _rygel_change_log_timeout_gsource_func (gpointer self);
void rygel_change_log_log (RygelChangeLog* self, const gchar* variable, const gchar* value);
void rygel_change_log_log_with_channel (RygelChangeLog* self, const gchar* variable, const gchar* value, const gchar* channel);
void rygel_change_log_log_with_preset_list (RygelChangeLog* self, const gchar* variable, const gchar* value);
static void rygel_change_log_finalize (GObject* obj);
static void _vala_rygel_change_log_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_rygel_change_log_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
RygelChangeLog* rygel_change_log_construct (GType object_type, GUPnPService* service, const gchar* service_ns) {
	RygelChangeLog * self = NULL;
	GUPnPService* _tmp0_;
	const gchar* _tmp1_;
	gchar* _tmp2_;
	GString* _tmp3_;
	GeeHashMap* _tmp4_;
	g_return_val_if_fail (service_ns != NULL, NULL);
	self = (RygelChangeLog*) g_object_new (object_type, NULL);
	_tmp0_ = service;
	rygel_change_log_set_service (self, _tmp0_);
	_tmp1_ = service_ns;
	_tmp2_ = g_strdup (_tmp1_);
	_g_free0 (self->priv->service_ns);
	self->priv->service_ns = _tmp2_;
	_tmp3_ = g_string_new ("");
	_g_string_free0 (self->priv->str);
	self->priv->str = _tmp3_;
	_tmp4_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL);
	_g_object_unref0 (self->priv->hash);
	self->priv->hash = _tmp4_;
	return self;
}


RygelChangeLog* rygel_change_log_new (GUPnPService* service, const gchar* service_ns) {
	return rygel_change_log_construct (RYGEL_TYPE_CHANGE_LOG, service, service_ns);
}


static gboolean rygel_change_log_timeout (RygelChangeLog* self) {
	gboolean result = FALSE;
	GUPnPService* _tmp0_;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_;
	GeeHashMap* _tmp3_;
	GString* _tmp4_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_service;
	_tmp1_ = rygel_change_log_finish (self);
	_tmp2_ = _tmp1_;
	if(self->priv->isForTransition ==1){
		GUPnPService *CurrentService;
		CurrentService = self->priv->_service;
		Set_GenerateTransition(CurrentService, 1);
	}
	gupnp_service_notify (_tmp0_, "LastChange", G_TYPE_STRING, _tmp2_, NULL);
	_g_free0 (_tmp2_);
	if(self->priv->isForTransition ==1){
		self->priv->isForTransition=0;
	}
	//g_debug ("rygel-changelog.vala:55: LastChange sent");
	_tmp3_ = self->priv->hash;
	gee_abstract_map_clear ((GeeAbstractMap*) _tmp3_);
	_tmp4_ = self->priv->str;
	g_string_erase (_tmp4_, (gssize) 0, (gssize) (-1));
	self->priv->timeout_id = (guint) 0;
	result = FALSE;
	return result;
}


static gboolean _rygel_change_log_timeout_gsource_func (gpointer self) {
	gboolean result;
	result = rygel_change_log_timeout (self);
	return result;
}


static void rygel_change_log_ensure_timeout (RygelChangeLog* self) {
	gboolean _tmp0_ = FALSE;
	GUPnPService* _tmp1_;
	gboolean _tmp3_;
	g_return_if_fail (self != NULL);
	_tmp1_ = self->priv->_service;
	if (_tmp1_ != NULL) {
		guint _tmp2_;
		_tmp2_ = self->priv->timeout_id;
		_tmp0_ = _tmp2_ == ((guint) 0);
	} else {
		_tmp0_ = FALSE;
	}
	_tmp3_ = _tmp0_;
	if (_tmp3_) {
		guint _tmp4_ = 0U;
		//g_debug ("rygel-changelog.vala:68: Setting up timeout for LastChange");
		_tmp4_ = g_timeout_add_full (G_PRIORITY_DEFAULT, (guint) 200, _rygel_change_log_timeout_gsource_func, g_object_ref (self), g_object_unref);
		self->priv->timeout_id = _tmp4_;
	}
}


void rygel_change_log_log (RygelChangeLog* self, const gchar* variable, const gchar* value) {
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	GeeHashMap* _tmp2_;
	const gchar* _tmp3_;
	const gchar* _tmp4_;
	const gchar* _tmp5_;
	gchar* _tmp6_ = NULL;
	gchar* _tmp7_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (variable != NULL);
	g_return_if_fail (value != NULL);
	_tmp0_ = variable;
	_tmp1_ = value;
	//g_debug ("rygel-changelog.vala:74: '%s = %s' logged", _tmp0_, _tmp1_);
	_tmp2_ = self->priv->hash;
	_tmp3_ = variable;
	_tmp4_ = variable;
	_tmp5_ = value;
	if(self->priv->isForTransition ==1){
		guint _tmp00_;
		_tmp00_ = self->priv->timeout_id;
		if (_tmp00_ != ((guint) 0)) {
			guint _tmp10_;
			GeeHashMap* _tmp30_;
			GString* _tmp40_;
			
			g_message("####################%s %d clean the notify that previous want send####################", __FUNCTION__, __LINE__);
			_tmp10_ = self->priv->timeout_id;
			g_source_remove (_tmp10_);
			_tmp30_ = self->priv->hash;
			gee_abstract_map_clear ((GeeAbstractMap*) _tmp30_);
			_tmp40_ = self->priv->str;
			g_string_erase (_tmp40_, (gssize) 0, (gssize) (-1));
			self->priv->timeout_id = (guint) 0;
		}
		
		if(!strcmp(_tmp4_,"TransportState")){
			_tmp6_ = g_strdup_printf ("<%s val=\"STOPPED\"/>", _tmp4_);
		}else 	if(!strcmp(_tmp4_,"CurrentTrackURI"))
			_tmp6_ = g_strdup_printf ("<%s val=\"\"/>", _tmp4_);
		else 	if(!strcmp(_tmp4_,"AVTransportURI"))
			_tmp6_ = g_strdup_printf ("<%s val=\"\"/>", _tmp4_);
		else
			_tmp6_ = g_strdup_printf ("<%s val=\"%s\"/>", _tmp4_, _tmp5_);
	}else{
		_tmp6_ = g_strdup_printf ("<%s val=\"%s\"/>", _tmp4_, _tmp5_);
	}
	_tmp7_ = _tmp6_;
	gee_abstract_map_set ((GeeAbstractMap*) _tmp2_, _tmp3_, _tmp7_);
	_g_free0 (_tmp7_);
	if(self->priv->isForTransition ==1){
		rygel_change_log_timeout (self);
	}else{
		rygel_change_log_ensure_timeout (self);
	}
	
}
void rygel_change_log_log_with_preset_list (RygelChangeLog* self, const gchar* variable, const gchar* value) {
	GeeHashMap* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	const gchar* _tmp4_;
	gchar* _tmp5_ = NULL;
	gchar* _tmp6_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (variable != NULL);
	g_return_if_fail (value != NULL);

	_tmp0_ = self->priv->hash;
	_tmp1_ = variable;
	_tmp2_ = variable;
	_tmp3_ = value;
	_tmp5_ = g_strdup_printf ("<%s val=\"%s\"/>", _tmp2_, _tmp3_);
	_tmp6_ = _tmp5_;
	gee_abstract_map_set ((GeeAbstractMap*) _tmp0_, _tmp1_, _tmp6_);
	_g_free0 (_tmp6_);
	rygel_change_log_ensure_timeout (self);
}


void rygel_change_log_log_with_channel (RygelChangeLog* self, const gchar* variable, const gchar* value, const gchar* channel) {
	GeeHashMap* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	const gchar* _tmp4_;
	gchar* _tmp5_ = NULL;
	gchar* _tmp6_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (variable != NULL);
	g_return_if_fail (value != NULL);
	g_return_if_fail (channel != NULL);
	_tmp0_ = self->priv->hash;
	_tmp1_ = variable;
	_tmp2_ = variable;
	_tmp3_ = value;
	_tmp4_ = channel;
	_tmp5_ = g_strdup_printf ("<%s val=\"%s\" channel=\"%s\"/>", _tmp2_, _tmp3_, _tmp4_);
	_tmp6_ = _tmp5_;
	gee_abstract_map_set ((GeeAbstractMap*) _tmp0_, _tmp1_, _tmp6_);
	_g_free0 (_tmp6_);
	rygel_change_log_ensure_timeout (self);
}


gchar* rygel_change_log_finish (RygelChangeLog* self) {
	gchar* result = NULL;
	GString* _tmp0_;
	const gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	GString* _tmp18_;
	GString* _tmp19_;
	const gchar* _tmp20_;
	gchar* _tmp21_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->str;
	_tmp1_ = self->priv->service_ns;
	_tmp2_ = g_strconcat ("<Event xmlns=\"", _tmp1_, NULL);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_strconcat (_tmp3_, "\"><InstanceID val=\"0\">", NULL);
	_tmp5_ = _tmp4_;
	g_string_append (_tmp0_, _tmp5_);
	_g_free0 (_tmp5_);
	_g_free0 (_tmp3_);
	{
		GeeHashMap* _tmp6_;
		GeeCollection* _tmp7_;
		GeeCollection* _tmp8_;
		GeeCollection* _tmp9_;
		GeeIterator* _tmp10_ = NULL;
		GeeIterator* _tmp11_;
		GeeIterator* _line_it;
		_tmp6_ = self->priv->hash;
		_tmp7_ = gee_abstract_map_get_values ((GeeMap*) _tmp6_);
		_tmp8_ = _tmp7_;
		_tmp9_ = _tmp8_;
		_tmp10_ = gee_iterable_iterator ((GeeIterable*) _tmp9_);
		_tmp11_ = _tmp10_;
		_g_object_unref0 (_tmp9_);
		_line_it = _tmp11_;
		while (TRUE) {
			GeeIterator* _tmp12_;
			gboolean _tmp13_ = FALSE;
			GeeIterator* _tmp14_;
			gpointer _tmp15_ = NULL;
			gchar* line;
			GString* _tmp16_;
			const gchar* _tmp17_;
			_tmp12_ = _line_it;
			_tmp13_ = gee_iterator_next (_tmp12_);
			if (!_tmp13_) {
				break;
			}
			_tmp14_ = _line_it;
			_tmp15_ = gee_iterator_get (_tmp14_);
			line = (gchar*) _tmp15_;
			_tmp16_ = self->priv->str;
			_tmp17_ = line;
			g_string_append (_tmp16_, _tmp17_);
			_g_free0 (line);
		}
		_g_object_unref0 (_line_it);
	}
	_tmp18_ = self->priv->str;
	g_string_append (_tmp18_, "</InstanceID></Event>");
	_tmp19_ = self->priv->str;
	_tmp20_ = _tmp19_->str;
	_tmp21_ = g_strdup (_tmp20_);
	result = _tmp21_;
	return result;
}


GUPnPService* rygel_change_log_get_service (RygelChangeLog* self) {
	GUPnPService* result;
	GUPnPService* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_service;
	result = _tmp0_;
	return result;
}


void rygel_change_log_set_service (RygelChangeLog* self, GUPnPService* value) {
	GUPnPService* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_service = _tmp0_;
	g_object_notify ((GObject *) self, "service");
}


static void rygel_change_log_class_init (RygelChangeLogClass * klass) {
	rygel_change_log_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelChangeLogPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_rygel_change_log_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_rygel_change_log_set_property;
	G_OBJECT_CLASS (klass)->finalize = rygel_change_log_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_CHANGE_LOG_SERVICE, g_param_spec_object ("service", "service", "service", GUPNP_TYPE_SERVICE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void rygel_change_log_instance_init (RygelChangeLog * self) {
	self->priv = RYGEL_CHANGE_LOG_GET_PRIVATE (self);
	self->priv->timeout_id = (guint) 0;
}


static void rygel_change_log_finalize (GObject* obj) {
	RygelChangeLog * self;
	guint _tmp0_;
	self = RYGEL_CHANGE_LOG (obj);
	_tmp0_ = self->priv->timeout_id;
	if (_tmp0_ != ((guint) 0)) {
		guint _tmp1_;
		_tmp1_ = self->priv->timeout_id;
		g_source_remove (_tmp1_);
	}
	_g_free0 (self->priv->service_ns);
	_g_string_free0 (self->priv->str);
	_g_object_unref0 (self->priv->hash);
	G_OBJECT_CLASS (rygel_change_log_parent_class)->finalize (obj);
}


GType rygel_change_log_get_type (void) {
	static volatile gsize rygel_change_log_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_change_log_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelChangeLogClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_change_log_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelChangeLog), 0, (GInstanceInitFunc) rygel_change_log_instance_init, NULL };
		GType rygel_change_log_type_id;
		rygel_change_log_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelChangeLog", &g_define_type_info, 0);
		g_once_init_leave (&rygel_change_log_type_id__volatile, rygel_change_log_type_id);
	}
	return rygel_change_log_type_id__volatile;
}


static void _vala_rygel_change_log_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	RygelChangeLog * self;
	self = RYGEL_CHANGE_LOG (object);
	switch (property_id) {
		case RYGEL_CHANGE_LOG_SERVICE:
		g_value_set_object (value, rygel_change_log_get_service (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_rygel_change_log_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	RygelChangeLog * self;
	self = RYGEL_CHANGE_LOG (object);
	switch (property_id) {
		case RYGEL_CHANGE_LOG_SERVICE:
		rygel_change_log_set_service (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


