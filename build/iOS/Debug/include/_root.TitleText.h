// This file was generated based on /Users/jordans/code/research/fuse/hikr/.uno/ux11/TitleText.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Triggers.IValue-1.h>
#include <hikr.Text.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{struct TitleText;}

namespace g{

// public partial sealed class TitleText :2
// {
::g::Fuse::Controls::TextControl_type* TitleText_typeof();
void TitleText__ctor_9_fn(TitleText* __this);
void TitleText__InitializeUX2_fn(TitleText* __this);
void TitleText__New5_fn(TitleText** __retval);

struct TitleText : ::g::hikr::Text
{
    void ctor_9();
    void InitializeUX2();
    static TitleText* New5();
};
// }

} // ::g
