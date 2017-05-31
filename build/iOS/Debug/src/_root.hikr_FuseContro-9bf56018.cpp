// This file was generated based on /Users/jordans/code/research/fuse/hikr/.uno/ux11/hikr.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.hikr_FuseContro-9bf56018.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class hikr_FuseControlsTextControl_FontSize_Property :30
// {
static void hikr_FuseControlsTextControl_FontSize_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.TextControl*/], offsetof(::g::hikr_FuseControlsTextControl_FontSize_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* hikr_FuseControlsTextControl_FontSize_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(hikr_FuseControlsTextControl_FontSize_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("hikr_FuseControlsTextControl_FontSize_Property", options);
    type->fp_build_ = hikr_FuseControlsTextControl_FontSize_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))hikr_FuseControlsTextControl_FontSize_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))hikr_FuseControlsTextControl_FontSize_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))hikr_FuseControlsTextControl_FontSize_Property__Set1_fn;
    return type;
}

// public hikr_FuseControlsTextControl_FontSize_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :33
void hikr_FuseControlsTextControl_FontSize_Property__ctor_3_fn(hikr_FuseControlsTextControl_FontSize_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :35
void hikr_FuseControlsTextControl_FontSize_Property__Get1_fn(hikr_FuseControlsTextControl_FontSize_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[0/*Fuse.Controls.TextControl*/]))->FontSize(), void();
}

// public hikr_FuseControlsTextControl_FontSize_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :33
void hikr_FuseControlsTextControl_FontSize_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, hikr_FuseControlsTextControl_FontSize_Property** __retval)
{
    *__retval = hikr_FuseControlsTextControl_FontSize_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :34
void hikr_FuseControlsTextControl_FontSize_Property__get_Object_fn(hikr_FuseControlsTextControl_FontSize_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :36
void hikr_FuseControlsTextControl_FontSize_Property__Set1_fn(hikr_FuseControlsTextControl_FontSize_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[0/*Fuse.Controls.TextControl*/]))->FontSize(v_);
}

// public hikr_FuseControlsTextControl_FontSize_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :33
void hikr_FuseControlsTextControl_FontSize_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public hikr_FuseControlsTextControl_FontSize_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :33
hikr_FuseControlsTextControl_FontSize_Property* hikr_FuseControlsTextControl_FontSize_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    hikr_FuseControlsTextControl_FontSize_Property* obj1 = (hikr_FuseControlsTextControl_FontSize_Property*)uNew(hikr_FuseControlsTextControl_FontSize_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
