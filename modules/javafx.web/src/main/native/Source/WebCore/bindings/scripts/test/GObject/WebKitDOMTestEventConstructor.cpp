/*
 *  This file is part of the WebKit open source project.
 *  This file has been generated by generate-bindings.pl. DO NOT MODIFY!
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public License
 *  along with this library; see the file COPYING.LIB.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301, USA.
 */

#include "config.h"
#include "WebKitDOMTestEventConstructor.h"

#include "CSSImportRule.h"
#include "DOMObjectCache.h"
#include "Document.h"
#include "ExceptionCode.h"
#include "ExceptionCodeDescription.h"
#include "JSMainThreadExecState.h"
#include "WebKitDOMPrivate.h"
#include "WebKitDOMTestEventConstructorPrivate.h"
#include "gobject/ConvertToUTF8String.h"
#include <wtf/GetPtr.h>
#include <wtf/RefPtr.h>

#define WEBKIT_DOM_TEST_EVENT_CONSTRUCTOR_GET_PRIVATE(obj) G_TYPE_INSTANCE_GET_PRIVATE(obj, WEBKIT_DOM_TYPE_TEST_EVENT_CONSTRUCTOR, WebKitDOMTestEventConstructorPrivate)

typedef struct _WebKitDOMTestEventConstructorPrivate {
    RefPtr<WebCore::TestEventConstructor> coreObject;
} WebKitDOMTestEventConstructorPrivate;

namespace WebKit {

WebKitDOMTestEventConstructor* kit(WebCore::TestEventConstructor* obj)
{
    if (!obj)
        return 0;

    if (gpointer ret = DOMObjectCache::get(obj))
        return WEBKIT_DOM_TEST_EVENT_CONSTRUCTOR(ret);

    return wrapTestEventConstructor(obj);
}

WebCore::TestEventConstructor* core(WebKitDOMTestEventConstructor* request)
{
    return request ? static_cast<WebCore::TestEventConstructor*>(WEBKIT_DOM_OBJECT(request)->coreObject) : 0;
}

WebKitDOMTestEventConstructor* wrapTestEventConstructor(WebCore::TestEventConstructor* coreObject)
{
    ASSERT(coreObject);
    return WEBKIT_DOM_TEST_EVENT_CONSTRUCTOR(g_object_new(WEBKIT_DOM_TYPE_TEST_EVENT_CONSTRUCTOR, "core-object", coreObject, nullptr));
}

} // namespace WebKit

G_DEFINE_TYPE(WebKitDOMTestEventConstructor, webkit_dom_test_event_constructor, WEBKIT_DOM_TYPE_OBJECT)

enum {
    PROP_0,
    PROP_ATTR1,
    PROP_ATTR2,
};

static void webkit_dom_test_event_constructor_finalize(GObject* object)
{
    WebKitDOMTestEventConstructorPrivate* priv = WEBKIT_DOM_TEST_EVENT_CONSTRUCTOR_GET_PRIVATE(object);

    WebKit::DOMObjectCache::forget(priv->coreObject.get());

    priv->~WebKitDOMTestEventConstructorPrivate();
    G_OBJECT_CLASS(webkit_dom_test_event_constructor_parent_class)->finalize(object);
}

static void webkit_dom_test_event_constructor_get_property(GObject* object, guint propertyId, GValue* value, GParamSpec* pspec)
{
    WebKitDOMTestEventConstructor* self = WEBKIT_DOM_TEST_EVENT_CONSTRUCTOR(object);

    switch (propertyId) {
    case PROP_ATTR1:
        g_value_take_string(value, webkit_dom_test_event_constructor_get_attr1(self));
        break;
    case PROP_ATTR2:
        g_value_take_string(value, webkit_dom_test_event_constructor_get_attr2(self));
        break;
    default:
        G_OBJECT_WARN_INVALID_PROPERTY_ID(object, propertyId, pspec);
        break;
    }
}

static GObject* webkit_dom_test_event_constructor_constructor(GType type, guint constructPropertiesCount, GObjectConstructParam* constructProperties)
{
    GObject* object = G_OBJECT_CLASS(webkit_dom_test_event_constructor_parent_class)->constructor(type, constructPropertiesCount, constructProperties);

    WebKitDOMTestEventConstructorPrivate* priv = WEBKIT_DOM_TEST_EVENT_CONSTRUCTOR_GET_PRIVATE(object);
    priv->coreObject = static_cast<WebCore::TestEventConstructor*>(WEBKIT_DOM_OBJECT(object)->coreObject);
    WebKit::DOMObjectCache::put(priv->coreObject.get(), object);

    return object;
}

static void webkit_dom_test_event_constructor_class_init(WebKitDOMTestEventConstructorClass* requestClass)
{
    GObjectClass* gobjectClass = G_OBJECT_CLASS(requestClass);
    g_type_class_add_private(gobjectClass, sizeof(WebKitDOMTestEventConstructorPrivate));
    gobjectClass->constructor = webkit_dom_test_event_constructor_constructor;
    gobjectClass->finalize = webkit_dom_test_event_constructor_finalize;
    gobjectClass->get_property = webkit_dom_test_event_constructor_get_property;

    g_object_class_install_property(
        gobjectClass,
        PROP_ATTR1,
        g_param_spec_string(
            "attr1",
            "TestEventConstructor:attr1",
            "read-only gchar* TestEventConstructor:attr1",
            "",
            WEBKIT_PARAM_READABLE));

    g_object_class_install_property(
        gobjectClass,
        PROP_ATTR2,
        g_param_spec_string(
            "attr2",
            "TestEventConstructor:attr2",
            "read-only gchar* TestEventConstructor:attr2",
            "",
            WEBKIT_PARAM_READABLE));

}

static void webkit_dom_test_event_constructor_init(WebKitDOMTestEventConstructor* request)
{
    WebKitDOMTestEventConstructorPrivate* priv = WEBKIT_DOM_TEST_EVENT_CONSTRUCTOR_GET_PRIVATE(request);
    new (priv) WebKitDOMTestEventConstructorPrivate();
}

gchar* webkit_dom_test_event_constructor_get_attr1(WebKitDOMTestEventConstructor* self)
{
    WebCore::JSMainThreadNullState state;
    g_return_val_if_fail(WEBKIT_DOM_IS_TEST_EVENT_CONSTRUCTOR(self), 0);
    WebCore::TestEventConstructor* item = WebKit::core(self);
    gchar* result = convertToUTF8String(item->attr1());
    return result;
}

gchar* webkit_dom_test_event_constructor_get_attr2(WebKitDOMTestEventConstructor* self)
{
    WebCore::JSMainThreadNullState state;
    g_return_val_if_fail(WEBKIT_DOM_IS_TEST_EVENT_CONSTRUCTOR(self), 0);
    WebCore::TestEventConstructor* item = WebKit::core(self);
    gchar* result = convertToUTF8String(item->attr2());
    return result;
}
