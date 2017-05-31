// This file was generated based on /Users/jordans/code/research/fuse/hikr/.uno/ux11/hikr.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.hikr_FuseReacti-a0d5197a.h>
#include <Fuse.Reactive.Each.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class hikr_FuseReactiveEach_Items_Property :47
// {
static void hikr_FuseReactiveEach_Items_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Reactive::Each_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Reactive.Each*/], offsetof(::g::hikr_FuseReactiveEach_Items_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* hikr_FuseReactiveEach_Items_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(hikr_FuseReactiveEach_Items_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("hikr_FuseReactiveEach_Items_Property", options);
    type->fp_build_ = hikr_FuseReactiveEach_Items_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))hikr_FuseReactiveEach_Items_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))hikr_FuseReactiveEach_Items_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))hikr_FuseReactiveEach_Items_Property__Set1_fn;
    return type;
}

// public hikr_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, Uno.UX.Selector name) :50
void hikr_FuseReactiveEach_Items_Property__ctor_3_fn(hikr_FuseReactiveEach_Items_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed object Get(Uno.UX.PropertyObject obj) :52
void hikr_FuseReactiveEach_Items_Property__Get1_fn(hikr_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Reactive::Each*>(obj, ::TYPES[0/*Fuse.Reactive.Each*/]))->Items(), void();
}

// public hikr_FuseReactiveEach_Items_Property New(Fuse.Reactive.Each obj, Uno.UX.Selector name) :50
void hikr_FuseReactiveEach_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, hikr_FuseReactiveEach_Items_Property** __retval)
{
    *__retval = hikr_FuseReactiveEach_Items_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :51
void hikr_FuseReactiveEach_Items_Property__get_Object_fn(hikr_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :53
void hikr_FuseReactiveEach_Items_Property__Set1_fn(hikr_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Reactive::Each*>(obj, ::TYPES[0/*Fuse.Reactive.Each*/]))->Items(v);
}

// public hikr_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, Uno.UX.Selector name) [instance] :50
void hikr_FuseReactiveEach_Items_Property::ctor_3(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public hikr_FuseReactiveEach_Items_Property New(Fuse.Reactive.Each obj, Uno.UX.Selector name) [static] :50
hikr_FuseReactiveEach_Items_Property* hikr_FuseReactiveEach_Items_Property::New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name)
{
    hikr_FuseReactiveEach_Items_Property* obj1 = (hikr_FuseReactiveEach_Items_Property*)uNew(hikr_FuseReactiveEach_Items_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
