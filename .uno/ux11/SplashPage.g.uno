[Uno.Compiler.UxGenerated]
public partial class SplashPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal global::Fuse.Reactive.EventBinding temp_eb3;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb3"
    };
    static SplashPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SplashPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Data("goToHomePage");
        var temp1 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new global::Fuse.Controls.Video();
        var temp3 = new global::Fuse.Effects.Blur();
        var temp4 = new global::Fuse.Controls.DockPanel();
        var temp5 = new global::Fuse.Controls.Grid();
        var temp6 = new global::Fuse.Controls.StackPanel();
        var temp7 = new global::hikr.Text();
        var temp8 = new global::hikr.Text();
        var temp9 = new global::hikr.Button();
        temp_eb3 = new global::Fuse.Reactive.EventBinding(temp, __g_nametable);
        this.ClipToBounds = true;
        temp1.LineNumber = 4;
        temp1.FileName = "Pages/Splash/SplashPage.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Pages/Splash/SplashPage.js"));
        temp2.IsLooping = true;
        temp2.AutoPlay = true;
        temp2.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        temp2.Opacity = 0.5f;
        temp2.Layer = Fuse.Layer.Background;
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/nature.mp4"));
        temp2.Children.Add(temp3);
        temp3.Radius = 4.75f;
        temp4.ClipToBounds = true;
        temp4.Children.Add(temp5);
        temp5.RowCount = 2;
        temp5.Children.Add(temp6);
        temp5.Children.Add(temp9);
        temp6.Margin = float4(75f, 75f, 75f, 75f);
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp8);
        temp7.Value = "hikr";
        temp7.FontSize = 70f;
        temp7.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp8.Value = "get out there";
        temp8.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp8.Opacity = 0.5f;
        temp9.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp9.Margin = float4(50f, 0f, 50f, 0f);
        temp9.Text = "Get Started";
        temp9.FontSize = 18f;
        global::Fuse.Gestures.Clicked.AddHandler(temp9, temp_eb3.OnEvent);
        temp9.Bindings.Add(temp_eb3);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb3);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
        this.Children.Add(temp4);
    }
}
