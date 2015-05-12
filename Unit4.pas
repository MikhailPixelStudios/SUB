///Settings
Unit Unit4;

interface

uses System, System.Drawing, System.Windows.Forms;
var f:textfile;
b:boolean;
type
  Form4 = class(Form)
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure label1_Click(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure textBox1_TextChanged(sender: Object; e: EventArgs);
    procedure label2_Click(sender: Object; e: EventArgs);
    procedure label3_Click(sender: Object; e: EventArgs);
    procedure openFileDialog1_FileOk(sender: Object; e: ComponentModel.CancelEventArgs);
    procedure button4_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unit4.Form1.resources}
    button1: Button;
    button3: Button;
    label3: &Label;
    textBox1: TextBox;
    label2: &Label;
    button2: Button;
    openFileDialog1: OpenFileDialog;
    button4: Button;
    label1: &Label;
    {$include Unit4.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form4.Form1_Load(sender: Object; e: EventArgs);
begin
b:=false;
  textbox1.Text:='http://';
end;

procedure Form4.label1_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure Form4.button1_Click(sender: Object; e: EventArgs);
begin
  assign(f,'history.txt');
  rewrite(f);
  closefile(f);
  
end;

procedure Form4.button2_Click(sender: Object; e: EventArgs);
begin
openfiledialog1.ShowDialog;
  openfiledialog1.CheckFileExists:=true;
  openfiledialog1.Title:='Set image file';
  assign(f,'bmp.txt');
  if openfiledialog1.FileName<>'openfiledialog1' then
  begin
  rewrite(f);
  writeln(f,openfiledialog1.FileName);
  end;
  closefile(f);
end;

procedure Form4.button3_Click(sender: Object; e: EventArgs);
begin
  assign(f,'msite.txt');
  rewrite(f);
  writeln(f,textbox1.Text);
  closefile(f);
end;

procedure Form4.textBox1_TextChanged(sender: Object; e: EventArgs);
begin
  
end;

procedure Form4.label2_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure Form4.label3_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure Form4.openFileDialog1_FileOk(sender: Object; e: ComponentModel.CancelEventArgs);
begin
  
end;

procedure Form4.button4_Click(sender: Object; e: EventArgs);
begin
  b:=true;
 close;
end;

end.
