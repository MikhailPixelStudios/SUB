Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms,Unit2,Unit3,unit4;
var f,f1,f2:textfile;
h:integer;
ss:string;
type
  Form1 = class(Form)
    procedure webBrowser1_DocumentCompleted(sender: Object; e: WebBrowserDocumentCompletedEventArgs);
    procedure comboBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure textBox1_TextChanged(sender: Object; e: EventArgs);
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure button4_Click(sender: Object; e: EventArgs);
    procedure button5_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unit1.Form1.resources}
    comboBox1: ComboBox;
    textBox1: TextBox;
    button1: Button;
    button2: Button;
    components: System.ComponentModel.IContainer;
    button3: Button;
    openFileDialog1: OpenFileDialog;
    button4: Button;
    button5: Button;
    webBrowser1: WebBrowser;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.webBrowser1_DocumentCompleted(sender: Object; e: WebBrowserDocumentCompletedEventArgs);
begin

end;

procedure Form1.comboBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
var s:string;
begin
  if textbox1.Text<>'' then 
  begin
  if length(textbox1.Text)>7 then
  if (textbox1.Text[1]+textbox1.Text[2]+textbox1.Text[3]+textbox1.Text[4]+textbox1.Text[5]+textbox1.Text[6]+textbox1.Text[7]='http://' )then 
  begin
  webbrowser1.Url := new Uri(textbox1.Text);
  combobox1.Items.Add(textbox1.Text);
  h:=h+1;
  assign(f1,'h.txt');
  rewrite(f1);
  writeln(f1,h);
  closefile(f1);
  assign(f,'history.txt');
  append(f);
  writeln(f,textbox1.Text);
  
  closefile(f);
  end else
  begin
 // webbrowser1.Url := new Uri(textbox1.Text);
 //textbox1.Text:='Wrong URL !!!';
 unit2.Form2.Create.Visible:=true;
  end;
  end;
end;

procedure Form1.textBox1_TextChanged(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
var b:boolean;
i:integer;
s:string;
bb:system.Drawing.Bitmap;
begin
webbrowser1.Url:= new Uri('http://google.com');
  textbox1.Text:='http://';
  assign(f1,'h.txt');
  b:=fileexists('h.txt');
  if b=false then
  begin
  assign(f1,'h.txt');
  rewrite(f1);
  writeln(f1,'1');
  h:=1;
  closefile(f1);
  end;
  if b=true then
  begin
  assign(f1,'h.txt');
  reset(f1);
  readln(f1,ss);
  if ss='' then exit;
  h:=strtoint(ss);
  closefile(f1);
  end;
  closefile(f1);
  assign(f,'history.txt');
  b:=fileexists('history.txt');
  if b=false then
  begin
  assign(f,'history.txt');
  rewrite(f);
  //writeln(f,'0');
  writeln(f,'http://google.com');
  closefile(f);
  //h:=1;
  end;
  if b=true then
  begin
  assign(f,'history.txt');
  reset(f);
  //readln(f,h);
  for i:=1 to h do
  begin
  readln(f,s);
  if s='' then exit;
  combobox1.Items.Add(s);
  
  end;
  closefile(f);
  end;
  
  assign(f2,'bmp.txt');
  b:=fileexists('bmp.txt');
  if b=true then
  begin
  reset(f2);
  readln(f2,ss);
   BackgroundImage:=system.Drawing.Bitmap.FromFile(ss);
  closefile(f2);
  end;
  if b=false then 
  begin
  rewrite(f2);
  
  closefile(f2);
  end;
  
  assign(f2,'msite.txt');
  b:=fileexists('msite.txt');
  
  if b=true then
  begin
  reset(f2);
  readln(f2,ss);
  if ss='' then ss:='http://google.com';
   webbrowser1.Url:= new Uri(ss);
   closefile(f2);
  end;
  if b=false then 
  begin
  rewrite(f2);
  
  closefile(f2);
  end;
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  if combobox1.Text<>'' then webbrowser1.Url:= new Uri(combobox1.Text);
end;

procedure Form1.button3_Click(sender: Object; e: EventArgs);
var b:system.Drawing.Bitmap;
a3:textfile;
begin


  openfiledialog1.ShowDialog;
  openfiledialog1.CheckFileExists:=true;
  openfiledialog1.Title:='Set image file';
  //openfiledialog1.DefaultExt:='png';
  //b:=system.Drawing.Bitmap.FromFile(openfiledialog1.FileName);
 
 if (openfiledialog1.FileName<>'openFileDialog1') then 
 begin
 BackgroundImage:=system.Drawing.Bitmap.FromFile(openfiledialog1.FileName);
 assign(f2,'bmp.txt');
 rewrite(f2);
 writeln(f2,openfiledialog1.FileName);
 closefile(f2);
 end;
  //form1.Create.Update;
end;

procedure Form1.button4_Click(sender: Object; e: EventArgs);
begin
  unit3.Form3.Create.Visible:=true;
end;

procedure Form1.button5_Click(sender: Object; e: EventArgs);
var b:boolean;
i:integer;
s:string;
su:system.EventHandler;
begin
  unit4.Form4.Create.Show;
 
  
  
  
  if unit4.b=true then
  begin
   assign(f1,'h.txt');
  b:=fileexists('h.txt');
  if b=false then
  begin
  assign(f1,'h.txt');
  rewrite(f1);
  writeln(f1,'1');
  h:=1;
  closefile(f1);
  end;
  if b=true then
  begin
  assign(f1,'h.txt');
  reset(f1);
  readln(f1,ss);
  if ss='' then exit;
  h:=strtoint(ss);
  
  closefile(f1);
  end;
  assign(f,'history.txt');
  b:=fileexists('history.txt');
  if b=false then
  begin
  assign(f,'history.txt');
  rewrite(f);
  //writeln(f,'0');
  writeln(f,'http://google.com');
  closefile(f);
  //h:=1;
  end;
  if b=true then
  begin
  assign(f,'history.txt');
  reset(f);
  //readln(f,h);
  for i:=1 to h do
  begin
  readln(f,s);
  combobox1.Items.Add(s);
  
  end;
  closefile(f);
  end;
  
  assign(f2,'bmp.txt');
  b:=fileexists('bmp.txt');
  if b=true then
  begin
  reset(f2);
  readln(f2,ss);
   BackgroundImage:=system.Drawing.Bitmap.FromFile(ss);
  closefile(f2);
  end;
  if b=false then 
  begin
  rewrite(f2);
  
  closefile(f2);
  end;
  
  assign(f2,'msite.txt');
  b:=fileexists('msite.txt');
  
  if b=true then
  begin
  reset(f2);
  readln(f2,ss);
  if ss='' then ss:='http://google.com';
   webbrowser1.Url:= new Uri(ss);
   closefile(f2);
  end;
  if b=false then 
  begin
  rewrite(f2);
  
  closefile(f2);
  end;
  end;
end;

end.
