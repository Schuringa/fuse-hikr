sealed class hikr_accessor_hikr_Button_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new hikr_accessor_hikr_Button_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((hikr.Button)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((hikr.Button)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class hikr_accessor_hikr_Button_FontSize: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new hikr_accessor_hikr_Button_FontSize();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "FontSize";
    public override global::Uno.Type PropertyType { get { return typeof(float); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((hikr.Button)obj).FontSize; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((hikr.Button)obj).SetFontSize((float)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class hikr_FuseControlsTextControl_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public hikr_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextControl)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextControl)obj).SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class hikr_FuseControlsTextControl_FontSize_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public hikr_FuseControlsTextControl_FontSize_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextControl)obj).FontSize; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextControl)obj).FontSize = v; }
}
sealed class hikr_FuseControlsTextInputControl_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextInputControl _obj;
    public hikr_FuseControlsTextInputControl_Value_Property(Fuse.Controls.TextInputControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextInputControl)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextInputControl)obj).SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class hikr_FuseReactiveEach_Items_Property: Uno.UX.Property<object>
{
    [Uno.WeakReference] readonly Fuse.Reactive.Each _obj;
    public hikr_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override object Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Reactive.Each)obj).Items; }
    public override void Set(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Reactive.Each)obj).Items = v; }
}
sealed class hikr_hikrButton_Text_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly hikr.Button _obj;
    public hikr_hikrButton_Text_Property(hikr.Button obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((hikr.Button)obj).Text; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((hikr.Button)obj).SetText(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class hikr_hikrButton_FontSize_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly hikr.Button _obj;
    public hikr_hikrButton_FontSize_Property(hikr.Button obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((hikr.Button)obj).FontSize; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((hikr.Button)obj).SetFontSize(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
