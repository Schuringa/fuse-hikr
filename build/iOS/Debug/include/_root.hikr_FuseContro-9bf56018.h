// This file was generated based on /Users/jordans/code/research/fuse/hikr/.uno/ux11/hikr.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct hikr_FuseControlsTextControl_FontSize_Property;}

namespace g{

// internal sealed class hikr_FuseControlsTextControl_FontSize_Property :30
// {
::g::Uno::UX::Property1_type* hikr_FuseControlsTextControl_FontSize_Property_typeof();
void hikr_FuseControlsTextControl_FontSize_Property__ctor_3_fn(hikr_FuseControlsTextControl_FontSize_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name);
void hikr_FuseControlsTextControl_FontSize_Property__Get1_fn(hikr_FuseControlsTextControl_FontSize_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void hikr_FuseControlsTextControl_FontSize_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, hikr_FuseControlsTextControl_FontSize_Property** __retval);
void hikr_FuseControlsTextControl_FontSize_Property__get_Object_fn(hikr_FuseControlsTextControl_FontSize_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void hikr_FuseControlsTextControl_FontSize_Property__Set1_fn(hikr_FuseControlsTextControl_FontSize_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct hikr_FuseControlsTextControl_FontSize_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
    static hikr_FuseControlsTextControl_FontSize_Property* New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
