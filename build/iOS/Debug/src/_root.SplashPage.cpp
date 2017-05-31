// This file was generated based on /Users/jordans/code/research/fuse/hikr/.uno/ux11/SplashPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.hikr_bundle.h>
#include <_root.SplashPage.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.Video.h>
#include <Fuse.Effects.Blur.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Visual.h>
#include <hikr.Button.h>
#include <hikr.Text.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
static uString* STRINGS[7];
static uType* TYPES[5];

namespace g{

// public partial sealed class SplashPage :2
// {
// static SplashPage() :11
static void SplashPage__cctor_4_fn(uType* __type)
{
    SplashPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb3"*/]);
}

static void SplashPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb3");
    ::STRINGS[2] = uString::Const("goToHomePage");
    ::STRINGS[3] = uString::Const("Pages/Splash/SplashPage.ux");
    ::STRINGS[4] = uString::Const("hikr");
    ::STRINGS[5] = uString::Const("get out there");
    ::STRINGS[6] = uString::Const("Get Started");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15));
    type->SetFields(106,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::SplashPage, __g_nametable1), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::SplashPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::SplashPage, temp_eb3), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::SplashPage::__g_static_nametable1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* SplashPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 110;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(SplashPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("SplashPage", options);
    type->fp_build_ = SplashPage_build;
    type->fp_cctor_ = SplashPage__cctor_4_fn;
    type->interface15.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
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
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
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

// public SplashPage(Fuse.Navigation.Router router) :15
void SplashPage__ctor_8_fn(SplashPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :21
void SplashPage__InitializeUX_fn(SplashPage* __this)
{
    __this->InitializeUX();
}

// public SplashPage New(Fuse.Navigation.Router router) :15
void SplashPage__New5_fn(::g::Fuse::Navigation::Router* router1, SplashPage** __retval)
{
    *__retval = SplashPage::New5(router1);
}

uSStrong<uArray*> SplashPage::__g_static_nametable1_;

// public SplashPage(Fuse.Navigation.Router router) [instance] :15
void SplashPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :21
void SplashPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, SplashPage::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"goToHomePage"*/]);
    ::g::Fuse::Reactive::JavaScript* temp1 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Video* temp2 = ::g::Fuse::Controls::Video::New4();
    ::g::Fuse::Effects::Blur* temp3 = ::g::Fuse::Effects::Blur::New2();
    ::g::Fuse::Controls::DockPanel* temp4 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp5 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp6 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::hikr::Text* temp7 = ::g::hikr::Text::New4();
    ::g::hikr::Text* temp8 = ::g::hikr::Text::New4();
    ::g::hikr::Button* temp9 = ::g::hikr::Button::New4();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp, __g_nametable1);
    ClipToBounds(true);
    temp1->LineNumber(4);
    temp1->FileName(::STRINGS[3/*"Pages/Splas...*/]);
    temp1->File(::g::Uno::UX::BundleFileSource::New1(::g::hikr_bundle::SplashPage48369af7()));
    temp2->IsLooping(true);
    temp2->AutoPlay(true);
    temp2->StretchMode(6);
    temp2->Opacity(0.5f);
    temp2->Layer(1);
    temp2->File(::g::Uno::UX::BundleFileSource::New1(::g::hikr_bundle::natureec5a5c89()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp3->Radius(4.75f);
    temp4->ClipToBounds(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp5->RowCount(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp6->Margin(::g::Uno::Float4__New2(75.0f, 75.0f, 75.0f, 75.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp7->Value(::STRINGS[4/*"hikr"*/]);
    temp7->FontSize(70.0f);
    temp7->Alignment(2);
    temp8->Value(::STRINGS[5/*"get out there"*/]);
    temp8->Alignment(2);
    temp8->Opacity(0.5f);
    temp9->Alignment(8);
    temp9->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 0.0f));
    temp9->Text(::STRINGS[6/*"Get Started"*/]);
    temp9->FontSize(18.0f);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp9, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
}

// public SplashPage New(Fuse.Navigation.Router router) [static] :15
SplashPage* SplashPage::New5(::g::Fuse::Navigation::Router* router1)
{
    SplashPage* obj1 = (SplashPage*)uNew(SplashPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
