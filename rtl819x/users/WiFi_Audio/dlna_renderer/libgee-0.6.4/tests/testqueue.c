/* testqueue.c generated by valac 0.15.0.90-e9553, the Vala compiler
 * generated from testqueue.vala, do not modify */

/* testqueue.vala
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
 * 	Didier 'Ptitjes' Villevalois <ptitjes@free.fr>
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

#define TYPE_QUEUE_TESTS (queue_tests_get_type ())
#define QUEUE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_QUEUE_TESTS, QueueTests))
#define QUEUE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_QUEUE_TESTS, QueueTestsClass))
#define IS_QUEUE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_QUEUE_TESTS))
#define IS_QUEUE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_QUEUE_TESTS))
#define QUEUE_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_QUEUE_TESTS, QueueTestsClass))

typedef struct _QueueTests QueueTests;
typedef struct _QueueTestsClass QueueTestsClass;
typedef struct _QueueTestsPrivate QueueTestsPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
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

struct _QueueTests {
	CollectionTests parent_instance;
	QueueTestsPrivate * priv;
};

struct _QueueTestsClass {
	CollectionTestsClass parent_class;
};

typedef void (*GeeTestCaseTestMethod) (void* user_data);

static gpointer queue_tests_parent_class = NULL;

GType gee_test_case_get_type (void) G_GNUC_CONST;
GType collection_tests_get_type (void) G_GNUC_CONST;
GType queue_tests_get_type (void) G_GNUC_CONST;
enum  {
	QUEUE_TESTS_DUMMY_PROPERTY
};
QueueTests* queue_tests_construct (GType object_type, const gchar* name);
CollectionTests* collection_tests_construct (GType object_type, const gchar* name);
void gee_test_case_add_test (GeeTestCase* self, const gchar* name, GeeTestCaseTestMethod test, void* test_target);
void queue_tests_test_capacity_bound (QueueTests* self);
static void _queue_tests_test_capacity_bound_gee_test_case_test_method (gpointer self);
void queue_tests_test_one_element_operation (QueueTests* self);
static void _queue_tests_test_one_element_operation_gee_test_case_test_method (gpointer self);
void queue_tests_test_gobject_properties (QueueTests* self);
static void _queue_tests_test_gobject_properties_gee_test_case_test_method (gpointer self);


static void _queue_tests_test_capacity_bound_gee_test_case_test_method (gpointer self) {
	queue_tests_test_capacity_bound (self);
}


static void _queue_tests_test_one_element_operation_gee_test_case_test_method (gpointer self) {
	queue_tests_test_one_element_operation (self);
}


static void _queue_tests_test_gobject_properties_gee_test_case_test_method (gpointer self) {
	queue_tests_test_gobject_properties (self);
}


QueueTests* queue_tests_construct (GType object_type, const gchar* name) {
	QueueTests * self = NULL;
	const gchar* _tmp0_;
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = name;
	self = (QueueTests*) collection_tests_construct (object_type, _tmp0_);
	gee_test_case_add_test ((GeeTestCase*) self, "[Queue] capacity bound", _queue_tests_test_capacity_bound_gee_test_case_test_method, self);
	gee_test_case_add_test ((GeeTestCase*) self, "[Queue] one element operation", _queue_tests_test_one_element_operation_gee_test_case_test_method, self);
	gee_test_case_add_test ((GeeTestCase*) self, "[Queue] GObject properties", _queue_tests_test_gobject_properties_gee_test_case_test_method, self);
	return self;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


void queue_tests_test_capacity_bound (QueueTests* self) {
	GeeCollection* _tmp0_;
	GeeQueue* _tmp1_;
	GeeQueue* test_queue;
	GeeQueue* _tmp2_;
	GeeQueue* _tmp3_;
	gint _tmp4_;
	gint _tmp5_;
	g_return_if_fail (self != NULL);
	_tmp0_ = ((CollectionTests*) self)->test_collection;
	_tmp1_ = _g_object_ref0 (GEE_IS_QUEUE (_tmp0_) ? ((GeeQueue*) _tmp0_) : NULL);
	test_queue = _tmp1_;
	_tmp2_ = test_queue;
	g_assert (_tmp2_ != NULL);
	_tmp3_ = test_queue;
	_tmp4_ = gee_queue_get_capacity (_tmp3_);
	_tmp5_ = _tmp4_;
	if (_tmp5_ == GEE_QUEUE_UNBOUNDED_CAPACITY) {
		GeeQueue* _tmp6_;
		gint _tmp7_;
		gint _tmp8_;
		GeeQueue* _tmp9_;
		gboolean _tmp10_;
		gboolean _tmp11_;
		_tmp6_ = test_queue;
		_tmp7_ = gee_queue_get_remaining_capacity (_tmp6_);
		_tmp8_ = _tmp7_;
		g_assert (_tmp8_ == GEE_QUEUE_UNBOUNDED_CAPACITY);
		_tmp9_ = test_queue;
		_tmp10_ = gee_queue_get_is_full (_tmp9_);
		_tmp11_ = _tmp10_;
		g_assert (!_tmp11_);
	} else {
		GeeQueue* _tmp12_;
		gboolean _tmp13_;
		gboolean _tmp14_;
		GeeQueue* _tmp15_;
		gint _tmp16_;
		gint _tmp17_;
		gint capacity;
		GeeQueue* _tmp33_;
		gboolean _tmp34_;
		gboolean _tmp35_;
		GeeQueue* _tmp51_;
		gboolean _tmp52_;
		gboolean _tmp53_;
		_tmp12_ = test_queue;
		_tmp13_ = gee_collection_get_is_empty ((GeeCollection*) _tmp12_);
		_tmp14_ = _tmp13_;
		g_assert (_tmp14_);
		_tmp15_ = test_queue;
		_tmp16_ = gee_queue_get_capacity (_tmp15_);
		_tmp17_ = _tmp16_;
		capacity = _tmp17_;
		{
			gint i;
			i = 1;
			{
				gboolean _tmp18_;
				_tmp18_ = TRUE;
				while (TRUE) {
					gboolean _tmp19_;
					gint _tmp21_;
					gint _tmp22_;
					GeeQueue* _tmp23_;
					gboolean _tmp24_;
					gboolean _tmp25_;
					GeeQueue* _tmp26_;
					gboolean _tmp27_ = FALSE;
					GeeQueue* _tmp28_;
					gint _tmp29_;
					gint _tmp30_;
					gint _tmp31_;
					gint _tmp32_;
					_tmp19_ = _tmp18_;
					if (!_tmp19_) {
						gint _tmp20_;
						_tmp20_ = i;
						i = _tmp20_ + 1;
					}
					_tmp18_ = FALSE;
					_tmp21_ = i;
					_tmp22_ = capacity;
					if (!(_tmp21_ <= _tmp22_)) {
						break;
					}
					_tmp23_ = test_queue;
					_tmp24_ = gee_queue_get_is_full (_tmp23_);
					_tmp25_ = _tmp24_;
					g_assert (!_tmp25_);
					_tmp26_ = test_queue;
					_tmp27_ = gee_queue_offer (_tmp26_, "one");
					g_assert (_tmp27_);
					_tmp28_ = test_queue;
					_tmp29_ = gee_queue_get_remaining_capacity (_tmp28_);
					_tmp30_ = _tmp29_;
					_tmp31_ = capacity;
					_tmp32_ = i;
					g_assert (_tmp30_ == (_tmp31_ - _tmp32_));
				}
			}
		}
		_tmp33_ = test_queue;
		_tmp34_ = gee_queue_get_is_full (_tmp33_);
		_tmp35_ = _tmp34_;
		g_assert (_tmp35_);
		{
			gint i;
			i = 1;
			{
				gboolean _tmp36_;
				_tmp36_ = TRUE;
				while (TRUE) {
					gboolean _tmp37_;
					gint _tmp39_;
					gint _tmp40_;
					GeeQueue* _tmp41_;
					gpointer _tmp42_ = NULL;
					gchar* _tmp43_;
					GeeQueue* _tmp44_;
					gboolean _tmp45_;
					gboolean _tmp46_;
					GeeQueue* _tmp47_;
					gint _tmp48_;
					gint _tmp49_;
					gint _tmp50_;
					_tmp37_ = _tmp36_;
					if (!_tmp37_) {
						gint _tmp38_;
						_tmp38_ = i;
						i = _tmp38_ + 1;
					}
					_tmp36_ = FALSE;
					_tmp39_ = i;
					_tmp40_ = capacity;
					if (!(_tmp39_ <= _tmp40_)) {
						break;
					}
					_tmp41_ = test_queue;
					_tmp42_ = gee_queue_poll (_tmp41_);
					_tmp43_ = (gchar*) _tmp42_;
					g_assert (g_strcmp0 (_tmp43_, "one") == 0);
					_g_free0 (_tmp43_);
					_tmp44_ = test_queue;
					_tmp45_ = gee_queue_get_is_full (_tmp44_);
					_tmp46_ = _tmp45_;
					g_assert (!_tmp46_);
					_tmp47_ = test_queue;
					_tmp48_ = gee_queue_get_remaining_capacity (_tmp47_);
					_tmp49_ = _tmp48_;
					_tmp50_ = i;
					g_assert (_tmp49_ == _tmp50_);
				}
			}
		}
		_tmp51_ = test_queue;
		_tmp52_ = gee_collection_get_is_empty ((GeeCollection*) _tmp51_);
		_tmp53_ = _tmp52_;
		g_assert (_tmp53_);
	}
	_g_object_unref0 (test_queue);
}


void queue_tests_test_one_element_operation (QueueTests* self) {
	GeeCollection* _tmp0_;
	GeeQueue* _tmp1_;
	GeeQueue* test_queue;
	GeeArrayList* _tmp2_;
	GeeArrayList* recipient;
	gboolean _tmp3_ = FALSE;
	gpointer _tmp4_ = NULL;
	gchar* _tmp5_;
	gint _tmp6_;
	gint _tmp7_;
	gboolean _tmp8_;
	gboolean _tmp9_;
	gpointer _tmp10_ = NULL;
	gchar* _tmp11_;
	gint _tmp12_;
	gint _tmp13_;
	gboolean _tmp14_;
	gboolean _tmp15_;
	gpointer _tmp16_ = NULL;
	gchar* _tmp17_;
	gpointer _tmp18_ = NULL;
	gchar* _tmp19_;
	gboolean _tmp20_ = FALSE;
	gint _tmp21_ = 0;
	gint _tmp22_;
	gint _tmp23_;
	gboolean _tmp24_;
	gboolean _tmp25_;
	gint _tmp26_;
	gint _tmp27_;
	gpointer _tmp28_ = NULL;
	gchar* _tmp29_;
	gint _tmp30_ = 0;
	gint _tmp31_;
	gint _tmp32_;
	gboolean _tmp33_;
	gboolean _tmp34_;
	gint _tmp35_;
	gint _tmp36_;
	gboolean _tmp37_ = FALSE;
	gint _tmp38_ = 0;
	gint _tmp39_;
	gint _tmp40_;
	gboolean _tmp41_;
	gboolean _tmp42_;
	gint _tmp43_;
	gint _tmp44_;
	gpointer _tmp45_ = NULL;
	gchar* _tmp46_;
	g_return_if_fail (self != NULL);
	_tmp0_ = ((CollectionTests*) self)->test_collection;
	_tmp1_ = _g_object_ref0 (GEE_IS_QUEUE (_tmp0_) ? ((GeeQueue*) _tmp0_) : NULL);
	test_queue = _tmp1_;
	_tmp2_ = gee_array_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL);
	recipient = _tmp2_;
	g_assert (test_queue != NULL);
	_tmp3_ = gee_queue_offer (test_queue, "one");
	g_assert (_tmp3_);
	_tmp4_ = gee_queue_peek (test_queue);
	_tmp5_ = (gchar*) _tmp4_;
	g_assert (g_strcmp0 (_tmp5_, "one") == 0);
	_g_free0 (_tmp5_);
	_tmp6_ = gee_collection_get_size ((GeeCollection*) test_queue);
	_tmp7_ = _tmp6_;
	g_assert (_tmp7_ == 1);
	_tmp8_ = gee_collection_get_is_empty ((GeeCollection*) test_queue);
	_tmp9_ = _tmp8_;
	g_assert (!_tmp9_);
	_tmp10_ = gee_queue_poll (test_queue);
	_tmp11_ = (gchar*) _tmp10_;
	g_assert (g_strcmp0 (_tmp11_, "one") == 0);
	_g_free0 (_tmp11_);
	_tmp12_ = gee_collection_get_size ((GeeCollection*) test_queue);
	_tmp13_ = _tmp12_;
	g_assert (_tmp13_ == 0);
	_tmp14_ = gee_collection_get_is_empty ((GeeCollection*) test_queue);
	_tmp15_ = _tmp14_;
	g_assert (_tmp15_);
	_tmp16_ = gee_queue_peek (test_queue);
	_tmp17_ = (gchar*) _tmp16_;
	g_assert (_tmp17_ == NULL);
	_g_free0 (_tmp17_);
	_tmp18_ = gee_queue_poll (test_queue);
	_tmp19_ = (gchar*) _tmp18_;
	g_assert (_tmp19_ == NULL);
	_g_free0 (_tmp19_);
	gee_abstract_collection_clear ((GeeAbstractCollection*) recipient);
	_tmp20_ = gee_queue_offer (test_queue, "one");
	g_assert (_tmp20_);
	_tmp21_ = gee_queue_drain (test_queue, (GeeCollection*) recipient, 1);
	g_assert (_tmp21_ == 1);
	_tmp22_ = gee_collection_get_size ((GeeCollection*) test_queue);
	_tmp23_ = _tmp22_;
	g_assert (_tmp23_ == 0);
	_tmp24_ = gee_collection_get_is_empty ((GeeCollection*) test_queue);
	_tmp25_ = _tmp24_;
	g_assert (_tmp25_);
	_tmp26_ = gee_collection_get_size ((GeeCollection*) recipient);
	_tmp27_ = _tmp26_;
	g_assert (_tmp27_ == 1);
	_tmp28_ = gee_abstract_list_get ((GeeAbstractList*) recipient, 0);
	_tmp29_ = (gchar*) _tmp28_;
	g_assert (g_strcmp0 (_tmp29_, "one") == 0);
	_g_free0 (_tmp29_);
	gee_abstract_collection_clear ((GeeAbstractCollection*) recipient);
	_tmp30_ = gee_queue_drain (test_queue, (GeeCollection*) recipient, 1);
	g_assert (_tmp30_ == 0);
	_tmp31_ = gee_collection_get_size ((GeeCollection*) test_queue);
	_tmp32_ = _tmp31_;
	g_assert (_tmp32_ == 0);
	_tmp33_ = gee_collection_get_is_empty ((GeeCollection*) test_queue);
	_tmp34_ = _tmp33_;
	g_assert (_tmp34_);
	_tmp35_ = gee_collection_get_size ((GeeCollection*) recipient);
	_tmp36_ = _tmp35_;
	g_assert (_tmp36_ == 0);
	gee_abstract_collection_clear ((GeeAbstractCollection*) recipient);
	_tmp37_ = gee_queue_offer (test_queue, "one");
	g_assert (_tmp37_);
	_tmp38_ = gee_queue_drain (test_queue, (GeeCollection*) recipient, -1);
	g_assert (_tmp38_ == 1);
	_tmp39_ = gee_collection_get_size ((GeeCollection*) test_queue);
	_tmp40_ = _tmp39_;
	g_assert (_tmp40_ == 0);
	_tmp41_ = gee_collection_get_is_empty ((GeeCollection*) test_queue);
	_tmp42_ = _tmp41_;
	g_assert (_tmp42_);
	_tmp43_ = gee_collection_get_size ((GeeCollection*) recipient);
	_tmp44_ = _tmp43_;
	g_assert (_tmp44_ == 1);
	_tmp45_ = gee_abstract_list_get ((GeeAbstractList*) recipient, 0);
	_tmp46_ = (gchar*) _tmp45_;
	g_assert (g_strcmp0 (_tmp46_, "one") == 0);
	_g_free0 (_tmp46_);
	_g_object_unref0 (recipient);
	_g_object_unref0 (test_queue);
}


void queue_tests_test_gobject_properties (QueueTests* self) {
	GeeCollection* _tmp0_;
	GeeQueue* _tmp1_;
	GeeQueue* test_queue;
	GValue value = {0};
	GValue _tmp2_ = {0};
	gint _tmp3_ = 0;
	gint _tmp4_;
	gint _tmp5_;
	GValue _tmp6_ = {0};
	gint _tmp7_ = 0;
	gint _tmp8_;
	gint _tmp9_;
	GValue _tmp10_ = {0};
	gboolean _tmp11_ = FALSE;
	gboolean _tmp12_;
	gboolean _tmp13_;
	g_return_if_fail (self != NULL);
	_tmp0_ = ((CollectionTests*) self)->test_collection;
	_tmp1_ = _g_object_ref0 (GEE_IS_QUEUE (_tmp0_) ? ((GeeQueue*) _tmp0_) : NULL);
	test_queue = _tmp1_;
	g_assert (test_queue != NULL);
	g_value_init (&_tmp2_, G_TYPE_INT);
	G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
	value = _tmp2_;
	g_object_get_property ((GObject*) test_queue, "capacity", &value);
	_tmp3_ = g_value_get_int (&value);
	_tmp4_ = gee_queue_get_capacity (test_queue);
	_tmp5_ = _tmp4_;
	g_assert (_tmp3_ == _tmp5_);
	g_value_unset (&value);
	g_value_init (&_tmp6_, G_TYPE_INT);
	G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
	value = _tmp6_;
	g_object_get_property ((GObject*) test_queue, "remaining-capacity", &value);
	_tmp7_ = g_value_get_int (&value);
	_tmp8_ = gee_queue_get_remaining_capacity (test_queue);
	_tmp9_ = _tmp8_;
	g_assert (_tmp7_ == _tmp9_);
	g_value_unset (&value);
	g_value_init (&_tmp10_, G_TYPE_BOOLEAN);
	G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
	value = _tmp10_;
	g_object_get_property ((GObject*) test_queue, "is-full", &value);
	_tmp11_ = g_value_get_boolean (&value);
	_tmp12_ = gee_queue_get_is_full (test_queue);
	_tmp13_ = _tmp12_;
	g_assert (_tmp11_ == _tmp13_);
	g_value_unset (&value);
	G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
	_g_object_unref0 (test_queue);
}


static void queue_tests_class_init (QueueTestsClass * klass) {
	queue_tests_parent_class = g_type_class_peek_parent (klass);
}


static void queue_tests_instance_init (QueueTests * self) {
}


GType queue_tests_get_type (void) {
	static volatile gsize queue_tests_type_id__volatile = 0;
	if (g_once_init_enter (&queue_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (QueueTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) queue_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (QueueTests), 0, (GInstanceInitFunc) queue_tests_instance_init, NULL };
		GType queue_tests_type_id;
		queue_tests_type_id = g_type_register_static (TYPE_COLLECTION_TESTS, "QueueTests", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&queue_tests_type_id__volatile, queue_tests_type_id);
	}
	return queue_tests_type_id__volatile;
}



