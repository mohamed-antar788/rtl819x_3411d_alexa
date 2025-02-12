/* rygel-tracker-plugin.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-tracker-plugin.vala, do not modify */

/*
 * Copyright (C) 2008 Zeeshan Ali <zeenix@gmail.com>.
 *
 * Author: Zeeshan Ali <zeenix@gmail.com>
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
#include <glib/gi18n-lib.h>


#define RYGEL_TRACKER_TYPE_PLUGIN (rygel_tracker_plugin_get_type ())
#define RYGEL_TRACKER_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_PLUGIN, RygelTrackerPlugin))
#define RYGEL_TRACKER_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_PLUGIN, RygelTrackerPluginClass))
#define RYGEL_TRACKER_IS_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_PLUGIN))
#define RYGEL_TRACKER_IS_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_PLUGIN))
#define RYGEL_TRACKER_PLUGIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_PLUGIN, RygelTrackerPluginClass))

typedef struct _RygelTrackerPlugin RygelTrackerPlugin;
typedef struct _RygelTrackerPluginClass RygelTrackerPluginClass;
typedef struct _RygelTrackerPluginPrivate RygelTrackerPluginPrivate;

#define RYGEL_TRACKER_TYPE_ROOT_CONTAINER (rygel_tracker_root_container_get_type ())
#define RYGEL_TRACKER_ROOT_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_ROOT_CONTAINER, RygelTrackerRootContainer))
#define RYGEL_TRACKER_ROOT_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_ROOT_CONTAINER, RygelTrackerRootContainerClass))
#define RYGEL_TRACKER_IS_ROOT_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_ROOT_CONTAINER))
#define RYGEL_TRACKER_IS_ROOT_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_ROOT_CONTAINER))
#define RYGEL_TRACKER_ROOT_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_ROOT_CONTAINER, RygelTrackerRootContainerClass))

typedef struct _RygelTrackerRootContainer RygelTrackerRootContainer;
typedef struct _RygelTrackerRootContainerClass RygelTrackerRootContainerClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _RygelTrackerPlugin {
	RygelMediaServerPlugin parent_instance;
	RygelTrackerPluginPrivate * priv;
};

struct _RygelTrackerPluginClass {
	RygelMediaServerPluginClass parent_class;
};


static gpointer rygel_tracker_plugin_parent_class = NULL;
static RygelTrackerRootContainer* rygel_tracker_plugin_root;
static RygelTrackerRootContainer* rygel_tracker_plugin_root = NULL;

GType rygel_tracker_plugin_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_TRACKER_PLUGIN_DUMMY_PROPERTY
};
GType rygel_tracker_root_container_get_type (void) G_GNUC_CONST;
#define RYGEL_TRACKER_PLUGIN_NAME "Tracker"
RygelTrackerPlugin* rygel_tracker_plugin_new (void);
RygelTrackerPlugin* rygel_tracker_plugin_construct (GType object_type);
RygelTrackerRootContainer* rygel_tracker_root_container_new (const gchar* title);
RygelTrackerRootContainer* rygel_tracker_root_container_construct (GType object_type, const gchar* title);
static void rygel_tracker_plugin_finalize (GObject* obj);


RygelTrackerPlugin* rygel_tracker_plugin_construct (GType object_type) {
	RygelTrackerPlugin * self = NULL;
	RygelTrackerRootContainer* _tmp0_;
	RygelTrackerRootContainer* _tmp3_;
	_tmp0_ = rygel_tracker_plugin_root;
	if (_tmp0_ == NULL) {
		const gchar* _tmp1_ = NULL;
		RygelTrackerRootContainer* _tmp2_;
		_tmp1_ = _ ("@REALNAME@'s media");
		_tmp2_ = rygel_tracker_root_container_new (_tmp1_);
		_g_object_unref0 (rygel_tracker_plugin_root);
		rygel_tracker_plugin_root = _tmp2_;
	}
	_tmp3_ = rygel_tracker_plugin_root;
	self = (RygelTrackerPlugin*) rygel_media_server_plugin_construct (object_type, (RygelMediaContainer*) _tmp3_, RYGEL_TRACKER_PLUGIN_NAME, NULL);
	return self;
}


RygelTrackerPlugin* rygel_tracker_plugin_new (void) {
	return rygel_tracker_plugin_construct (RYGEL_TRACKER_TYPE_PLUGIN);
}


static void rygel_tracker_plugin_class_init (RygelTrackerPluginClass * klass) {
	rygel_tracker_plugin_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->finalize = rygel_tracker_plugin_finalize;
}


static void rygel_tracker_plugin_instance_init (RygelTrackerPlugin * self) {
}


static void rygel_tracker_plugin_finalize (GObject* obj) {
	RygelTrackerPlugin * self;
	self = RYGEL_TRACKER_PLUGIN (obj);
	G_OBJECT_CLASS (rygel_tracker_plugin_parent_class)->finalize (obj);
}


GType rygel_tracker_plugin_get_type (void) {
	static volatile gsize rygel_tracker_plugin_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_tracker_plugin_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelTrackerPluginClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_tracker_plugin_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelTrackerPlugin), 0, (GInstanceInitFunc) rygel_tracker_plugin_instance_init, NULL };
		GType rygel_tracker_plugin_type_id;
		rygel_tracker_plugin_type_id = g_type_register_static (RYGEL_TYPE_MEDIA_SERVER_PLUGIN, "RygelTrackerPlugin", &g_define_type_info, 0);
		g_once_init_leave (&rygel_tracker_plugin_type_id__volatile, rygel_tracker_plugin_type_id);
	}
	return rygel_tracker_plugin_type_id__volatile;
}



