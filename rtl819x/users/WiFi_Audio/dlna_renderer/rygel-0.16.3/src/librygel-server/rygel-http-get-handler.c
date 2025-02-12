/* rygel-http-get-handler.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-http-get-handler.vala, do not modify */

/*
 * Copyright (C) 2008-2010 Nokia Corporation.
 * Copyright (C) 2010 Andreas Henriksson <andreas@fatal.se>
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
#include <libsoup/soup.h>
#include <libgupnp-av/gupnp-av.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <rygel-core.h>
#include <gee.h>
#include <gst/gst.h>


#define RYGEL_TYPE_HTTP_GET_HANDLER (rygel_http_get_handler_get_type ())
#define RYGEL_HTTP_GET_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_GET_HANDLER, RygelHTTPGetHandler))
#define RYGEL_HTTP_GET_HANDLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_GET_HANDLER, RygelHTTPGetHandlerClass))
#define RYGEL_IS_HTTP_GET_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_GET_HANDLER))
#define RYGEL_IS_HTTP_GET_HANDLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_GET_HANDLER))
#define RYGEL_HTTP_GET_HANDLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_GET_HANDLER, RygelHTTPGetHandlerClass))

typedef struct _RygelHTTPGetHandler RygelHTTPGetHandler;
typedef struct _RygelHTTPGetHandlerClass RygelHTTPGetHandlerClass;
typedef struct _RygelHTTPGetHandlerPrivate RygelHTTPGetHandlerPrivate;

#define RYGEL_TYPE_HTTP_REQUEST (rygel_http_request_get_type ())
#define RYGEL_HTTP_REQUEST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_REQUEST, RygelHTTPRequest))
#define RYGEL_HTTP_REQUEST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_REQUEST, RygelHTTPRequestClass))
#define RYGEL_IS_HTTP_REQUEST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_REQUEST))
#define RYGEL_IS_HTTP_REQUEST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_REQUEST))
#define RYGEL_HTTP_REQUEST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_REQUEST, RygelHTTPRequestClass))

typedef struct _RygelHTTPRequest RygelHTTPRequest;
typedef struct _RygelHTTPRequestClass RygelHTTPRequestClass;

#define RYGEL_TYPE_HTTP_GET (rygel_http_get_get_type ())
#define RYGEL_HTTP_GET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_GET, RygelHTTPGet))
#define RYGEL_HTTP_GET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_GET, RygelHTTPGetClass))
#define RYGEL_IS_HTTP_GET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_GET))
#define RYGEL_IS_HTTP_GET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_GET))
#define RYGEL_HTTP_GET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_GET, RygelHTTPGetClass))

typedef struct _RygelHTTPGet RygelHTTPGet;
typedef struct _RygelHTTPGetClass RygelHTTPGetClass;

#define RYGEL_TYPE_HTTP_RESPONSE (rygel_http_response_get_type ())
#define RYGEL_HTTP_RESPONSE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_RESPONSE, RygelHTTPResponse))
#define RYGEL_HTTP_RESPONSE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_RESPONSE, RygelHTTPResponseClass))
#define RYGEL_IS_HTTP_RESPONSE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_RESPONSE))
#define RYGEL_IS_HTTP_RESPONSE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_RESPONSE))
#define RYGEL_HTTP_RESPONSE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_RESPONSE, RygelHTTPResponseClass))

typedef struct _RygelHTTPResponse RygelHTTPResponse;
typedef struct _RygelHTTPResponseClass RygelHTTPResponseClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _RygelHTTPRequestPrivate RygelHTTPRequestPrivate;

#define RYGEL_TYPE_TRANSCODE_MANAGER (rygel_transcode_manager_get_type ())
#define RYGEL_TRANSCODE_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_TRANSCODE_MANAGER, RygelTranscodeManager))
#define RYGEL_TRANSCODE_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_TRANSCODE_MANAGER, RygelTranscodeManagerClass))
#define RYGEL_IS_TRANSCODE_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_TRANSCODE_MANAGER))
#define RYGEL_IS_TRANSCODE_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_TRANSCODE_MANAGER))
#define RYGEL_TRANSCODE_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_TRANSCODE_MANAGER, RygelTranscodeManagerClass))

typedef struct _RygelTranscodeManager RygelTranscodeManager;
typedef struct _RygelTranscodeManagerClass RygelTranscodeManagerClass;

#define RYGEL_TYPE_HTTP_SERVER (rygel_http_server_get_type ())
#define RYGEL_HTTP_SERVER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_SERVER, RygelHTTPServer))
#define RYGEL_HTTP_SERVER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_SERVER, RygelHTTPServerClass))
#define RYGEL_IS_HTTP_SERVER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_SERVER))
#define RYGEL_IS_HTTP_SERVER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_SERVER))
#define RYGEL_HTTP_SERVER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_SERVER, RygelHTTPServerClass))

typedef struct _RygelHTTPServer RygelHTTPServer;
typedef struct _RygelHTTPServerClass RygelHTTPServerClass;

#define RYGEL_TYPE_HTTP_ITEM_URI (rygel_http_item_uri_get_type ())
#define RYGEL_HTTP_ITEM_URI(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_ITEM_URI, RygelHTTPItemURI))
#define RYGEL_HTTP_ITEM_URI_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_ITEM_URI, RygelHTTPItemURIClass))
#define RYGEL_IS_HTTP_ITEM_URI(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_ITEM_URI))
#define RYGEL_IS_HTTP_ITEM_URI_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_ITEM_URI))
#define RYGEL_HTTP_ITEM_URI_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_ITEM_URI, RygelHTTPItemURIClass))

typedef struct _RygelHTTPItemURI RygelHTTPItemURI;
typedef struct _RygelHTTPItemURIClass RygelHTTPItemURIClass;

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

#define RYGEL_TYPE_CLIENT_HACKS (rygel_client_hacks_get_type ())
#define RYGEL_CLIENT_HACKS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_CLIENT_HACKS, RygelClientHacks))
#define RYGEL_CLIENT_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_CLIENT_HACKS, RygelClientHacksClass))
#define RYGEL_IS_CLIENT_HACKS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_CLIENT_HACKS))
#define RYGEL_IS_CLIENT_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_CLIENT_HACKS))
#define RYGEL_CLIENT_HACKS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_CLIENT_HACKS, RygelClientHacksClass))

typedef struct _RygelClientHacks RygelClientHacks;
typedef struct _RygelClientHacksClass RygelClientHacksClass;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

#define RYGEL_TYPE_AUDIO_ITEM (rygel_audio_item_get_type ())
#define RYGEL_AUDIO_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_AUDIO_ITEM, RygelAudioItem))
#define RYGEL_AUDIO_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_AUDIO_ITEM, RygelAudioItemClass))
#define RYGEL_IS_AUDIO_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_AUDIO_ITEM))
#define RYGEL_IS_AUDIO_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_AUDIO_ITEM))
#define RYGEL_AUDIO_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_AUDIO_ITEM, RygelAudioItemClass))

typedef struct _RygelAudioItem RygelAudioItem;
typedef struct _RygelAudioItemClass RygelAudioItemClass;

#define RYGEL_TYPE_VIDEO_ITEM (rygel_video_item_get_type ())
#define RYGEL_VIDEO_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_VIDEO_ITEM, RygelVideoItem))
#define RYGEL_VIDEO_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_VIDEO_ITEM, RygelVideoItemClass))
#define RYGEL_IS_VIDEO_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_VIDEO_ITEM))
#define RYGEL_IS_VIDEO_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_VIDEO_ITEM))
#define RYGEL_VIDEO_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_VIDEO_ITEM, RygelVideoItemClass))

typedef struct _RygelVideoItem RygelVideoItem;
typedef struct _RygelVideoItemClass RygelVideoItemClass;
typedef struct _RygelMediaObjectPrivate RygelMediaObjectPrivate;

#define RYGEL_TYPE_MEDIA_CONTAINER (rygel_media_container_get_type ())
#define RYGEL_MEDIA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainer))
#define RYGEL_MEDIA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainerClass))
#define RYGEL_IS_MEDIA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_CONTAINER))
#define RYGEL_IS_MEDIA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_CONTAINER))
#define RYGEL_MEDIA_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainerClass))

typedef struct _RygelMediaContainer RygelMediaContainer;
typedef struct _RygelMediaContainerClass RygelMediaContainerClass;
typedef struct _RygelMediaItemPrivate RygelMediaItemPrivate;
typedef struct _RygelAudioItemPrivate RygelAudioItemPrivate;

#define RYGEL_TYPE_VISUAL_ITEM (rygel_visual_item_get_type ())
#define RYGEL_VISUAL_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_VISUAL_ITEM, RygelVisualItem))
#define RYGEL_IS_VISUAL_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_VISUAL_ITEM))
#define RYGEL_VISUAL_ITEM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_TYPE_VISUAL_ITEM, RygelVisualItemIface))

typedef struct _RygelVisualItem RygelVisualItem;
typedef struct _RygelVisualItemIface RygelVisualItemIface;

#define RYGEL_TYPE_THUMBNAIL (rygel_thumbnail_get_type ())
#define RYGEL_THUMBNAIL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_THUMBNAIL, RygelThumbnail))
#define RYGEL_THUMBNAIL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_THUMBNAIL, RygelThumbnailClass))
#define RYGEL_IS_THUMBNAIL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_THUMBNAIL))
#define RYGEL_IS_THUMBNAIL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_THUMBNAIL))
#define RYGEL_THUMBNAIL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_THUMBNAIL, RygelThumbnailClass))

typedef struct _RygelThumbnail RygelThumbnail;
typedef struct _RygelThumbnailClass RygelThumbnailClass;
typedef struct _RygelVideoItemPrivate RygelVideoItemPrivate;

#define RYGEL_TYPE_SUBTITLE (rygel_subtitle_get_type ())
#define RYGEL_SUBTITLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_SUBTITLE, RygelSubtitle))
#define RYGEL_SUBTITLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_SUBTITLE, RygelSubtitleClass))
#define RYGEL_IS_SUBTITLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_SUBTITLE))
#define RYGEL_IS_SUBTITLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_SUBTITLE))
#define RYGEL_SUBTITLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_SUBTITLE, RygelSubtitleClass))

typedef struct _RygelSubtitle RygelSubtitle;
typedef struct _RygelSubtitleClass RygelSubtitleClass;

typedef enum  {
	RYGEL_HTTP_REQUEST_ERROR_UNACCEPTABLE = SOUP_STATUS_NOT_ACCEPTABLE,
	RYGEL_HTTP_REQUEST_ERROR_BAD_REQUEST = SOUP_STATUS_BAD_REQUEST,
	RYGEL_HTTP_REQUEST_ERROR_NOT_FOUND = SOUP_STATUS_NOT_FOUND,
	RYGEL_HTTP_REQUEST_ERROR_INTERNAL_SERVER_ERROR = SOUP_STATUS_INTERNAL_SERVER_ERROR
} RygelHTTPRequestError;
#define RYGEL_HTTP_REQUEST_ERROR rygel_http_request_error_quark ()
struct _RygelHTTPGetHandler {
	GObject parent_instance;
	RygelHTTPGetHandlerPrivate * priv;
};

struct _RygelHTTPGetHandlerClass {
	GObjectClass parent_class;
	void (*add_response_headers) (RygelHTTPGetHandler* self, RygelHTTPGet* request, GError** error);
	gboolean (*knows_size) (RygelHTTPGetHandler* self, RygelHTTPGet* request);
	RygelHTTPResponse* (*render_body) (RygelHTTPGetHandler* self, RygelHTTPGet* request, GError** error);
	GUPnPDIDLLiteResource* (*add_resource) (RygelHTTPGetHandler* self, GUPnPDIDLLiteItem* didl_item, RygelHTTPGet* request, GError** error);
};

struct _RygelHTTPGetHandlerPrivate {
	GCancellable* _cancellable;
};

struct _RygelHTTPRequest {
	GObject parent_instance;
	RygelHTTPRequestPrivate * priv;
	RygelHTTPServer* http_server;
	SoupServer* server;
	SoupMessage* msg;
	RygelHTTPItemURI* uri;
	RygelMediaItem* item;
	RygelClientHacks* hack;
};

struct _RygelHTTPRequestClass {
	GObjectClass parent_class;
	void (*handle) (RygelHTTPRequest* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*handle_finish) (RygelHTTPRequest* self, GAsyncResult* _res_, GError** error);
	void (*find_item) (RygelHTTPRequest* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*find_item_finish) (RygelHTTPRequest* self, GAsyncResult* _res_, GError** error);
};

struct _RygelMediaObject {
	GObject parent_instance;
	RygelMediaObjectPrivate * priv;
	gchar* id;
	gchar* ref_id;
	gchar* upnp_class;
	guint64 modified;
	GeeArrayList* uris;
	RygelMediaContainer* parent;
};

struct _RygelMediaObjectClass {
	GObjectClass parent_class;
	GUPnPDIDLLiteObject* (*serialize) (RygelMediaObject* self, GUPnPDIDLLiteWriter* writer, RygelHTTPServer* http_server, GError** error);
	gint (*compare_by_property) (RygelMediaObject* self, RygelMediaObject* media_object, const gchar* property);
	GUPnPOCMFlags (*get_ocm_flags) (RygelMediaObject* self);
};

struct _RygelMediaItem {
	RygelMediaObject parent_instance;
	RygelMediaItemPrivate * priv;
	gchar* date;
	gchar* mime_type;
	gchar* dlna_profile;
	GRegex* address_regex;
};

struct _RygelMediaItemClass {
	RygelMediaObjectClass parent_class;
	GstElement* (*create_stream_source) (RygelMediaItem* self, const gchar* host_ip);
	gboolean (*streamable) (RygelMediaItem* self);
	void (*add_uri) (RygelMediaItem* self, const gchar* uri);
	GUPnPDIDLLiteResource* (*add_resource) (RygelMediaItem* self, GUPnPDIDLLiteItem* didl_item, const gchar* uri, const gchar* protocol, const gchar* import_uri, GError** error);
	void (*add_proxy_resources) (RygelMediaItem* self, RygelHTTPServer* server, GUPnPDIDLLiteItem* didl_item, GError** error);
	GUPnPProtocolInfo* (*get_protocol_info) (RygelMediaItem* self, const gchar* uri, const gchar* protocol);
	void (*add_resources) (RygelMediaItem* self, GUPnPDIDLLiteItem* didl_item, gboolean allow_internal, GError** error);
};

struct _RygelAudioItem {
	RygelMediaItem parent_instance;
	RygelAudioItemPrivate * priv;
	glong duration;
	gint bitrate;
	gint sample_freq;
	gint bits_per_sample;
	gint channels;
};

struct _RygelAudioItemClass {
	RygelMediaItemClass parent_class;
};

struct _RygelVisualItemIface {
	GTypeInterface parent_iface;
	gint (*get_width) (RygelVisualItem* self);
	void (*set_width) (RygelVisualItem* self, gint value);
	gint (*get_height) (RygelVisualItem* self);
	void (*set_height) (RygelVisualItem* self, gint value);
	gint (*get_pixel_width) (RygelVisualItem* self);
	void (*set_pixel_width) (RygelVisualItem* self, gint value);
	gint (*get_pixel_height) (RygelVisualItem* self);
	void (*set_pixel_height) (RygelVisualItem* self, gint value);
	gint (*get_color_depth) (RygelVisualItem* self);
	void (*set_color_depth) (RygelVisualItem* self, gint value);
	GeeArrayList* (*get_thumbnails) (RygelVisualItem* self);
	void (*set_thumbnails) (RygelVisualItem* self, GeeArrayList* value);
};

struct _RygelVideoItem {
	RygelAudioItem parent_instance;
	RygelVideoItemPrivate * priv;
	gchar* author;
	GeeArrayList* subtitles;
};

struct _RygelVideoItemClass {
	RygelAudioItemClass parent_class;
};


static gpointer rygel_http_get_handler_parent_class = NULL;

GType rygel_http_get_handler_get_type (void) G_GNUC_CONST;
GType rygel_http_request_get_type (void) G_GNUC_CONST;
GType rygel_http_get_get_type (void) G_GNUC_CONST;
GQuark rygel_http_request_error_quark (void);
GType rygel_http_response_get_type (void) G_GNUC_CONST;
#define RYGEL_HTTP_GET_HANDLER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_HTTP_GET_HANDLER, RygelHTTPGetHandlerPrivate))
enum  {
	RYGEL_HTTP_GET_HANDLER_DUMMY_PROPERTY,
	RYGEL_HTTP_GET_HANDLER_CANCELLABLE
};
#define RYGEL_HTTP_GET_HANDLER_TRANSFER_MODE_HEADER "transferMode.dlna.org"
void rygel_http_get_handler_add_response_headers (RygelHTTPGetHandler* self, RygelHTTPGet* request, GError** error);
static void rygel_http_get_handler_real_add_response_headers (RygelHTTPGetHandler* self, RygelHTTPGet* request, GError** error);
GType rygel_transcode_manager_get_type (void) G_GNUC_CONST;
GType rygel_http_server_get_type (void) G_GNUC_CONST;
GType rygel_http_item_uri_get_type (void) G_GNUC_CONST;
GType rygel_media_object_get_type (void) G_GNUC_CONST;
GType rygel_media_item_get_type (void) G_GNUC_CONST;
GType rygel_client_hacks_get_type (void) G_GNUC_CONST;
GUPnPDIDLLiteResource* rygel_http_get_handler_add_resource (RygelHTTPGetHandler* self, GUPnPDIDLLiteItem* didl_item, RygelHTTPGet* request, GError** error);
GType rygel_audio_item_get_type (void) G_GNUC_CONST;
GType rygel_video_item_get_type (void) G_GNUC_CONST;
GType rygel_media_container_get_type (void) G_GNUC_CONST;
GType rygel_thumbnail_get_type (void) G_GNUC_CONST;
GType rygel_visual_item_get_type (void) G_GNUC_CONST;
gpointer rygel_subtitle_ref (gpointer instance);
void rygel_subtitle_unref (gpointer instance);
GParamSpec* rygel_param_spec_subtitle (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_value_set_subtitle (GValue* value, gpointer v_object);
void rygel_value_take_subtitle (GValue* value, gpointer v_object);
gpointer rygel_value_get_subtitle (const GValue* value);
GType rygel_subtitle_get_type (void) G_GNUC_CONST;
gchar* rygel_transcode_manager_create_uri_for_item (RygelTranscodeManager* self, RygelMediaItem* item, gint thumbnail_index, gint subtitle_index, const gchar* transcode_target);
gboolean rygel_http_get_handler_knows_size (RygelHTTPGetHandler* self, RygelHTTPGet* request);
static gboolean rygel_http_get_handler_real_knows_size (RygelHTTPGetHandler* self, RygelHTTPGet* request);
RygelHTTPResponse* rygel_http_get_handler_render_body (RygelHTTPGetHandler* self, RygelHTTPGet* request, GError** error);
static RygelHTTPResponse* rygel_http_get_handler_real_render_body (RygelHTTPGetHandler* self, RygelHTTPGet* request, GError** error);
static GUPnPDIDLLiteResource* rygel_http_get_handler_real_add_resource (RygelHTTPGetHandler* self, GUPnPDIDLLiteItem* didl_item, RygelHTTPGet* request, GError** error);
RygelHTTPGetHandler* rygel_http_get_handler_construct (GType object_type);
GCancellable* rygel_http_get_handler_get_cancellable (RygelHTTPGetHandler* self);
void rygel_http_get_handler_set_cancellable (RygelHTTPGetHandler* self, GCancellable* value);
static void rygel_http_get_handler_finalize (GObject* obj);
static void _vala_rygel_http_get_handler_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_rygel_http_get_handler_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);


static void rygel_http_get_handler_real_add_response_headers (RygelHTTPGetHandler* self, RygelHTTPGet* request, GError** error) {
	RygelHTTPGet* _tmp0_;
	SoupMessage* _tmp1_;
	SoupMessageHeaders* _tmp2_;
	const gchar* _tmp3_ = NULL;
	gchar* _tmp4_;
	gchar* mode;
	const gchar* _tmp5_;
	GUPnPDIDLLiteWriter* _tmp10_;
	GUPnPDIDLLiteWriter* didl_writer;
	GUPnPDIDLLiteItem* _tmp11_ = NULL;
	GUPnPDIDLLiteItem* didl_item;
	gboolean _tmp27_ = FALSE;
	RygelHTTPGet* _tmp28_;
	SoupMessage* _tmp29_;
	SoupMessageHeaders* _tmp30_;
	const gchar* _tmp31_ = NULL;
	gboolean _tmp37_;
	RygelHTTPGet* _tmp47_;
	SoupMessage* _tmp48_;
	SoupMessageHeaders* _tmp49_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (request != NULL);
	_tmp0_ = request;
	_tmp1_ = ((RygelHTTPRequest*) _tmp0_)->msg;
	_tmp2_ = _tmp1_->request_headers;
	_tmp3_ = soup_message_headers_get_one (_tmp2_, RYGEL_HTTP_GET_HANDLER_TRANSFER_MODE_HEADER);
	_tmp4_ = g_strdup (_tmp3_);
	mode = _tmp4_;
	_tmp5_ = mode;
	if (_tmp5_ != NULL) {
		RygelHTTPGet* _tmp6_;
		SoupMessage* _tmp7_;
		SoupMessageHeaders* _tmp8_;
		const gchar* _tmp9_;
		_tmp6_ = request;
		_tmp7_ = ((RygelHTTPRequest*) _tmp6_)->msg;
		_tmp8_ = _tmp7_->response_headers;
		_tmp9_ = mode;
		soup_message_headers_append (_tmp8_, RYGEL_HTTP_GET_HANDLER_TRANSFER_MODE_HEADER, _tmp9_);
	}
	_tmp10_ = gupnp_didl_lite_writer_new (NULL);
	didl_writer = _tmp10_;
	_tmp11_ = gupnp_didl_lite_writer_add_item (didl_writer);
	didl_item = _tmp11_;
	{
		RygelHTTPGet* _tmp12_;
		GUPnPDIDLLiteResource* _tmp13_ = NULL;
		GUPnPDIDLLiteResource* resource;
		_tmp12_ = request;
		_tmp13_ = rygel_http_get_handler_add_resource (self, didl_item, _tmp12_, &_inner_error_);
		resource = _tmp13_;
		if (_inner_error_ != NULL) {
			goto __catch19_g_error;
		}
		if (resource != NULL) {
			GUPnPProtocolInfo* _tmp14_;
			GUPnPProtocolInfo* _tmp15_;
			gchar* _tmp16_ = NULL;
			gchar* _tmp17_;
			gchar** _tmp18_;
			gchar** _tmp19_ = NULL;
			gchar** _tmp20_;
			gint _tmp20__length1;
			gchar** tokens;
			gint tokens_length1;
			gint _tokens_size_;
			gchar** _tmp21_;
			gint _tmp21__length1;
			RygelHTTPGet* _tmp22_;
			SoupMessage* _tmp23_;
			SoupMessageHeaders* _tmp24_;
			gchar** _tmp25_;
			gint _tmp25__length1;
			const gchar* _tmp26_;
			_tmp14_ = gupnp_didl_lite_resource_get_protocol_info (resource);
			_tmp15_ = _tmp14_;
			_tmp16_ = gupnp_protocol_info_to_string (_tmp15_);
			_tmp17_ = _tmp16_;
			_tmp19_ = _tmp18_ = g_strsplit (_tmp17_, ":", 4);
			_tmp20_ = _tmp19_;
			_tmp20__length1 = _vala_array_length (_tmp18_);
			_g_free0 (_tmp17_);
			tokens = _tmp20_;
			tokens_length1 = _tmp20__length1;
			_tokens_size_ = tokens_length1;
			_tmp21_ = tokens;
			_tmp21__length1 = tokens_length1;
			g_assert (_tmp21__length1 == 4);
			_tmp22_ = request;
			_tmp23_ = ((RygelHTTPRequest*) _tmp22_)->msg;
			_tmp24_ = _tmp23_->response_headers;
			_tmp25_ = tokens;
			_tmp25__length1 = tokens_length1;
			_tmp26_ = _tmp25_[3];
			soup_message_headers_append (_tmp24_, "contentFeatures.dlna.org", _tmp26_);
			tokens = (_vala_array_free (tokens, tokens_length1, (GDestroyNotify) g_free), NULL);
		}
		_g_object_unref0 (resource);
	}
	goto __finally19;
	__catch19_g_error:
	{
		GError* err = NULL;
		err = _inner_error_;
		_inner_error_ = NULL;
		g_warning ("rygel-http-get-handler.vala:61: %s", "Received request for 'contentFeatures.dlna.org' but " "failed to provide the value in response headers");
		_g_error_free0 (err);
	}
	__finally19:
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == RYGEL_HTTP_REQUEST_ERROR) {
			g_propagate_error (error, _inner_error_);
			_g_object_unref0 (didl_item);
			_g_object_unref0 (didl_writer);
			_g_free0 (mode);
			return;
		} else {
			_g_object_unref0 (didl_item);
			_g_object_unref0 (didl_writer);
			_g_free0 (mode);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
	}
	_tmp28_ = request;
	_tmp29_ = ((RygelHTTPRequest*) _tmp28_)->msg;
	_tmp30_ = _tmp29_->request_headers;
	_tmp31_ = soup_message_headers_get_one (_tmp30_, "getCaptionInfo.sec");
	if (_tmp31_ != NULL) {
		RygelHTTPGet* _tmp32_;
		RygelMediaItem* _tmp33_;
		GeeArrayList* _tmp34_;
		gint _tmp35_;
		gint _tmp36_;
		_tmp32_ = request;
		_tmp33_ = ((RygelHTTPRequest*) _tmp32_)->item;
		_tmp34_ = (RYGEL_IS_VIDEO_ITEM (_tmp33_) ? ((RygelVideoItem*) _tmp33_) : NULL)->subtitles;
		_tmp35_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp34_);
		_tmp36_ = _tmp35_;
		_tmp27_ = _tmp36_ > 0;
	} else {
		_tmp27_ = FALSE;
	}
	_tmp37_ = _tmp27_;
	if (_tmp37_) {
		RygelHTTPGet* _tmp38_;
		RygelHTTPServer* _tmp39_;
		RygelHTTPGet* _tmp40_;
		RygelMediaItem* _tmp41_;
		gchar* _tmp42_ = NULL;
		gchar* caption_uri;
		RygelHTTPGet* _tmp43_;
		SoupMessage* _tmp44_;
		SoupMessageHeaders* _tmp45_;
		const gchar* _tmp46_;
		_tmp38_ = request;
		_tmp39_ = ((RygelHTTPRequest*) _tmp38_)->http_server;
		_tmp40_ = request;
		_tmp41_ = ((RygelHTTPRequest*) _tmp40_)->item;
		_tmp42_ = rygel_transcode_manager_create_uri_for_item ((RygelTranscodeManager*) _tmp39_, _tmp41_, -1, 0, NULL);
		caption_uri = _tmp42_;
		_tmp43_ = request;
		_tmp44_ = ((RygelHTTPRequest*) _tmp43_)->msg;
		_tmp45_ = _tmp44_->response_headers;
		_tmp46_ = caption_uri;
		soup_message_headers_append (_tmp45_, "CaptionInfo.sec", _tmp46_);
		_g_free0 (caption_uri);
	}
	_tmp47_ = request;
	_tmp48_ = ((RygelHTTPRequest*) _tmp47_)->msg;
	_tmp49_ = _tmp48_->response_headers;
	soup_message_headers_append (_tmp49_, "Connection", "close");
	_g_object_unref0 (didl_item);
	_g_object_unref0 (didl_writer);
	_g_free0 (mode);
}


void rygel_http_get_handler_add_response_headers (RygelHTTPGetHandler* self, RygelHTTPGet* request, GError** error) {
	g_return_if_fail (self != NULL);
	RYGEL_HTTP_GET_HANDLER_GET_CLASS (self)->add_response_headers (self, request, error);
}


static gboolean rygel_http_get_handler_real_knows_size (RygelHTTPGetHandler* self, RygelHTTPGet* request) {
	gboolean result = FALSE;
	g_return_val_if_fail (request != NULL, FALSE);
	result = FALSE;
	return result;
}


gboolean rygel_http_get_handler_knows_size (RygelHTTPGetHandler* self, RygelHTTPGet* request) {
	g_return_val_if_fail (self != NULL, FALSE);
	return RYGEL_HTTP_GET_HANDLER_GET_CLASS (self)->knows_size (self, request);
}


static RygelHTTPResponse* rygel_http_get_handler_real_render_body (RygelHTTPGetHandler* self, RygelHTTPGet* request, GError** error) {
	g_critical ("Type `%s' does not implement abstract method `rygel_http_get_handler_render_body'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}


RygelHTTPResponse* rygel_http_get_handler_render_body (RygelHTTPGetHandler* self, RygelHTTPGet* request, GError** error) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_HTTP_GET_HANDLER_GET_CLASS (self)->render_body (self, request, error);
}


static GUPnPDIDLLiteResource* rygel_http_get_handler_real_add_resource (RygelHTTPGetHandler* self, GUPnPDIDLLiteItem* didl_item, RygelHTTPGet* request, GError** error) {
	g_critical ("Type `%s' does not implement abstract method `rygel_http_get_handler_add_resource'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}


GUPnPDIDLLiteResource* rygel_http_get_handler_add_resource (RygelHTTPGetHandler* self, GUPnPDIDLLiteItem* didl_item, RygelHTTPGet* request, GError** error) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_HTTP_GET_HANDLER_GET_CLASS (self)->add_resource (self, didl_item, request, error);
}


RygelHTTPGetHandler* rygel_http_get_handler_construct (GType object_type) {
	RygelHTTPGetHandler * self = NULL;
	self = (RygelHTTPGetHandler*) g_object_new (object_type, NULL);
	return self;
}


GCancellable* rygel_http_get_handler_get_cancellable (RygelHTTPGetHandler* self) {
	GCancellable* result;
	GCancellable* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_cancellable;
	result = _tmp0_;
	return result;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


void rygel_http_get_handler_set_cancellable (RygelHTTPGetHandler* self, GCancellable* value) {
	GCancellable* _tmp0_;
	GCancellable* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_cancellable);
	self->priv->_cancellable = _tmp1_;
	g_object_notify ((GObject *) self, "cancellable");
}


static void rygel_http_get_handler_class_init (RygelHTTPGetHandlerClass * klass) {
	rygel_http_get_handler_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelHTTPGetHandlerPrivate));
	RYGEL_HTTP_GET_HANDLER_CLASS (klass)->add_response_headers = rygel_http_get_handler_real_add_response_headers;
	RYGEL_HTTP_GET_HANDLER_CLASS (klass)->knows_size = rygel_http_get_handler_real_knows_size;
	RYGEL_HTTP_GET_HANDLER_CLASS (klass)->render_body = rygel_http_get_handler_real_render_body;
	RYGEL_HTTP_GET_HANDLER_CLASS (klass)->add_resource = rygel_http_get_handler_real_add_resource;
	G_OBJECT_CLASS (klass)->get_property = _vala_rygel_http_get_handler_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_rygel_http_get_handler_set_property;
	G_OBJECT_CLASS (klass)->finalize = rygel_http_get_handler_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_HTTP_GET_HANDLER_CANCELLABLE, g_param_spec_object ("cancellable", "cancellable", "cancellable", G_TYPE_CANCELLABLE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void rygel_http_get_handler_instance_init (RygelHTTPGetHandler * self) {
	self->priv = RYGEL_HTTP_GET_HANDLER_GET_PRIVATE (self);
}


static void rygel_http_get_handler_finalize (GObject* obj) {
	RygelHTTPGetHandler * self;
	self = RYGEL_HTTP_GET_HANDLER (obj);
	_g_object_unref0 (self->priv->_cancellable);
	G_OBJECT_CLASS (rygel_http_get_handler_parent_class)->finalize (obj);
}


/**
 * HTTP GET request handler interface.
 */
GType rygel_http_get_handler_get_type (void) {
	static volatile gsize rygel_http_get_handler_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_http_get_handler_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelHTTPGetHandlerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_http_get_handler_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelHTTPGetHandler), 0, (GInstanceInitFunc) rygel_http_get_handler_instance_init, NULL };
		GType rygel_http_get_handler_type_id;
		rygel_http_get_handler_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelHTTPGetHandler", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&rygel_http_get_handler_type_id__volatile, rygel_http_get_handler_type_id);
	}
	return rygel_http_get_handler_type_id__volatile;
}


static void _vala_rygel_http_get_handler_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	RygelHTTPGetHandler * self;
	self = RYGEL_HTTP_GET_HANDLER (object);
	switch (property_id) {
		case RYGEL_HTTP_GET_HANDLER_CANCELLABLE:
		g_value_set_object (value, rygel_http_get_handler_get_cancellable (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_rygel_http_get_handler_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	RygelHTTPGetHandler * self;
	self = RYGEL_HTTP_GET_HANDLER (object);
	switch (property_id) {
		case RYGEL_HTTP_GET_HANDLER_CANCELLABLE:
		rygel_http_get_handler_set_cancellable (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}


static gint _vala_array_length (gpointer array) {
	int length;
	length = 0;
	if (array) {
		while (((gpointer*) array)[length]) {
			length++;
		}
	}
	return length;
}



