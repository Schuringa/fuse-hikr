// This file was generated based on /Users/jordans/code/research/fuse/hikr/.uno/ux11/hikr.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.hikr_hikrButton-5f0c0853.h>
#include <hikr.Button.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class hikr_hikrButton_FontSize_Property :64
// {
static void hikr_hikrButton_FontSize_Property_build(uType* type)
{
    ::TYPES[0] = ::g::hikr::Button_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*hikr.Button*/], offsetof(::g::hikr_hikrButton_FontSize_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* hikr_hikrButton_FontSize_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(hikr_hikrButton_FontSize_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("hikr_hikrButton_FontSize_Property", options);
    type->fp_build_ = hikr_hikrButton_FontSize_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))hikr_hikrButton_FontSize_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))hikr_hikrButton_FontSize_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))hikr_hikrButton_FontSize_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))hikr_hikrButton_FontSize_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public hikr_hikrButton_FontSize_Property(hikr.Button obj, Uno.UX.Selector name) :67
void hikr_hikrButton_FontSize_Property__ctor_3_fn(hikr_hikrButton_FontSize_Property* __this, ::g::hikr::Button* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :69
void hikr_hikrButton_FontSize_Property__Get1_fn(hikr_hikrButton_FontSize_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::hikr::Button*>(obj, ::TYPES[0/*hikr.Button*/]))->FontSize(), void();
}

// public hikr_hikrButton_FontSize_Property New(hikr.Button obj, Uno.UX.Selector name) :67
void hikr_hikrButton_FontSize_Property__New1_fn(::g::hikr::Button* obj, ::g::Uno::UX::Selector* name, hikr_hikrButton_FontSize_Property** __retval)
{
    *__retval = hikr_hikrButton_FontSize_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :68
void hikr_hikrButton_FontSize_Property__get_Object_fn(hikr_hikrButton_FontSize_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :70
void hikr_hikrButton_FontSize_Property__Set1_fn(hikr_hikrButton_FontSize_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::hikr::Button*>(obj, ::TYPES[0/*hikr.Button*/]))->SetFontSize(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :71
void hikr_hikrButton_FontSize_Property__get_SupportsOriginSetter_fn(hikr_hikrButton_FontSize_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public hikr_hikrButton_FontSize_Property(hikr.Button obj, Uno.UX.Selector name) [instance] :67
void hikr_hikrButton_FontSize_Property::ctor_3(::g::hikr::Button* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public hikr_hikrButton_FontSize_Property New(hikr.Button obj, Uno.UX.Selector name) [static] :67
hikr_hikrButton_FontSize_Property* hikr_hikrButton_FontSize_Property::New1(::g::hikr::Button* obj, ::g::Uno::UX::Selector name)
{
    hikr_hikrButton_FontSize_Property* obj1 = (hikr_hikrButton_FontSize_Property*)uNew(hikr_hikrButton_FontSize_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
