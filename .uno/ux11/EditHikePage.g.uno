[Uno.Compiler.UxGenerated]
public partial class EditHikePage: hikr.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    internal global::Fuse.Reactive.EventBinding temp_eb1;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb0",
        "temp_eb1"
    };
    static EditHikePage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public EditHikePage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp4 = new global::Fuse.Reactive.Data("cancel");
        var temp5 = new global::Fuse.Reactive.Data("save");
        var temp = new global::hikr.TextBox();
        temp_Value_inst = new hikr_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp6 = new global::Fuse.Reactive.Data("name");
        var temp1 = new global::hikr.TextBox();
        temp1_Value_inst = new hikr_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp7 = new global::Fuse.Reactive.Data("distance");
        var temp2 = new global::hikr.TextBox();
        temp2_Value_inst = new hikr_FuseControlsTextInputControl_Value_Property(temp2, __selector0);
        var temp8 = new global::Fuse.Reactive.Data("rating");
        var temp3 = new global::hikr.TextView();
        temp3_Value_inst = new hikr_FuseControlsTextInputControl_Value_Property(temp3, __selector0);
        var temp9 = new global::Fuse.Reactive.Data("comments");
        var temp10 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp11 = new global::Fuse.Controls.DockPanel();
        var temp12 = new global::Fuse.Controls.Grid();
        var temp13 = new global::hikr.Button();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp4, __g_nametable);
        var temp14 = new global::hikr.Button();
        temp_eb1 = new global::Fuse.Reactive.EventBinding(temp5, __g_nametable);
        var temp15 = new global::Fuse.Controls.ScrollView();
        var temp16 = new global::Fuse.Controls.StackPanel();
        var temp17 = new global::Fuse.Controls.StackPanel();
        var temp18 = new global::TitleText();
        var temp19 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp20 = new global::Fuse.Controls.StackPanel();
        var temp21 = new global::TitleText();
        var temp22 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp7, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp23 = new global::Fuse.Controls.StackPanel();
        var temp24 = new global::TitleText();
        var temp25 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp8, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp26 = new global::Fuse.Controls.StackPanel();
        var temp27 = new global::TitleText();
        var temp28 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp9, __g_nametable, Fuse.Reactive.BindingMode.Default);
        temp10.LineNumber = 3;
        temp10.FileName = "Pages/EditHike/EditHikePage.ux";
        temp10.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Pages/EditHike/EditHikePage.js"));
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp15);
        temp12.ColumnCount = 2;
        global::Fuse.Controls.DockPanel.SetDock(temp12, Fuse.Layouts.Dock.Bottom);
        temp12.Children.Add(temp13);
        temp12.Children.Add(temp14);
        temp13.Text = "Cancel";
        global::Fuse.Gestures.Clicked.AddHandler(temp13, temp_eb0.OnEvent);
        temp13.Bindings.Add(temp_eb0);
        temp14.Text = "Save";
        global::Fuse.Gestures.Clicked.AddHandler(temp14, temp_eb1.OnEvent);
        temp14.Bindings.Add(temp_eb1);
        temp15.Children.Add(temp16);
        temp16.ItemSpacing = 10f;
        temp16.Padding = float4(10f, 10f, 10f, 10f);
        temp16.Children.Add(temp17);
        temp16.Children.Add(temp20);
        temp16.Children.Add(temp23);
        temp16.Children.Add(temp26);
        temp17.Children.Add(temp18);
        temp17.Children.Add(temp);
        temp18.Value = "Name:";
        temp.Bindings.Add(temp19);
        temp20.Children.Add(temp21);
        temp20.Children.Add(temp1);
        temp21.Value = "Distance (km):";
        temp1.InputHint = Fuse.Controls.TextInputHint.Decimal;
        temp1.Bindings.Add(temp22);
        temp23.Children.Add(temp24);
        temp23.Children.Add(temp2);
        temp24.Value = "Rating:";
        temp2.InputHint = Fuse.Controls.TextInputHint.Integer;
        temp2.Bindings.Add(temp25);
        temp26.Children.Add(temp27);
        temp26.Children.Add(temp3);
        temp27.Value = "Comments:";
        temp3.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp3.Bindings.Add(temp28);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb0);
        __g_nametable.Objects.Add(temp_eb1);
        this.Children.Add(temp10);
        this.Children.Add(temp11);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
