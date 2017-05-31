// This file was generated based on /Users/jordans/code/research/fuse/hikr/.uno/ux11/hikr.TextBox.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.TextBox.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace hikr{struct TextBox;}}

namespace g{
namespace hikr{

// public partial sealed class TextBox :4
// {
::g::Fuse::Controls::TextInputControl_type* TextBox_typeof();
void TextBox__ctor_9_fn(TextBox* __this);
void TextBox__InitializeUX1_fn(TextBox* __this);
void TextBox__New5_fn(TextBox** __retval);

struct TextBox : ::g::Fuse::Controls::TextBox
{
    void ctor_9();
    void InitializeUX1();
    static TextBox* New5();
};
// }

}} // ::g::hikr
