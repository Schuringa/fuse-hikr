namespace hikr
{
    [Uno.Compiler.UxGenerated]
    public partial class TextView: Fuse.Controls.TextView
    {
        global::Uno.UX.Property<string> this_Value_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static TextView()
        {
        }
        [global::Uno.UX.UXConstructor]
        public TextView()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            this_Value_inst = new hikr_FuseControlsTextInputControl_Value_Property(this, __selector0);
            var temp = new global::Fuse.Reactive.Data("comments");
            __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
            var temp1 = new global::Fuse.Controls.Rectangle();
            var temp2 = new global::Fuse.Reactive.DataBinding(this_Value_inst, temp, __g_nametable, Fuse.Reactive.BindingMode.Default);
            this.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            this.TextColor = float4(1f, 1f, 1f, 1f);
            this.CaretColor = float4(1f, 1f, 1f, 1f);
            this.Padding = float4(5f, 5f, 5f, 5f);
            temp1.CornerRadius = float4(4f, 4f, 4f, 4f);
            temp1.Color = float4(1f, 1f, 1f, 0.1333333f);
            temp1.Layer = Fuse.Layer.Background;
            __g_nametable.This = this;
            this.Children.Add(temp1);
            this.Bindings.Add(temp2);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
}
