namespace WindowsFormsApp
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea1 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Legend legend1 = new System.Windows.Forms.DataVisualization.Charting.Legend();
            System.Windows.Forms.DataVisualization.Charting.Series series1 = new System.Windows.Forms.DataVisualization.Charting.Series();
            this.startb = new System.Windows.Forms.Button();
            this.label = new System.Windows.Forms.Label();
            this.nextb = new System.Windows.Forms.Button();
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.radioButton1 = new System.Windows.Forms.RadioButton();
            this.radioButton2 = new System.Windows.Forms.RadioButton();
            this.radioButton3 = new System.Windows.Forms.RadioButton();
            this.prevb = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.checkBox1 = new System.Windows.Forms.CheckBox();
            this.checkBox2 = new System.Windows.Forms.CheckBox();
            this.checkBox3 = new System.Windows.Forms.CheckBox();
            this.checkBox4 = new System.Windows.Forms.CheckBox();
            this.checkBox5 = new System.Windows.Forms.CheckBox();
            this.checkBox6 = new System.Windows.Forms.CheckBox();
            this.label4 = new System.Windows.Forms.Label();
            this.numericUpDown1 = new System.Windows.Forms.NumericUpDown();
            this.numericUpDown2 = new System.Windows.Forms.NumericUpDown();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.finishb = new System.Windows.Forms.Button();
            this.againb = new System.Windows.Forms.Button();
            this.labelnota = new System.Windows.Forms.Label();
            this.labeltrue = new System.Windows.Forms.Label();
            this.labelfalse = new System.Windows.Forms.Label();
            this.chart1 = new System.Windows.Forms.DataVisualization.Charting.Chart();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDown1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDown2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.chart1)).BeginInit();
            this.SuspendLayout();
            // 
            // startb
            // 
            this.startb.Font = new System.Drawing.Font("Arial Narrow", 27.75F, System.Drawing.FontStyle.Bold);
            this.startb.Location = new System.Drawing.Point(279, 173);
            this.startb.Name = "startb";
            this.startb.Size = new System.Drawing.Size(237, 83);
            this.startb.TabIndex = 15;
            this.startb.Text = "Incepe";
            this.startb.UseVisualStyleBackColor = true;
            this.startb.Click += new System.EventHandler(this.startb_Click);
            // 
            // label
            // 
            this.label.AutoSize = true;
            this.label.Font = new System.Drawing.Font("Arial Narrow", 20.25F, System.Drawing.FontStyle.Bold);
            this.label.Location = new System.Drawing.Point(196, 259);
            this.label.Name = "label";
            this.label.Size = new System.Drawing.Size(413, 49);
            this.label.TabIndex = 2;
            this.label.Text = "Timp la dispozitie: 1 min";
            this.label.Click += new System.EventHandler(this.label_Click);
            // 
            // nextb
            // 
            this.nextb.Font = new System.Drawing.Font("Arial Narrow", 12F);
            this.nextb.Location = new System.Drawing.Point(632, 375);
            this.nextb.Name = "nextb";
            this.nextb.Size = new System.Drawing.Size(139, 51);
            this.nextb.TabIndex = 4;
            this.nextb.Text = "Urmatorul >";
            this.nextb.UseVisualStyleBackColor = true;
            this.nextb.Click += new System.EventHandler(this.nextb_Click);
            // 
            // timer1
            // 
            this.timer1.Interval = 1000;
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Palatino Linotype", 12F);
            this.label1.Location = new System.Drawing.Point(29, 30);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(217, 32);
            this.label1.TabIndex = 5;
            this.label1.Text = "Timpul: 60 secunde";
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Arial Narrow", 20.25F, System.Drawing.FontStyle.Bold);
            this.label2.Location = new System.Drawing.Point(171, 121);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(490, 49);
            this.label2.TabIndex = 6;
            this.label2.Text = "Cum se numeste facultatea ?";
            this.label2.Click += new System.EventHandler(this.label2_Click);
            // 
            // radioButton1
            // 
            this.radioButton1.AutoSize = true;
            this.radioButton1.Font = new System.Drawing.Font("Arial Narrow", 13F);
            this.radioButton1.Location = new System.Drawing.Point(88, 193);
            this.radioButton1.Name = "radioButton1";
            this.radioButton1.Size = new System.Drawing.Size(81, 35);
            this.radioButton1.TabIndex = 5;
            this.radioButton1.TabStop = true;
            this.radioButton1.Text = "FUA";
            this.radioButton1.UseVisualStyleBackColor = true;
            // 
            // radioButton2
            // 
            this.radioButton2.AutoSize = true;
            this.radioButton2.Font = new System.Drawing.Font("Arial Narrow", 13F);
            this.radioButton2.Location = new System.Drawing.Point(314, 193);
            this.radioButton2.Name = "radioButton2";
            this.radioButton2.Size = new System.Drawing.Size(85, 35);
            this.radioButton2.TabIndex = 6;
            this.radioButton2.TabStop = true;
            this.radioButton2.Text = "FEIE";
            this.radioButton2.UseVisualStyleBackColor = true;
            // 
            // radioButton3
            // 
            this.radioButton3.AutoSize = true;
            this.radioButton3.Font = new System.Drawing.Font("Arial Narrow", 13F);
            this.radioButton3.Location = new System.Drawing.Point(545, 193);
            this.radioButton3.Name = "radioButton3";
            this.radioButton3.Size = new System.Drawing.Size(90, 35);
            this.radioButton3.TabIndex = 7;
            this.radioButton3.TabStop = true;
            this.radioButton3.Text = "FCIM";
            this.radioButton3.UseVisualStyleBackColor = true;
            // 
            // prevb
            // 
            this.prevb.Font = new System.Drawing.Font("Arial Narrow", 12F);
            this.prevb.Location = new System.Drawing.Point(74, 375);
            this.prevb.Name = "prevb";
            this.prevb.Size = new System.Drawing.Size(172, 51);
            this.prevb.TabIndex = 8;
            this.prevb.Text = "< Precedentul";
            this.prevb.UseVisualStyleBackColor = true;
            this.prevb.Click += new System.EventHandler(this.prevb_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Arial Narrow", 20.25F, System.Drawing.FontStyle.Bold);
            this.label3.Location = new System.Drawing.Point(171, 98);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(435, 49);
            this.label3.TabIndex = 9;
            this.label3.Text = "Care camine au 12 etaje ?";
            this.label3.Click += new System.EventHandler(this.label3_Click);
            // 
            // checkBox1
            // 
            this.checkBox1.AutoSize = true;
            this.checkBox1.Font = new System.Drawing.Font("Arial Narrow", 18F);
            this.checkBox1.Location = new System.Drawing.Point(130, 165);
            this.checkBox1.Name = "checkBox1";
            this.checkBox1.Size = new System.Drawing.Size(76, 46);
            this.checkBox1.TabIndex = 10;
            this.checkBox1.Text = "12";
            this.checkBox1.UseVisualStyleBackColor = true;
            // 
            // checkBox2
            // 
            this.checkBox2.AutoSize = true;
            this.checkBox2.Font = new System.Drawing.Font("Arial Narrow", 18F);
            this.checkBox2.Location = new System.Drawing.Point(130, 299);
            this.checkBox2.Name = "checkBox2";
            this.checkBox2.Size = new System.Drawing.Size(60, 46);
            this.checkBox2.TabIndex = 11;
            this.checkBox2.Text = "1";
            this.checkBox2.UseVisualStyleBackColor = true;
            // 
            // checkBox3
            // 
            this.checkBox3.AutoSize = true;
            this.checkBox3.Font = new System.Drawing.Font("Arial Narrow", 18F);
            this.checkBox3.Location = new System.Drawing.Point(344, 164);
            this.checkBox3.Name = "checkBox3";
            this.checkBox3.Size = new System.Drawing.Size(60, 46);
            this.checkBox3.TabIndex = 12;
            this.checkBox3.Text = "2";
            this.checkBox3.UseVisualStyleBackColor = true;
            this.checkBox3.CheckedChanged += new System.EventHandler(this.checkBox3_CheckedChanged);
            // 
            // checkBox4
            // 
            this.checkBox4.AutoSize = true;
            this.checkBox4.Font = new System.Drawing.Font("Arial Narrow", 18F);
            this.checkBox4.Location = new System.Drawing.Point(344, 298);
            this.checkBox4.Name = "checkBox4";
            this.checkBox4.Size = new System.Drawing.Size(76, 46);
            this.checkBox4.TabIndex = 13;
            this.checkBox4.Text = "11";
            this.checkBox4.UseVisualStyleBackColor = true;
            // 
            // checkBox5
            // 
            this.checkBox5.AutoSize = true;
            this.checkBox5.Font = new System.Drawing.Font("Arial Narrow", 18F);
            this.checkBox5.Location = new System.Drawing.Point(578, 163);
            this.checkBox5.Name = "checkBox5";
            this.checkBox5.Size = new System.Drawing.Size(76, 46);
            this.checkBox5.TabIndex = 14;
            this.checkBox5.Text = "10";
            this.checkBox5.UseVisualStyleBackColor = true;
            // 
            // checkBox6
            // 
            this.checkBox6.AutoSize = true;
            this.checkBox6.Font = new System.Drawing.Font("Arial Narrow", 18F);
            this.checkBox6.Location = new System.Drawing.Point(578, 299);
            this.checkBox6.Name = "checkBox6";
            this.checkBox6.Size = new System.Drawing.Size(76, 46);
            this.checkBox6.TabIndex = 15;
            this.checkBox6.Text = "13";
            this.checkBox6.UseVisualStyleBackColor = true;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Arial Narrow", 20.25F, System.Drawing.FontStyle.Bold);
            this.label4.Location = new System.Drawing.Point(282, 78);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(182, 49);
            this.label4.TabIndex = 16;
            this.label4.Text = "Calculatii:";
            // 
            // numericUpDown1
            // 
            this.numericUpDown1.Font = new System.Drawing.Font("Arial Narrow", 14.25F);
            this.numericUpDown1.Location = new System.Drawing.Point(328, 179);
            this.numericUpDown1.Name = "numericUpDown1";
            this.numericUpDown1.Size = new System.Drawing.Size(120, 40);
            this.numericUpDown1.TabIndex = 17;
            // 
            // numericUpDown2
            // 
            this.numericUpDown2.Font = new System.Drawing.Font("Arial Narrow", 14.25F);
            this.numericUpDown2.Location = new System.Drawing.Point(328, 234);
            this.numericUpDown2.Name = "numericUpDown2";
            this.numericUpDown2.Size = new System.Drawing.Size(120, 40);
            this.numericUpDown2.TabIndex = 18;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Arial Narrow", 20.25F, System.Drawing.FontStyle.Bold);
            this.label5.Location = new System.Drawing.Point(190, 170);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(132, 49);
            this.label5.TabIndex = 19;
            this.label5.Text = "2+2*2=";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Arial Narrow", 20.25F, System.Drawing.FontStyle.Bold);
            this.label6.Location = new System.Drawing.Point(222, 230);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(100, 49);
            this.label6.TabIndex = 20;
            this.label6.Text = "3^2=";
            // 
            // finishb
            // 
            this.finishb.Font = new System.Drawing.Font("Arial Narrow", 15.75F, System.Drawing.FontStyle.Bold);
            this.finishb.Location = new System.Drawing.Point(632, 375);
            this.finishb.Name = "finishb";
            this.finishb.Size = new System.Drawing.Size(139, 51);
            this.finishb.TabIndex = 21;
            this.finishb.Text = "Finish";
            this.finishb.UseVisualStyleBackColor = true;
            this.finishb.Click += new System.EventHandler(this.finishb_Click);
            // 
            // againb
            // 
            this.againb.Font = new System.Drawing.Font("Arial Narrow", 15.75F, System.Drawing.FontStyle.Bold);
            this.againb.Location = new System.Drawing.Point(316, 375);
            this.againb.Name = "againb";
            this.againb.Size = new System.Drawing.Size(172, 51);
            this.againb.TabIndex = 22;
            this.againb.Text = "Din nou ?";
            this.againb.UseVisualStyleBackColor = true;
            this.againb.Click += new System.EventHandler(this.againb_Click);
            // 
            // labelnota
            // 
            this.labelnota.AutoSize = true;
            this.labelnota.Font = new System.Drawing.Font("Arial Narrow", 20.25F, System.Drawing.FontStyle.Bold);
            this.labelnota.Location = new System.Drawing.Point(145, 117);
            this.labelnota.Name = "labelnota";
            this.labelnota.Size = new System.Drawing.Size(97, 49);
            this.labelnota.TabIndex = 23;
            this.labelnota.Text = "Nota";
            // 
            // labeltrue
            // 
            this.labeltrue.AutoSize = true;
            this.labeltrue.Font = new System.Drawing.Font("Arial Narrow", 18F, System.Drawing.FontStyle.Bold);
            this.labeltrue.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(0)))), ((int)(((byte)(192)))), ((int)(((byte)(0)))));
            this.labeltrue.Location = new System.Drawing.Point(143, 185);
            this.labeltrue.Name = "labeltrue";
            this.labeltrue.Size = new System.Drawing.Size(110, 42);
            this.labeltrue.TabIndex = 24;
            this.labeltrue.Text = "Corect";
            // 
            // labelfalse
            // 
            this.labelfalse.AutoSize = true;
            this.labelfalse.Font = new System.Drawing.Font("Arial Narrow", 18F, System.Drawing.FontStyle.Bold);
            this.labelfalse.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(0)))), ((int)(((byte)(0)))));
            this.labelfalse.Location = new System.Drawing.Point(147, 259);
            this.labelfalse.Name = "labelfalse";
            this.labelfalse.Size = new System.Drawing.Size(102, 42);
            this.labelfalse.TabIndex = 25;
            this.labelfalse.Text = "Gresit";
            // 
            // chart1
            // 
            this.chart1.BackColor = System.Drawing.Color.Transparent;
            this.chart1.BorderlineColor = System.Drawing.Color.Transparent;
            chartArea1.Name = "ChartArea1";
            this.chart1.ChartAreas.Add(chartArea1);
            legend1.Name = "Legend1";
            this.chart1.Legends.Add(legend1);
            this.chart1.Location = new System.Drawing.Point(503, 30);
            this.chart1.Name = "chart1";
            series1.ChartArea = "ChartArea1";
            series1.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Doughnut;
            series1.Legend = "Legend1";
            series1.LegendText = "Raspuns";
            series1.Name = "Raspuns";
            this.chart1.Series.Add(series1);
            this.chart1.Size = new System.Drawing.Size(256, 261);
            this.chart1.TabIndex = 40;
            this.chart1.Text = "Raspuns";
            this.chart1.Click += new System.EventHandler(this.chart1_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.chart1);
            this.Controls.Add(this.labelfalse);
            this.Controls.Add(this.labeltrue);
            this.Controls.Add(this.labelnota);
            this.Controls.Add(this.againb);
            this.Controls.Add(this.finishb);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.numericUpDown2);
            this.Controls.Add(this.numericUpDown1);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.checkBox6);
            this.Controls.Add(this.checkBox5);
            this.Controls.Add(this.checkBox4);
            this.Controls.Add(this.checkBox3);
            this.Controls.Add(this.checkBox2);
            this.Controls.Add(this.checkBox1);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.prevb);
            this.Controls.Add(this.radioButton3);
            this.Controls.Add(this.radioButton2);
            this.Controls.Add(this.radioButton1);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.nextb);
            this.Controls.Add(this.label);
            this.Controls.Add(this.startb);
            this.Name = "Form1";
            this.Text = "Lab-7 Bunescu Gabriel TI-207";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDown1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDown2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.chart1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion





        private System.Windows.Forms.Button startb;
        private System.Windows.Forms.Label label;
        private System.Windows.Forms.Button nextb;
        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.RadioButton radioButton1;
        private System.Windows.Forms.RadioButton radioButton2;
        private System.Windows.Forms.RadioButton radioButton3;
        private System.Windows.Forms.Button prevb;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.CheckBox checkBox1;
        private System.Windows.Forms.CheckBox checkBox2;
        private System.Windows.Forms.CheckBox checkBox3;
        private System.Windows.Forms.CheckBox checkBox4;
        private System.Windows.Forms.CheckBox checkBox5;
        private System.Windows.Forms.CheckBox checkBox6;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.NumericUpDown numericUpDown1;
        private System.Windows.Forms.NumericUpDown numericUpDown2;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Button finishb;
        private System.Windows.Forms.Button againb;
        private System.Windows.Forms.Label labelnota;
        private System.Windows.Forms.Label labeltrue;
        private System.Windows.Forms.Label labelfalse;
        private System.Windows.Forms.DataVisualization.Charting.Chart chart1;
    }
}

