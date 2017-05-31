[Uno.Compiler.UxGenerated]
public partial class EditHikePage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    global::Uno.UX.Property<string> temp4_Value_inst;
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
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new hikr_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp5 = new global::Fuse.Reactive.Data("name");
        var temp1 = new global::Fuse.Controls.TextBox();
        temp1_Value_inst = new hikr_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp6 = new global::Fuse.Reactive.Data("name");
        var temp2 = new global::Fuse.Controls.TextBox();
        temp2_Value_inst = new hikr_FuseControlsTextInputControl_Value_Property(temp2, __selector0);
        var temp7 = new global::Fuse.Reactive.Data("distance");
        var temp3 = new global::Fuse.Controls.TextBox();
        temp3_Value_inst = new hikr_FuseControlsTextInputControl_Value_Property(temp3, __selector0);
        var temp8 = new global::Fuse.Reactive.Data("rating");
        var temp4 = new global::Fuse.Controls.TextView();
        temp4_Value_inst = new hikr_FuseControlsTextInputControl_Value_Property(temp4, __selector0);
        var temp9 = new global::Fuse.Reactive.Data("comments");
        var temp10 = new global::Fuse.Reactive.Data("save");
        var temp11 = new global::Fuse.Reactive.Data("cancel");
        var temp12 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp13 = new global::Fuse.Controls.ScrollView();
        var temp14 = new global::Fuse.Controls.StackPanel();
        var temp15 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp16 = new global::Fuse.Controls.Text();
        var temp17 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp18 = new global::Fuse.Controls.Text();
        var temp19 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp7, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp20 = new global::Fuse.Controls.Text();
        var temp21 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp8, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp22 = new global::Fuse.Controls.Text();
        var temp23 = new global::Fuse.Reactive.DataBinding(temp4_Value_inst, temp9, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp24 = new global::Fuse.Controls.Button();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp10, __g_nametable);
        var temp25 = new global::Fuse.Controls.Button();
        temp_eb1 = new global::Fuse.Reactive.EventBinding(temp11, __g_nametable);
        temp12.LineNumber = 3;
        temp12.FileName = "Pages/EditHike/EditHikePage.ux";
        temp12.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Pages/EditHike/EditHikePage.js"));
        temp13.Children.Add(temp14);
        temp14.Children.Add(temp);
        temp14.Children.Add(temp16);
        temp14.Children.Add(temp1);
        temp14.Children.Add(temp18);
        temp14.Children.Add(temp2);
        temp14.Children.Add(temp20);
        temp14.Children.Add(temp3);
        temp14.Children.Add(temp22);
        temp14.Children.Add(temp4);
        temp14.Children.Add(temp24);
        temp14.Children.Add(temp25);
        temp.Bindings.Add(temp15);
        temp16.Value = "Name:";
        temp1.Bindings.Add(temp17);
        temp18.Value = "Distance (km):";
        temp2.InputHint = Fuse.Controls.TextInputHint.Decimal;
        temp2.Bindings.Add(temp19);
        temp20.Value = "Rating:";
        temp3.InputHint = Fuse.Controls.TextInputHint.Integer;
        temp3.Bindings.Add(temp21);
        temp22.Value = "Comments:";
        temp4.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp4.Bindings.Add(temp23);
        temp24.Text = "Save";
        global::Fuse.Gestures.Clicked.AddHandler(temp24, temp_eb0.OnEvent);
        temp24.Bindings.Add(temp_eb0);
        temp25.Text = "Cancel";
        global::Fuse.Gestures.Clicked.AddHandler(temp25, temp_eb1.OnEvent);
        temp25.Bindings.Add(temp_eb1);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb0);
        __g_nametable.Objects.Add(temp_eb1);
        this.Children.Add(temp12);
        this.Children.Add(temp13);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
