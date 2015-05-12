Unit Unit2;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form2 = class(Form)
  {$region FormDesigner}
  private
    {$resource Unit2.Form2.resources}
    label1: &Label;
    {$include Unit2.Form2.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

end.
