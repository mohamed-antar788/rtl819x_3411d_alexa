/* testlinkedlist.c generated by valac 0.15.0.90-e9553, the Vala compiler
 * generated from testlinkedlist.vala, do not modify */

/* testlinkedlist.vala
 *
 * Copyright (C) 2008  Jürg Billeter
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
 * Authors:
 * 	Jürg Billeter <j@bitron.ch>
 * 	Mark Lee <marklee@src.gnome.org> (port to LinkedList)
 * 	Julien Peeters <contact@julienpeeters.fr>
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

#define TYPE_LIST_TESTS (list_tests_get_type ())
#define LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_LIST_TESTS, ListTests))
#define LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_LIST_TESTS, ListTestsClass))
#define IS_LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_LIST_TESTS))
#define IS_LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_LIST_TESTS))
#define LIST_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_LIST_TESTS, ListTestsClass))

typedef struct _ListTests ListTests;
typedef struct _ListTestsClass ListTestsClass;
typedef struct _ListTestsPrivate ListTestsPrivate;

#define TYPE_LINKED_LIST_TESTS (linked_list_tests_get_type ())
#define LINKED_LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_LINKED_LIST_TESTS, LinkedListTests))
#define LINKED_LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_LINKED_LIST_TESTS, LinkedListTestsClass))
#define IS_LINKED_LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_LINKED_LIST_TESTS))
#define IS_LINKED_LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_LINKED_LIST_TESTS))
#define LINKED_LIST_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_LINKED_LIST_TESTS, LinkedListTestsClass))

typedef struct _LinkedListTests LinkedListTests;
typedef struct _LinkedListTestsClass LinkedListTestsClass;
typedef struct _LinkedListTestsPrivate LinkedListTestsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

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

struct _ListTests {
	CollectionTests parent_instance;
	ListTestsPrivate * priv;
};

struct _ListTestsClass {
	CollectionTestsClass parent_class;
	void (*test_duplicates_are_retained) (ListTests* self);
};

struct _LinkedListTests {
	ListTests parent_instance;
	LinkedListTestsPrivate * priv;
};

struct _LinkedListTestsClass {
	ListTestsClass parent_class;
};

typedef void (*GeeTestCaseTestMethod) (void* user_data);

static gpointer linked_list_tests_parent_class = NULL;

GType gee_test_case_get_type (void) G_GNUC_CONST;
GType collection_tests_get_type (void) G_GNUC_CONST;
GType list_tests_get_type (void) G_GNUC_CONST;
GType linked_list_tests_get_type (void) G_GNUC_CONST;
enum  {
	LINKED_LIST_TESTS_DUMMY_PROPERTY
};
LinkedListTests* linked_list_tests_new (void);
LinkedListTests* linked_list_tests_construct (GType object_type);
ListTests* list_tests_construct (GType object_type, const gchar* name);
void gee_test_case_add_test (GeeTestCase* self, const gchar* name, GeeTestCaseTestMethod test, void* test_target);
static void linked_list_tests_test_selected_functions (LinkedListTests* self);
static void _linked_list_tests_test_selected_functions_gee_test_case_test_method (gpointer self);
void linked_list_tests_test_gobject_properties (LinkedListTests* self);
static void _linked_list_tests_test_gobject_properties_gee_test_case_test_method (gpointer self);
static void linked_list_tests_test_sort (LinkedListTests* self);
static void _linked_list_tests_test_sort_gee_test_case_test_method (gpointer self);
static void linked_list_tests_real_set_up (GeeTestCase* base);
static void linked_list_tests_real_tear_down (GeeTestCase* base);


static void _linked_list_tests_test_selected_functions_gee_test_case_test_method (gpointer self) {
	linked_list_tests_test_selected_functions (self);
}


static void _linked_list_tests_test_gobject_properties_gee_test_case_test_method (gpointer self) {
	linked_list_tests_test_gobject_properties (self);
}


static void _linked_list_tests_test_sort_gee_test_case_test_method (gpointer self) {
	linked_list_tests_test_sort (self);
}


LinkedListTests* linked_list_tests_construct (GType object_type) {
	LinkedListTests * self = NULL;
	self = (LinkedListTests*) list_tests_construct (object_type, "LinkedList");
	gee_test_case_add_test ((GeeTestCase*) self, "[LinkedList] selected functions", _linked_list_tests_test_selected_functions_gee_test_case_test_method, self);
	gee_test_case_add_test ((GeeTestCase*) self, "[LinkedList] GObject properties", _linked_list_tests_test_gobject_properties_gee_test_case_test_method, self);
	gee_test_case_add_test ((GeeTestCase*) self, "[LinkedList] sort", _linked_list_tests_test_sort_gee_test_case_test_method, self);
	return self;
}


LinkedListTests* linked_list_tests_new (void) {
	return linked_list_tests_construct (TYPE_LINKED_LIST_TESTS);
}


static void linked_list_tests_real_set_up (GeeTestCase* base) {
	LinkedListTests * self;
	GeeLinkedList* _tmp0_;
	self = (LinkedListTests*) base;
	_tmp0_ = gee_linked_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL);
	_g_object_unref0 (((CollectionTests*) self)->test_collection);
	((CollectionTests*) self)->test_collection = (GeeCollection*) _tmp0_;
}


static void linked_list_tests_real_tear_down (GeeTestCase* base) {
	LinkedListTests * self;
	self = (LinkedListTests*) base;
	_g_object_unref0 (((CollectionTests*) self)->test_collection);
	((CollectionTests*) self)->test_collection = NULL;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void linked_list_tests_test_selected_functions (LinkedListTests* self) {
	GeeCollection* _tmp0_;
	GeeLinkedList* _tmp1_;
	GeeLinkedList* test_list;
	GEqualFunc _tmp2_;
	GEqualFunc _tmp3_;
	GEqualFunc _tmp4_;
	g_return_if_fail (self != NULL);
	_tmp0_ = ((CollectionTests*) self)->test_collection;
	_tmp1_ = _g_object_ref0 (GEE_IS_LINKED_LIST (_tmp0_) ? ((GeeLinkedList*) _tmp0_) : NULL);
	test_list = _tmp1_;
	g_assert (test_list != NULL);
	_tmp2_ = gee_linked_list_get_equal_func (test_list);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_str_equal;
	g_assert (_tmp3_ == _tmp4_);
	_g_object_unref0 (test_list);
}


void linked_list_tests_test_gobject_properties (LinkedListTests* self) {
	GeeCollection* _tmp0_;
	GeeLinkedList* _tmp1_;
	GeeLinkedList* test_list;
	GValue value = {0};
	GValue _tmp2_ = {0};
	void* _tmp3_ = NULL;
	GEqualFunc _tmp4_;
	GEqualFunc _tmp5_;
	g_return_if_fail (self != NULL);
	_tmp0_ = ((CollectionTests*) self)->test_collection;
	_tmp1_ = _g_object_ref0 (GEE_IS_LINKED_LIST (_tmp0_) ? ((GeeLinkedList*) _tmp0_) : NULL);
	test_list = _tmp1_;
	g_assert (test_list != NULL);
	g_value_init (&_tmp2_, G_TYPE_POINTER);
	G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
	value = _tmp2_;
	g_object_get_property ((GObject*) test_list, "equal-func", &value);
	_tmp3_ = g_value_get_pointer (&value);
	_tmp4_ = gee_linked_list_get_equal_func (test_list);
	_tmp5_ = _tmp4_;
	g_assert (_tmp3_ == ((void*) _tmp5_));
	g_value_unset (&value);
	G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
	_g_object_unref0 (test_list);
}


static void linked_list_tests_test_sort (LinkedListTests* self) {
	GeeCollection* _tmp0_;
	GeeLinkedList* _tmp1_;
	GeeLinkedList* test_list;
	gpointer _tmp2_ = NULL;
	gchar* _tmp3_;
	gpointer _tmp4_ = NULL;
	gchar* _tmp5_;
	gpointer _tmp6_ = NULL;
	gchar* _tmp7_;
	gpointer _tmp8_ = NULL;
	gchar* _tmp9_;
	gpointer _tmp10_ = NULL;
	gchar* _tmp11_;
	gpointer _tmp12_ = NULL;
	gchar* _tmp13_;
	gpointer _tmp14_ = NULL;
	gchar* _tmp15_;
	gpointer _tmp16_ = NULL;
	gchar* _tmp17_;
	gpointer _tmp18_ = NULL;
	gchar* _tmp19_;
	gpointer _tmp20_ = NULL;
	gchar* _tmp21_;
	gpointer _tmp22_ = NULL;
	gchar* _tmp23_;
	gpointer _tmp24_ = NULL;
	gchar* _tmp25_;
	g_return_if_fail (self != NULL);
	_tmp0_ = ((CollectionTests*) self)->test_collection;
	_tmp1_ = _g_object_ref0 (GEE_IS_LINKED_LIST (_tmp0_) ? ((GeeLinkedList*) _tmp0_) : NULL);
	test_list = _tmp1_;
	g_assert (test_list != NULL);
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "one");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "two");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "three");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "four");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "five");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "six");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "seven");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "eight");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "nine");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "ten");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "eleven");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "twelve");
	gee_list_sort ((GeeList*) test_list, NULL);
	_tmp2_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 0);
	_tmp3_ = (gchar*) _tmp2_;
	g_assert (g_strcmp0 (_tmp3_, "eight") == 0);
	_g_free0 (_tmp3_);
	_tmp4_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 1);
	_tmp5_ = (gchar*) _tmp4_;
	g_assert (g_strcmp0 (_tmp5_, "eleven") == 0);
	_g_free0 (_tmp5_);
	_tmp6_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 2);
	_tmp7_ = (gchar*) _tmp6_;
	g_assert (g_strcmp0 (_tmp7_, "five") == 0);
	_g_free0 (_tmp7_);
	_tmp8_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 3);
	_tmp9_ = (gchar*) _tmp8_;
	g_assert (g_strcmp0 (_tmp9_, "four") == 0);
	_g_free0 (_tmp9_);
	_tmp10_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 4);
	_tmp11_ = (gchar*) _tmp10_;
	g_assert (g_strcmp0 (_tmp11_, "nine") == 0);
	_g_free0 (_tmp11_);
	_tmp12_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 5);
	_tmp13_ = (gchar*) _tmp12_;
	g_assert (g_strcmp0 (_tmp13_, "one") == 0);
	_g_free0 (_tmp13_);
	_tmp14_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 6);
	_tmp15_ = (gchar*) _tmp14_;
	g_assert (g_strcmp0 (_tmp15_, "seven") == 0);
	_g_free0 (_tmp15_);
	_tmp16_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 7);
	_tmp17_ = (gchar*) _tmp16_;
	g_assert (g_strcmp0 (_tmp17_, "six") == 0);
	_g_free0 (_tmp17_);
	_tmp18_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 8);
	_tmp19_ = (gchar*) _tmp18_;
	g_assert (g_strcmp0 (_tmp19_, "ten") == 0);
	_g_free0 (_tmp19_);
	_tmp20_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 9);
	_tmp21_ = (gchar*) _tmp20_;
	g_assert (g_strcmp0 (_tmp21_, "three") == 0);
	_g_free0 (_tmp21_);
	_tmp22_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 10);
	_tmp23_ = (gchar*) _tmp22_;
	g_assert (g_strcmp0 (_tmp23_, "twelve") == 0);
	_g_free0 (_tmp23_);
	_tmp24_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 11);
	_tmp25_ = (gchar*) _tmp24_;
	g_assert (g_strcmp0 (_tmp25_, "two") == 0);
	_g_free0 (_tmp25_);
	_g_object_unref0 (test_list);
}


static void linked_list_tests_class_init (LinkedListTestsClass * klass) {
	linked_list_tests_parent_class = g_type_class_peek_parent (klass);
	GEE_TEST_CASE_CLASS (klass)->set_up = linked_list_tests_real_set_up;
	GEE_TEST_CASE_CLASS (klass)->tear_down = linked_list_tests_real_tear_down;
}


static void linked_list_tests_instance_init (LinkedListTests * self) {
}


GType linked_list_tests_get_type (void) {
	static volatile gsize linked_list_tests_type_id__volatile = 0;
	if (g_once_init_enter (&linked_list_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (LinkedListTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) linked_list_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LinkedListTests), 0, (GInstanceInitFunc) linked_list_tests_instance_init, NULL };
		GType linked_list_tests_type_id;
		linked_list_tests_type_id = g_type_register_static (TYPE_LIST_TESTS, "LinkedListTests", &g_define_type_info, 0);
		g_once_init_leave (&linked_list_tests_type_id__volatile, linked_list_tests_type_id);
	}
	return linked_list_tests_type_id__volatile;
}



