procedure InitializeComponent;
    begin
        self.label1 := new System.Windows.Forms.Label();
        self.button1 := new System.Windows.Forms.Button();
        self.button3 := new System.Windows.Forms.Button();
        self.label3 := new System.Windows.Forms.Label();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.label2 := new System.Windows.Forms.Label();
        self.button2 := new System.Windows.Forms.Button();
        self.openFileDialog1 := new System.Windows.Forms.OpenFileDialog();
        self.button4 := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 12.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.Location := new System.Drawing.Point(12, 21);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(127, 24);
        self.label1.TabIndex := 0;
        self.label1.Text := '1) History :';
        self.label1.Click += label1_Click;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(145, 12);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(105, 41);
        self.button1.TabIndex := 1;
        self.button1.Text := 'Clear History';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(327, 51);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(44, 41);
        self.button3.TabIndex := 4;
        self.button3.Text := 'Set Site';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // label3
        // 
        self.label3.Font := new System.Drawing.Font('Microsoft Sans Serif', 12.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label3.Location := new System.Drawing.Point(12, 60);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(127, 24);
        self.label3.TabIndex := 5;
        self.label3.Text := '3) Main Site';
        self.label3.Click += label3_Click;
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(145, 64);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(176, 20);
        self.textBox1.TabIndex := 6;
        self.textBox1.TextChanged += textBox1_TextChanged;
        // 
        // label2
        // 
        self.label2.Font := new System.Drawing.Font('Microsoft Sans Serif', 12.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label2.Location := new System.Drawing.Point(12, 102);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(127, 24);
        self.label2.TabIndex := 7;
        self.label2.Text := '4) Wallpapers';
        self.label2.Click += label2_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(145, 93);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(105, 41);
        self.button2.TabIndex := 8;
        self.button2.Text := 'Set Wallpapers';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // openFileDialog1
        // 
        self.openFileDialog1.FileName := 'openFileDialog1';
        self.openFileDialog1.FileOk += openFileDialog1_FileOk;
        // 
        // button4
        // 
        self.button4.Location := new System.Drawing.Point(336, 134);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(63, 23);
        self.button4.TabIndex := 9;
        self.button4.Text := 'Close';
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Click += button4_Click;
        // 
        // Form4
        // 
        self.ClientSize := new System.Drawing.Size(411, 169);
        self.Controls.Add(self.button4);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.label1);
        self.Name := 'Form4';
        self.Text := 'Settings';
        self.Load += Form1_Load;
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
