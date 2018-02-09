/* testtreemultiset.c generated by valac 0.15.0.90-e9553, the Vala compiler
 * generated from testtreemultiset.vala, do not modify */

/* testtreemultiset.vala
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
#include <gee.h>
#include <stdlib.h>
#include <string.h>


#define GEE_TYPE_TEST_CASE (gee_test_case_get_type ())
#define GEE_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_TEST_CASE, GeeTestCase))
#define GEE_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_TEST_CASE, GeeTestCaseClass))
#define GEE_IS_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_TEST_CASE))
#define GEE_IS_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_TEST_CASE))
#define GEE_TEST_CASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_TEST_CASE, GeeTestCaseClass))

typedef struct _GeeTestCase GeeTestCase;
typedef struct _GeeTestCaseClass GeeTestCaseClass;
typedef struct _GeeTestCasePrivate GeeTestCasePrivate;

#define TYPE_COLLECTION_TESTS (collection_tests_get_type ())
#define COLLECTION_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_COLLECTION_TESTS, CollectionTests))
#define COLLECTION_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_COLLECTION_TESTS, CollectionTestsClass))
#define IS_COLLECTION_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_COLLECTION_TESTS))
#define IS_COLLECTION_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_COLLECTION_TESTS))
#define COLLECTION_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_COLLECTION_TESTS, CollectionTestsClass))

typedef struct _CollectionTests CollectionTests;
typedef struct _CollectionTestsClass CollectionTestsClass;
typedef struct _CollectionTestsPrivate CollectionTestsPrivate;

#define TYPE_MULTI_SET_TESTS (multi_set_tests_get_type ())
#define MULTI_SET_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MULTI_SET_TESTS, MultiSetTests))
#define MULTI_SET_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MULTI_SET_TESTS, MultiSetTestsClass))
#define IS_MULTI_SET_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MULTI_SET_TESTS))
#define IS_MULTI_SET_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MULTI_SET_TESTS))
#define MULTI_SET_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MULTI_SET_TESTS, MultiSetTestsClass))

typedef struct _MultiSetTests MultiSetTests;
typedef struct _MultiSetTestsClass MultiSetTestsClass;
typedef struct _MultiSetTestsPrivate MultiSetTestsPrivate;

#define TYPE_TREE_MULTI_SET_TESTS (tree_multi_set_tests_get_type ())
#define TREE_MULTI_SET_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TREE_MULTI_SET_TESTS, TreeMultiSetTests))
#define TREE_MULTI_SET_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TREE_MULTI_SET_TESTS, TreeMultiSetTestsClass))
#define IS_TREE_MULTI_SET_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TREE_MULTI_SET_TESTS))
#define IS_TREE_MULTI_SET_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TREE_MULTI_SET_TESTS))
#define TREE_MULTI_SET_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TREE_MULTI_SET_TESTS, TreeMultiSetTestsClass))

typedef struct _TreeMultiSetTests TreeMultiSetTests;
typedef struct _TreeMultiSetTestsClass TreeMultiSetTestsClass;
typedef struct _TreeMultiSetTestsPrivate TreeMultiSetTestsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _GeeTestCase {
	GObject parent_instance;
	GeeTestCasePrivate * priv;
};

struct _GeeTestCaseClass {
	GObjectClass parent_class;
	void (*set_up) (GeeTestCase* self);
	void (*tear_down) (GeeTestCase* self);
};

struct _CollectionTests {
	GeeTestCase parent_instance;
	CollectionTestsPrivate * priv;
	GeeCollection* test_collection;
};

struct _CollectionTestsClass {
	GeeTestCaseClass parent_class;
};

struct _MultiSetTests {
	CollectionTests parent_instance;
	MultiSetTestsPrivate * priv;
};

struct _MultiSetTestsClass {
	CollectionTestsClass parent_class;
};

struct _TreeMultiSetTests {
	MultiSetTests parent_instance;
	TreeMultiSetTestsPrivate * priv;
};

struct _TreeMultiSetTestsClass {
	MultiSetTestsClass parent_class;
};

typedef void (*GeeTestCaseTestMethod) (void* user_data);

static gpointer tree_multi_set_tests_parent_class = NULL;

GType gee_test_case_get_type (void) G_GNUC_CONST;
GType collection_tests_get_type (void) G_GNUC_CONST;
GType multi_set_tests_get_type (void) G_GNUC_CONST;
GType tree_multi_set_tests_get_type (void) G_GNUC_CONST;
enum  {
	TREE_MULTI_SET_TESTS_DUMMY_PROPERTY
};
TreeMultiSetTests* tree_multi_set_tests_new (void);
TreeMultiSetTests* tree_multi_set_tests_construct (GType object_type);
MultiSetTests* multi_set_tests_construct (GType object_type, const gchar* name);
void gee_test_case_add_test (GeeTestCase* self, const gchar* name, GeeTestCaseTestMethod test, void* test_target);
static void tree_multi_set_tests_test_selected_functions (TreeMultiSetTests* self);
static void _tree_multi_set_tests_test_selected_functions_gee_test_case_test_method (gpointer self);
static void tree_multi_set_tests_real_set_up (GeeTestCase* base);
static void tree_multi_set_tests_real_tear_down (GeeTestCase* base);


static void _tree_multi_set_tests_test_selected_functions_gee_test_case_test_method (gpointer self) {
	tree_multi_set_tests_test_selected_functions (self);
}


TreeMultiSetTests* tree_multi_set_tests_construct (GType object_type) {
	TreeMultiSetTests * self = NULL;
	self = (TreeMultiSetTests*) multi_set_tests_construct (object_type, "TreeMultiSet");
	gee_test_case_add_test ((GeeTestCase*) self, "[TreeMultiSet] selected functions", _tree_multi_set_tests_test_selected_functions_gee_test_case_test_method, self);
	return self;
}


TreeMultiSetTests* tree_multi_set_tests_new (void) {
	return tree_multi_set_tests_construct (TYPE_TREE_MULTI_SET_TESTS);
}


static void tree_multi_set_tests_real_set_up (GeeTestCase* base) {
	TreeMultiSetTests * self;
	GeeTreeMultiSet* _tmp0_;
	self = (TreeMultiSetTests*) base;
	_tmp0_ = gee_tree_multi_set_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL);
	_g_object_unref0 (((CollectionTests*) self)->test_collection);
	((CollectionTests*) self)->test_collection = (GeeCollection*) _tmp0_;
}


static void tree_multi_set_tests_real_tear_down (GeeTestCase* base) {
	TreeMultiSetTests * self;
	self = (TreeMultiSetTests*) base;
	_g_object_unref0 (((CollectionTests*) self)->test_collection);
	((CollectionTests*) self)->test_collection = NULL;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void tree_multi_set_tests_test_selected_functions (TreeMultiSetTests* self) {
	GeeCollection* _tmp0_;
	GeeTreeMultiSet* _tmp1_;
	GeeTreeMultiSet* test_multi_set;
	GCompareFunc _tmp2_;
	GCompareFunc _tmp3_;
	GCompareFunc _tmp4_;
	g_return_if_fail (self != NULL);
	_tmp0_ = ((CollectionTests*) self)->test_collection;
	_tmp1_ = _g_object_ref0 (GEE_IS_TREE_MULTI_SET (_tmp0_) ? ((GeeTreeMultiSet*) _tmp0_) : NULL);
	test_multi_set = _tmp1_;
	g_assert (test_multi_set != NULL);
	_tmp2_ = gee_tree_multi_set_get_compare_func (test_multi_set);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_strcmp0;
	g_assert (_tmp3_ == ((GCompareFunc) _tmp4_));
	_g_object_unref0 (test_multi_set);
}


static void tree_multi_set_tests_class_init (TreeMultiSetTestsClass * klass) {
	tree_multi_set_tests_parent_class = g_type_class_peek_parent (klass);
	GEE_TEST_CASE_CLASS (klass)->set_up = tree_multi_set_tests_real_set_up;
	GEE_TEST_CASE_CLASS (klass)->tear_down = tree_multi_set_tests_real_tear_down;
}


static void tree_multi_set_tests_instance_init (TreeMultiSetTests * self) {
}


GType tree_multi_set_tests_get_type (void) {
	static volatile gsize tree_multi_set_tests_type_id__volatile = 0;
	if (g_once_init_enter (&tree_multi_set_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TreeMultiSetTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) tree_multi_set_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TreeMultiSetTests), 0, (GInstanceInitFunc) tree_multi_set_tests_instance_init, NULL };
		GType tree_multi_set_tests_type_id;
		tree_multi_set_tests_type_id = g_type_register_static (TYPE_MULTI_SET_TESTS, "TreeMultiSetTests", &g_define_type_info, 0);
		g_once_init_leave (&tree_multi_set_tests_type_id__volatile, tree_multi_set_tests_type_id);
	}
	return tree_multi_set_tests_type_id__volatile;
}


