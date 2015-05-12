procedure InitializeComponent;
    begin
        self.label1 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 38.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.Location := new System.Drawing.Point(69, 41);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(321, 66);
        self.label1.TabIndex := 0;
        self.label1.Text := 'Wrong URL !';
        // 
        // Form2
        // 
        self.ClientSize := new System.Drawing.Size(477, 154);
        self.Controls.Add(self.label1);
        self.Name := 'Form2';
        self.Text := 'Error';
        self.ResumeLayout(false);
    end;
