// This file was generated based on /Users/jordans/code/research/fuse/hikr/.uno/ux11/hikr.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct hikr_accessor_hikr_Button_FontSize;}

namespace g{

// internal sealed class hikr_accessor_hikr_Button_FontSize :11
// {
::g::Uno::UX::PropertyAccessor_type* hikr_accessor_hikr_Button_FontSize_typeof();
void hikr_accessor_hikr_Button_FontSize__ctor_1_fn(hikr_accessor_hikr_Button_FontSize* __this);
void hikr_accessor_hikr_Button_FontSize__GetAsObject_fn(hikr_accessor_hikr_Button_FontSize* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void hikr_accessor_hikr_Button_FontSize__get_Name_fn(hikr_accessor_hikr_Button_FontSize* __this, ::g::Uno::UX::Selector* __retval);
void hikr_accessor_hikr_Button_FontSize__New1_fn(hikr_accessor_hikr_Button_FontSize** __retval);
void hikr_accessor_hikr_Button_FontSize__get_PropertyType_fn(hikr_accessor_hikr_Button_FontSize* __this, uType** __retval);
void hikr_accessor_hikr_Button_FontSize__SetAsObject_fn(hikr_accessor_hikr_Button_FontSize* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void hikr_accessor_hikr_Button_FontSize__get_SupportsOriginSetter_fn(hikr_accessor_hikr_Button_FontSize* __this, bool* __retval);

struct hikr_accessor_hikr_Button_FontSize : ::g::Uno::UX::PropertyAccessor
{
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return hikr_accessor_hikr_Button_FontSize_typeof()->Init(), _name_; }
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return hikr_accessor_hikr_Button_FontSize_typeof()->Init(), Singleton_; }

    void ctor_1();
    static hikr_accessor_hikr_Button_FontSize* New1();
};
// }

} // ::g
