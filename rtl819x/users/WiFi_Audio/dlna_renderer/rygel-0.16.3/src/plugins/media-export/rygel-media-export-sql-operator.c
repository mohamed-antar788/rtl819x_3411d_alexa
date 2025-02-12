/* rygel-media-export-sql-operator.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-media-export-sql-operator.vala, do not modify */

/*
 * Copyright (C) 2010 Jens Georg <mail@jensge.org>.
 *
 * Author: Jens Georg <mail@jensge.org>
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
#include <libgupnp-av/gupnp-av.h>


#define RYGEL_MEDIA_EXPORT_TYPE_SQL_OPERATOR (rygel_media_export_sql_operator_get_type ())
#define RYGEL_MEDIA_EXPORT_SQL_OPERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_SQL_OPERATOR, RygelMediaExportSqlOperator))
#define RYGEL_MEDIA_EXPORT_SQL_OPERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_SQL_OPERATOR, RygelMediaExportSqlOperatorClass))
#define RYGEL_MEDIA_EXPORT_IS_SQL_OPERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_SQL_OPERATOR))
#define RYGEL_MEDIA_EXPORT_IS_SQL_OPERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_SQL_OPERATOR))
#define RYGEL_MEDIA_EXPORT_SQL_OPERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_SQL_OPERATOR, RygelMediaExportSqlOperatorClass))

typedef struct _RygelMediaExportSqlOperator RygelMediaExportSqlOperator;
typedef struct _RygelMediaExportSqlOperatorClass RygelMediaExportSqlOperatorClass;
typedef struct _RygelMediaExportSqlOperatorPrivate RygelMediaExportSqlOperatorPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _RygelMediaExportSqlOperator {
	GObject parent_instance;
	RygelMediaExportSqlOperatorPrivate * priv;
	gchar* name;
	gchar* arg;
	gchar* collate;
};

struct _RygelMediaExportSqlOperatorClass {
	GObjectClass parent_class;
	gchar* (*to_string) (RygelMediaExportSqlOperator* self);
};


static gpointer rygel_media_export_sql_operator_parent_class = NULL;

GType rygel_media_export_sql_operator_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_MEDIA_EXPORT_SQL_OPERATOR_DUMMY_PROPERTY
};
RygelMediaExportSqlOperator* rygel_media_export_sql_operator_new (const gchar* name, const gchar* arg, const gchar* collate);
RygelMediaExportSqlOperator* rygel_media_export_sql_operator_construct (GType object_type, const gchar* name, const gchar* arg, const gchar* collate);
RygelMediaExportSqlOperator* rygel_media_export_sql_operator_new_from_search_criteria_op (GUPnPSearchCriteriaOp op, const gchar* arg, const gchar* collate);
RygelMediaExportSqlOperator* rygel_media_export_sql_operator_construct_from_search_criteria_op (GType object_type, GUPnPSearchCriteriaOp op, const gchar* arg, const gchar* collate);
gchar* rygel_media_export_sql_operator_to_string (RygelMediaExportSqlOperator* self);
static gchar* rygel_media_export_sql_operator_real_to_string (RygelMediaExportSqlOperator* self);
static void rygel_media_export_sql_operator_finalize (GObject* obj);


RygelMediaExportSqlOperator* rygel_media_export_sql_operator_construct (GType object_type, const gchar* name, const gchar* arg, const gchar* collate) {
	RygelMediaExportSqlOperator * self = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	const gchar* _tmp2_;
	gchar* _tmp3_;
	const gchar* _tmp4_;
	gchar* _tmp5_;
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (arg != NULL, NULL);
	g_return_val_if_fail (collate != NULL, NULL);
	self = (RygelMediaExportSqlOperator*) g_object_new (object_type, NULL);
	_tmp0_ = name;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->name);
	self->name = _tmp1_;
	_tmp2_ = arg;
	_tmp3_ = g_strdup (_tmp2_);
	_g_free0 (self->arg);
	self->arg = _tmp3_;
	_tmp4_ = collate;
	_tmp5_ = g_strdup (_tmp4_);
	_g_free0 (self->collate);
	self->collate = _tmp5_;
	return self;
}


RygelMediaExportSqlOperator* rygel_media_export_sql_operator_new (const gchar* name, const gchar* arg, const gchar* collate) {
	return rygel_media_export_sql_operator_construct (RYGEL_MEDIA_EXPORT_TYPE_SQL_OPERATOR, name, arg, collate);
}


RygelMediaExportSqlOperator* rygel_media_export_sql_operator_construct_from_search_criteria_op (GType object_type, GUPnPSearchCriteriaOp op, const gchar* arg, const gchar* collate) {
	RygelMediaExportSqlOperator * self = NULL;
	gchar* sql;
	GUPnPSearchCriteriaOp _tmp0_;
	const gchar* _tmp7_;
	const gchar* _tmp8_;
	const gchar* _tmp9_;
	g_return_val_if_fail (arg != NULL, NULL);
	g_return_val_if_fail (collate != NULL, NULL);
	sql = NULL;
	_tmp0_ = op;
	switch (_tmp0_) {
		case GUPNP_SEARCH_CRITERIA_OP_EQ:
		{
			gchar* _tmp1_;
			_tmp1_ = g_strdup ("=");
			_g_free0 (sql);
			sql = _tmp1_;
			break;
		}
		case GUPNP_SEARCH_CRITERIA_OP_NEQ:
		{
			gchar* _tmp2_;
			_tmp2_ = g_strdup ("!=");
			_g_free0 (sql);
			sql = _tmp2_;
			break;
		}
		case GUPNP_SEARCH_CRITERIA_OP_LESS:
		{
			gchar* _tmp3_;
			_tmp3_ = g_strdup ("<");
			_g_free0 (sql);
			sql = _tmp3_;
			break;
		}
		case GUPNP_SEARCH_CRITERIA_OP_LEQ:
		{
			gchar* _tmp4_;
			_tmp4_ = g_strdup ("<=");
			_g_free0 (sql);
			sql = _tmp4_;
			break;
		}
		case GUPNP_SEARCH_CRITERIA_OP_GREATER:
		{
			gchar* _tmp5_;
			_tmp5_ = g_strdup (">");
			_g_free0 (sql);
			sql = _tmp5_;
			break;
		}
		case GUPNP_SEARCH_CRITERIA_OP_GEQ:
		{
			gchar* _tmp6_;
			_tmp6_ = g_strdup (">=");
			_g_free0 (sql);
			sql = _tmp6_;
			break;
		}
		default:
		{
			g_assert_not_reached ();
		}
	}
	_tmp7_ = sql;
	_tmp8_ = arg;
	_tmp9_ = collate;
	self = (RygelMediaExportSqlOperator*) rygel_media_export_sql_operator_construct (object_type, _tmp7_, _tmp8_, _tmp9_);
	_g_free0 (sql);
	return self;
}


RygelMediaExportSqlOperator* rygel_media_export_sql_operator_new_from_search_criteria_op (GUPnPSearchCriteriaOp op, const gchar* arg, const gchar* collate) {
	return rygel_media_export_sql_operator_construct_from_search_criteria_op (RYGEL_MEDIA_EXPORT_TYPE_SQL_OPERATOR, op, arg, collate);
}


static gchar* rygel_media_export_sql_operator_real_to_string (RygelMediaExportSqlOperator* self) {
	gchar* result = NULL;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	gchar* _tmp3_ = NULL;
	_tmp0_ = self->arg;
	_tmp1_ = self->name;
	_tmp2_ = self->collate;
	_tmp3_ = g_strdup_printf ("(%s %s ? %s)", _tmp0_, _tmp1_, _tmp2_);
	result = _tmp3_;
	return result;
}


gchar* rygel_media_export_sql_operator_to_string (RygelMediaExportSqlOperator* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_MEDIA_EXPORT_SQL_OPERATOR_GET_CLASS (self)->to_string (self);
}


static void rygel_media_export_sql_operator_class_init (RygelMediaExportSqlOperatorClass * klass) {
	rygel_media_export_sql_operator_parent_class = g_type_class_peek_parent (klass);
	RYGEL_MEDIA_EXPORT_SQL_OPERATOR_CLASS (klass)->to_string = rygel_media_export_sql_operator_real_to_string;
	G_OBJECT_CLASS (klass)->finalize = rygel_media_export_sql_operator_finalize;
}


static void rygel_media_export_sql_operator_instance_init (RygelMediaExportSqlOperator * self) {
}


static void rygel_media_export_sql_operator_finalize (GObject* obj) {
	RygelMediaExportSqlOperator * self;
	self = RYGEL_MEDIA_EXPORT_SQL_OPERATOR (obj);
	_g_free0 (self->name);
	_g_free0 (self->arg);
	_g_free0 (self->collate);
	G_OBJECT_CLASS (rygel_media_export_sql_operator_parent_class)->finalize (obj);
}


GType rygel_media_export_sql_operator_get_type (void) {
	static volatile gsize rygel_media_export_sql_operator_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_media_export_sql_operator_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelMediaExportSqlOperatorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_media_export_sql_operator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelMediaExportSqlOperator), 0, (GInstanceInitFunc) rygel_media_export_sql_operator_instance_init, NULL };
		GType rygel_media_export_sql_operator_type_id;
		rygel_media_export_sql_operator_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelMediaExportSqlOperator", &g_define_type_info, 0);
		g_once_init_leave (&rygel_media_export_sql_operator_type_id__volatile, rygel_media_export_sql_operator_type_id);
	}
	return rygel_media_export_sql_operator_type_id__volatile;
}



