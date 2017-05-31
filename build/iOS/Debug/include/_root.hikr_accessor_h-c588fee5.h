// This file was generated based on /Users/jordans/code/research/fuse/hikr/.uno/ux11/hikr.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct hikr_accessor_hikr_Button_Text;}

namespace g{

// internal sealed class hikr_accessor_hikr_Button_Text :1
// {
::g::Uno::UX::PropertyAccessor_type* hikr_accessor_hikr_Button_Text_typeof();
void hikr_accessor_hikr_Button_Text__ctor_1_fn(hikr_accessor_hikr_Button_Text* __this);
void hikr_accessor_hikr_Button_Text__GetAsObject_fn(hikr_accessor_hikr_Button_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void hikr_accessor_hikr_Button_Text__get_Name_fn(hikr_accessor_hikr_Button_Text* __this, ::g::Uno::UX::Selector* __retval);
void hikr_accessor_hikr_Button_Text__New1_fn(hikr_accessor_hikr_Button_Text** __retval);
void hikr_accessor_hikr_Button_Text__get_PropertyType_fn(hikr_accessor_hikr_Button_Text* __this, uType** __retval);
void hikr_accessor_hikr_Button_Text__SetAsObject_fn(hikr_accessor_hikr_Button_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void hikr_accessor_hikr_Button_Text__get_SupportsOriginSetter_fn(hikr_accessor_hikr_Button_Text* __this, bool* __retval);

struct hikr_accessor_hikr_Button_Text : ::g::Uno::UX::PropertyAccessor
{
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return hikr_accessor_hikr_Button_Text_typeof()->Init(), _name_; }
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return hikr_accessor_hikr_Button_Text_typeof()->Init(), Singleton_; }

    void ctor_1();
    static hikr_accessor_hikr_Button_Text* New1();
};
// }

} // ::g
