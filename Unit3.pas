Unit Unit3;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form3 = class(Form)
  {$region FormDesigner}
  private
    {$resource Unit3.Form1.resources}
    W: &Label;
    label1: &Label;
    label3: &Label;
    label2: &Label;
    {$include Unit3.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

end.
