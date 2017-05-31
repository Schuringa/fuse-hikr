// This file was generated based on /Users/jordans/code/research/fuse/hikr/.uno/ux11/hikr.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct hikr_FuseReactiveEach_Items_Property;}

namespace g{

// internal sealed class hikr_FuseReactiveEach_Items_Property :47
// {
::g::Uno::UX::Property1_type* hikr_FuseReactiveEach_Items_Property_typeof();
void hikr_FuseReactiveEach_Items_Property__ctor_3_fn(hikr_FuseReactiveEach_Items_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name);
void hikr_FuseReactiveEach_Items_Property__Get1_fn(hikr_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void hikr_FuseReactiveEach_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, hikr_FuseReactiveEach_Items_Property** __retval);
void hikr_FuseReactiveEach_Items_Property__get_Object_fn(hikr_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void hikr_FuseReactiveEach_Items_Property__Set1_fn(hikr_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);

struct hikr_FuseReactiveEach_Items_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Reactive::Each*> _obj;

    void ctor_3(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
    static hikr_FuseReactiveEach_Items_Property* New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
