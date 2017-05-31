namespace hikr
{
    [Uno.Compiler.UxGenerated]
    public partial class TextBox: Fuse.Controls.TextBox
    {
        static TextBox()
        {
        }
        [global::Uno.UX.UXConstructor]
        public TextBox()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            this.TextColor = float4(1f, 1f, 1f, 1f);
            this.CaretColor = float4(1f, 1f, 1f, 1f);
            this.Padding = float4(10f, 10f, 0f, 10f);
        }
    }
}
