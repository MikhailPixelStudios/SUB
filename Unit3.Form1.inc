procedure InitializeComponent;
    begin
        self.W := new System.Windows.Forms.Label();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // W
        // 
        self.W.Font := new System.Drawing.Font('Microsoft Sans Serif', 10.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.W.Location := new System.Drawing.Point(6, 22);
        self.W.Name := 'W';
        self.W.Size := new System.Drawing.Size(509, 39);
        self.W.TabIndex := 0;
        self.W.Text := 'SUB - is a simple browser for Windows. Here you can browse Internet sites, watch videos and download files. Also browser save history.';
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(6, 61);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(473, 32);
        self.label1.TabIndex := 1;
        // 
        // label2
        // 
        self.label2.Font := new System.Drawing.Font('Microsoft Sans Serif', 10.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label2.Location := new System.Drawing.Point(6, 93);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(509, 23);
        self.label2.TabIndex := 2;
        self.label2.Text := '(c) Pixel Studios 2015 St.Peterburg, Russia';
        // 
        // label3
        // 
        self.label3.Font := new System.Drawing.Font('Microsoft Sans Serif', 10.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label3.Location := new System.Drawing.Point(6, 65);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(509, 28);
        self.label3.TabIndex := 3;
        self.label3.Text := 'Autor - Ushakov Mikhail';
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(491, 133);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.W);
        self.Name := 'Form1';
        self.Text := 'What is SUB ?';
        self.ResumeLayout(false);
    end;
