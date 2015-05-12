procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.webBrowser1 := new System.Windows.Forms.WebBrowser();
        self.comboBox1 := new System.Windows.Forms.ComboBox();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.button3 := new System.Windows.Forms.Button();
        self.openFileDialog1 := new System.Windows.Forms.OpenFileDialog();
        self.button4 := new System.Windows.Forms.Button();
        self.button5 := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // webBrowser1
        // 
        self.webBrowser1.Location := new System.Drawing.Point(12, 73);
        self.webBrowser1.MinimumSize := new System.Drawing.Size(20, 20);
        self.webBrowser1.Name := 'webBrowser1';
        self.webBrowser1.ScriptErrorsSuppressed := true;
        self.webBrowser1.Size := new System.Drawing.Size(999, 510);
        self.webBrowser1.TabIndex := 0;
        self.webBrowser1.DocumentCompleted += webBrowser1_DocumentCompleted;
        // 
        // comboBox1
        // 
        self.comboBox1.FormattingEnabled := true;
        self.comboBox1.Location := new System.Drawing.Point(817, 34);
        self.comboBox1.Name := 'comboBox1';
        self.comboBox1.Size := new System.Drawing.Size(139, 21);
        self.comboBox1.TabIndex := 1;
        self.comboBox1.SelectedIndexChanged += comboBox1_SelectedIndexChanged;
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(12, 34);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(491, 20);
        self.textBox1.TabIndex := 2;
        self.textBox1.TextChanged += textBox1_TextChanged;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(509, 32);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 3;
        self.button1.Text := 'Search';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(962, 34);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(30, 21);
        self.button2.TabIndex := 4;
        self.button2.Text := 'Go';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(921, 3);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(99, 25);
        self.button3.TabIndex := 5;
        self.button3.Text := 'Set Wallpapers';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // openFileDialog1
        // 
        self.openFileDialog1.FileName := 'openFileDialog1';
        // 
        // button4
        // 
        self.button4.Location := new System.Drawing.Point(2, 3);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(24, 25);
        self.button4.TabIndex := 6;
        self.button4.Text := '?';
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Click += button4_Click;
        // 
        // button5
        // 
        self.button5.Location := new System.Drawing.Point(32, 3);
        self.button5.Name := 'button5';
        self.button5.Size := new System.Drawing.Size(24, 25);
        self.button5.TabIndex := 7;
        self.button5.Text := '+';
        self.button5.UseVisualStyleBackColor := true;
        self.button5.Click += button5_Click;
        // 
        // Form1
        // 
        self.AutoSizeMode := System.Windows.Forms.AutoSizeMode.GrowAndShrink;
        self.BackColor := System.Drawing.Color.DarkSlateGray;
        self.BackgroundImage := (System.Drawing.Image(resources.GetObject('$this.BackgroundImage')));
        self.ClientSize := new System.Drawing.Size(1023, 595);
        self.Controls.Add(self.button5);
        self.Controls.Add(self.button4);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.comboBox1);
        self.Controls.Add(self.webBrowser1);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.Name := 'Form1';
        self.Text := 'SUB';
        self.Load += Form1_Load;
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
