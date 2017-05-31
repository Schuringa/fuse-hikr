// This file was generated based on /Users/jordans/code/research/fuse/hikr/.uno/ux11/hikr.TextBox.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Elements.Element.h>
#include <hikr.TextBox.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>

namespace g{
namespace hikr{

// public partial sealed class TextBox :4
// {
// static TextBox() :6
static void TextBox__cctor_4_fn(uType* __type)
{
}

static void TextBox_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInputControl_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInputControl_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInputControl_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInputControl_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface7),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInputControl_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInputControl_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface14),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInputControl_type, interface15));
    type->SetFields(99);
}

::g::Fuse::Controls::TextInputControl_type* TextBox_typeof()
{
    static uSStrong< ::g::Fuse::Controls::TextInputControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::TextBox_typeof();
    options.FieldCount = 99;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(TextBox);
    options.TypeSize = sizeof(::g::Fuse::Controls::TextInputControl_type);
    type = (::g::Fuse::Controls::TextInputControl_type*)uClassType::New("hikr.TextBox", options);
    type->fp_build_ = TextBox_build;
    type->fp_ctor_ = (void*)TextBox__New5_fn;
    type->fp_cctor_ = TextBox__cctor_4_fn;
    type->interface15.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::TextInputControl__get_Value_fn;
    type->interface15.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::TextInputControl__set_Value_fn;
    type->interface15.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextInputControl__add_ValueChanged_fn;
    type->interface15.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextInputControl__remove_ValueChanged_fn;
    type->interface10.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface12.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface11.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface14.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface13.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface13.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface13.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface8.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface8.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface8.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::TextInputControl__OnPropertyChanged2_fn;
    type->interface8.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public TextBox() :10
void TextBox__ctor_9_fn(TextBox* __this)
{
    __this->ctor_9();
}

// private void InitializeUX() :14
void TextBox__InitializeUX1_fn(TextBox* __this)
{
    __this->InitializeUX1();
}

// public TextBox New() :10
void TextBox__New5_fn(TextBox** __retval)
{
    *__retval = TextBox::New5();
}

// public TextBox() [instance] :10
void TextBox::ctor_9()
{
    ctor_8();
    InitializeUX1();
}

// private void InitializeUX() [instance] :14
void TextBox::InitializeUX1()
{
    TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 0.0f, 10.0f));
}

// public TextBox New() [static] :10
TextBox* TextBox::New5()
{
    TextBox* obj1 = (TextBox*)uNew(TextBox_typeof());
    obj1->ctor_9();
    return obj1;
}
// }

}} // ::g::hikr
