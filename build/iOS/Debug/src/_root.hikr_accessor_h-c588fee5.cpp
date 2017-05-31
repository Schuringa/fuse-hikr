// This file was generated based on /Users/jordans/code/research/fuse/hikr/.uno/ux11/hikr.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.hikr_accessor_h-c588fee5.h>
#include <hikr.Button.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class hikr_accessor_hikr_Button_Text :1
// {
// static hikr_accessor_hikr_Button_Text() :1
static void hikr_accessor_hikr_Button_Text__cctor__fn(uType* __type)
{
    hikr_accessor_hikr_Button_Text::Singleton_ = hikr_accessor_hikr_Button_Text::New1();
    hikr_accessor_hikr_Button_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Text"*/]);
}

static void hikr_accessor_hikr_Button_Text_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::TYPES[0] = ::g::hikr::Button_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::hikr_accessor_hikr_Button_Text::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::hikr_accessor_hikr_Button_Text::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* hikr_accessor_hikr_Button_Text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(hikr_accessor_hikr_Button_Text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("hikr_accessor_hikr_Button_Text", options);
    type->fp_build_ = hikr_accessor_hikr_Button_Text_build;
    type->fp_ctor_ = (void*)hikr_accessor_hikr_Button_Text__New1_fn;
    type->fp_cctor_ = hikr_accessor_hikr_Button_Text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))hikr_accessor_hikr_Button_Text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))hikr_accessor_hikr_Button_Text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))hikr_accessor_hikr_Button_Text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))hikr_accessor_hikr_Button_Text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))hikr_accessor_hikr_Button_Text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated hikr_accessor_hikr_Button_Text() :1
void hikr_accessor_hikr_Button_Text__ctor_1_fn(hikr_accessor_hikr_Button_Text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :7
void hikr_accessor_hikr_Button_Text__GetAsObject_fn(hikr_accessor_hikr_Button_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::hikr::Button*>(obj, ::TYPES[0/*hikr.Button*/]))->Text(), void();
}

// public override sealed Uno.UX.Selector get_Name() :4
void hikr_accessor_hikr_Button_Text__get_Name_fn(hikr_accessor_hikr_Button_Text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = hikr_accessor_hikr_Button_Text::_name(), void();
}

// public generated hikr_accessor_hikr_Button_Text New() :1
void hikr_accessor_hikr_Button_Text__New1_fn(hikr_accessor_hikr_Button_Text** __retval)
{
    *__retval = hikr_accessor_hikr_Button_Text::New1();
}

// public override sealed Uno.Type get_PropertyType() :6
void hikr_accessor_hikr_Button_Text__get_PropertyType_fn(hikr_accessor_hikr_Button_Text* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :8
void hikr_accessor_hikr_Button_Text__SetAsObject_fn(hikr_accessor_hikr_Button_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::hikr::Button*>(obj, ::TYPES[0/*hikr.Button*/]))->SetText(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :9
void hikr_accessor_hikr_Button_Text__get_SupportsOriginSetter_fn(hikr_accessor_hikr_Button_Text* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector hikr_accessor_hikr_Button_Text::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> hikr_accessor_hikr_Button_Text::Singleton_;

// public generated hikr_accessor_hikr_Button_Text() [instance] :1
void hikr_accessor_hikr_Button_Text::ctor_1()
{
    ctor_();
}

// public generated hikr_accessor_hikr_Button_Text New() [static] :1
hikr_accessor_hikr_Button_Text* hikr_accessor_hikr_Button_Text::New1()
{
    hikr_accessor_hikr_Button_Text* obj1 = (hikr_accessor_hikr_Button_Text*)uNew(hikr_accessor_hikr_Button_Text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
