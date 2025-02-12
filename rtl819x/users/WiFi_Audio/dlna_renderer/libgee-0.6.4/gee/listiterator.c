/* listiterator.c generated by valac 0.15.0.90-e9553, the Vala compiler
 * generated from listiterator.vala, do not modify */

/* listiterator.vala
 *
 * Copyright (C) 2009  Didier Villevalois
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Didier 'Ptitjes Villevalois <ptitjes@free.fr>
 */

#include <glib.h>
#include <glib-object.h>


#define GEE_TYPE_ITERATOR (gee_iterator_get_type ())
#define GEE_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_ITERATOR, GeeIterator))
#define GEE_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_ITERATOR))
#define GEE_ITERATOR_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_ITERATOR, GeeIteratorIface))

typedef struct _GeeIterator GeeIterator;
typedef struct _GeeIteratorIface GeeIteratorIface;

#define GEE_TYPE_BIDIR_ITERATOR (gee_bidir_iterator_get_type ())
#define GEE_BIDIR_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_BIDIR_ITERATOR, GeeBidirIterator))
#define GEE_IS_BIDIR_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_BIDIR_ITERATOR))
#define GEE_BIDIR_ITERATOR_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_BIDIR_ITERATOR, GeeBidirIteratorIface))

typedef struct _GeeBidirIterator GeeBidirIterator;
typedef struct _GeeBidirIteratorIface GeeBidirIteratorIface;

#define GEE_TYPE_LIST_ITERATOR (gee_list_iterator_get_type ())
#define GEE_LIST_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_LIST_ITERATOR, GeeListIterator))
#define GEE_IS_LIST_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_LIST_ITERATOR))
#define GEE_LIST_ITERATOR_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_LIST_ITERATOR, GeeListIteratorIface))

typedef struct _GeeListIterator GeeListIterator;
typedef struct _GeeListIteratorIface GeeListIteratorIface;

struct _GeeIteratorIface {
	GTypeInterface parent_iface;
	gboolean (*next) (GeeIterator* self);
	gboolean (*has_next) (GeeIterator* self);
	gboolean (*first) (GeeIterator* self);
	gpointer (*get) (GeeIterator* self);
	void (*remove) (GeeIterator* self);
};

struct _GeeBidirIteratorIface {
	GTypeInterface parent_iface;
	gboolean (*previous) (GeeBidirIterator* self);
	gboolean (*has_previous) (GeeBidirIterator* self);
	gboolean (*last) (GeeBidirIterator* self);
};

struct _GeeListIteratorIface {
	GTypeInterface parent_iface;
	void (*set) (GeeListIterator* self, gconstpointer item);
	void (*insert) (GeeListIterator* self, gconstpointer item);
	void (*add) (GeeListIterator* self, gconstpointer item);
	gint (*index) (GeeListIterator* self);
};



GType gee_iterator_get_type (void) G_GNUC_CONST;
GType gee_bidir_iterator_get_type (void) G_GNUC_CONST;
GType gee_list_iterator_get_type (void) G_GNUC_CONST;
void gee_list_iterator_set (GeeListIterator* self, gconstpointer item);
void gee_list_iterator_insert (GeeListIterator* self, gconstpointer item);
void gee_list_iterator_add (GeeListIterator* self, gconstpointer item);
gint gee_list_iterator_index (GeeListIterator* self);


/**
 * Sets the current item in the iteration to the specified new item.
 */
void gee_list_iterator_set (GeeListIterator* self, gconstpointer item) {
	g_return_if_fail (self != NULL);
	GEE_LIST_ITERATOR_GET_INTERFACE (self)->set (self, item);
}


/**
 * Inserts the specified item before the current item in the iteration. The
 * cursor is let to point to the current item.
 */
void gee_list_iterator_insert (GeeListIterator* self, gconstpointer item) {
	g_return_if_fail (self != NULL);
	GEE_LIST_ITERATOR_GET_INTERFACE (self)->insert (self, item);
}


/**
 * Adds the specified item after the current item in the iteration. The
 * cursor is moved to point to the new added item.
 */
void gee_list_iterator_add (GeeListIterator* self, gconstpointer item) {
	g_return_if_fail (self != NULL);
	GEE_LIST_ITERATOR_GET_INTERFACE (self)->add (self, item);
}


/**
 * Returns the current index in the iteration.
 *
 * @return the current index
 */
gint gee_list_iterator_index (GeeListIterator* self) {
	g_return_val_if_fail (self != NULL, 0);
	return GEE_LIST_ITERATOR_GET_INTERFACE (self)->index (self);
}


static void gee_list_iterator_base_init (GeeListIteratorIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
	}
}


/**
 * A list iterator. This supports bi-directionnal and index-based iteration.
 */
GType gee_list_iterator_get_type (void) {
	static volatile gsize gee_list_iterator_type_id__volatile = 0;
	if (g_once_init_enter (&gee_list_iterator_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GeeListIteratorIface), (GBaseInitFunc) gee_list_iterator_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType gee_list_iterator_type_id;
		gee_list_iterator_type_id = g_type_register_static (G_TYPE_INTERFACE, "GeeListIterator", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (gee_list_iterator_type_id, GEE_TYPE_BIDIR_ITERATOR);
		g_once_init_leave (&gee_list_iterator_type_id__volatile, gee_list_iterator_type_id);
	}
	return gee_list_iterator_type_id__volatile;
}



