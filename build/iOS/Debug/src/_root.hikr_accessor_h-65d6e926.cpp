// This file was generated based on /Users/jordans/code/research/fuse/hikr/.uno/ux11/hikr.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.hikr_accessor_h-65d6e926.h>
#include <hikr.Button.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class hikr_accessor_hikr_Button_FontSize :11
// {
// static hikr_accessor_hikr_Button_FontSize() :11
static void hikr_accessor_hikr_Button_FontSize__cctor__fn(uType* __type)
{
    hikr_accessor_hikr_Button_FontSize::Singleton_ = hikr_accessor_hikr_Button_FontSize::New1();
    hikr_accessor_hikr_Button_FontSize::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"FontSize"*/]);
}

static void hikr_accessor_hikr_Button_FontSize_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FontSize");
    ::TYPES[0] = ::g::hikr::Button_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::hikr_accessor_hikr_Button_FontSize::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::hikr_accessor_hikr_Button_FontSize::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* hikr_accessor_hikr_Button_FontSize_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(hikr_accessor_hikr_Button_FontSize);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("hikr_accessor_hikr_Button_FontSize", options);
    type->fp_build_ = hikr_accessor_hikr_Button_FontSize_build;
    type->fp_ctor_ = (void*)hikr_accessor_hikr_Button_FontSize__New1_fn;
    type->fp_cctor_ = hikr_accessor_hikr_Button_FontSize__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))hikr_accessor_hikr_Button_FontSize__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))hikr_accessor_hikr_Button_FontSize__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))hikr_accessor_hikr_Button_FontSize__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))hikr_accessor_hikr_Button_FontSize__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))hikr_accessor_hikr_Button_FontSize__get_SupportsOriginSetter_fn;
    return type;
}

// public generated hikr_accessor_hikr_Button_FontSize() :11
void hikr_accessor_hikr_Button_FontSize__ctor_1_fn(hikr_accessor_hikr_Button_FontSize* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :17
void hikr_accessor_hikr_Button_FontSize__GetAsObject_fn(hikr_accessor_hikr_Button_FontSize* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Float_typeof(), uPtr(uCast< ::g::hikr::Button*>(obj, ::TYPES[0/*hikr.Button*/]))->FontSize()), void();
}

// public override sealed Uno.UX.Selector get_Name() :14
void hikr_accessor_hikr_Button_FontSize__get_Name_fn(hikr_accessor_hikr_Button_FontSize* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = hikr_accessor_hikr_Button_FontSize::_name(), void();
}

// public generated hikr_accessor_hikr_Button_FontSize New() :11
void hikr_accessor_hikr_Button_FontSize__New1_fn(hikr_accessor_hikr_Button_FontSize** __retval)
{
    *__retval = hikr_accessor_hikr_Button_FontSize::New1();
}

// public override sealed Uno.Type get_PropertyType() :16
void hikr_accessor_hikr_Button_FontSize__get_PropertyType_fn(hikr_accessor_hikr_Button_FontSize* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :18
void hikr_accessor_hikr_Button_FontSize__SetAsObject_fn(hikr_accessor_hikr_Button_FontSize* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::hikr::Button*>(obj, ::TYPES[0/*hikr.Button*/]))->SetFontSize(uUnbox<float>(::g::Uno::Float_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :19
void hikr_accessor_hikr_Button_FontSize__get_SupportsOriginSetter_fn(hikr_accessor_hikr_Button_FontSize* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector hikr_accessor_hikr_Button_FontSize::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> hikr_accessor_hikr_Button_FontSize::Singleton_;

// public generated hikr_accessor_hikr_Button_FontSize() [instance] :11
void hikr_accessor_hikr_Button_FontSize::ctor_1()
{
    ctor_();
}

// public generated hikr_accessor_hikr_Button_FontSize New() [static] :11
hikr_accessor_hikr_Button_FontSize* hikr_accessor_hikr_Button_FontSize::New1()
{
    hikr_accessor_hikr_Button_FontSize* obj1 = (hikr_accessor_hikr_Button_FontSize*)uNew(hikr_accessor_hikr_Button_FontSize_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
