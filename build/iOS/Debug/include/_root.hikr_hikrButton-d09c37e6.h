// This file was generated based on /Users/jordans/code/research/fuse/hikr/.uno/ux11/hikr.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace hikr{struct Button;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct hikr_hikrButton_Text_Property;}

namespace g{

// internal sealed class hikr_hikrButton_Text_Property :55
// {
::g::Uno::UX::Property1_type* hikr_hikrButton_Text_Property_typeof();
void hikr_hikrButton_Text_Property__ctor_3_fn(hikr_hikrButton_Text_Property* __this, ::g::hikr::Button* obj, ::g::Uno::UX::Selector* name);
void hikr_hikrButton_Text_Property__Get1_fn(hikr_hikrButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void hikr_hikrButton_Text_Property__New1_fn(::g::hikr::Button* obj, ::g::Uno::UX::Selector* name, hikr_hikrButton_Text_Property** __retval);
void hikr_hikrButton_Text_Property__get_Object_fn(hikr_hikrButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void hikr_hikrButton_Text_Property__Set1_fn(hikr_hikrButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void hikr_hikrButton_Text_Property__get_SupportsOriginSetter_fn(hikr_hikrButton_Text_Property* __this, bool* __retval);

struct hikr_hikrButton_Text_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::hikr::Button*> _obj;

    void ctor_3(::g::hikr::Button* obj, ::g::Uno::UX::Selector name);
    static hikr_hikrButton_Text_Property* New1(::g::hikr::Button* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
