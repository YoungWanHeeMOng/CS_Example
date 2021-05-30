
namespace UserControlForm
{
    partial class main
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
            this.lstBox = new System.Windows.Forms.ListBox();
            this.pMain = new System.Windows.Forms.Panel();
            this.pMain2 = new System.Windows.Forms.Panel();
            this.usForm22 = new UserControlForm.usForm2();
            this.usForm21 = new UserControlForm.usForm2();
            this.ucForm2 = new UserControlForm.ucForm();
            this.ucForm1 = new UserControlForm.ucForm();
            this.pMain.SuspendLayout();
            this.pMain2.SuspendLayout();
            this.SuspendLayout();
            // 
            // lstBox
            // 
            this.lstBox.FormattingEnabled = true;
            this.lstBox.ItemHeight = 12;
            this.lstBox.Location = new System.Drawing.Point(2, 300);
            this.lstBox.Name = "lstBox";
            this.lstBox.Size = new System.Drawing.Size(466, 256);
            this.lstBox.TabIndex = 2;
            // 
            // pMain
            // 
            this.pMain.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.pMain.Controls.Add(this.ucForm2);
            this.pMain.Controls.Add(this.ucForm1);
            this.pMain.Location = new System.Drawing.Point(2, 0);
            this.pMain.Name = "pMain";
            this.pMain.Size = new System.Drawing.Size(466, 293);
            this.pMain.TabIndex = 4;
            // 
            // pMain2
            // 
            this.pMain2.BackColor = System.Drawing.Color.LightSteelBlue;
            this.pMain2.Controls.Add(this.usForm22);
            this.pMain2.Controls.Add(this.usForm21);
            this.pMain2.Location = new System.Drawing.Point(474, 0);
            this.pMain2.Name = "pMain2";
            this.pMain2.Size = new System.Drawing.Size(233, 556);
            this.pMain2.TabIndex = 5;
            // 
            // usForm22
            // 
            this.usForm22.BackColor = System.Drawing.Color.PaleTurquoise;
            this.usForm22.Location = new System.Drawing.Point(7, 281);
            this.usForm22.Name = "usForm22";
            this.usForm22.Size = new System.Drawing.Size(220, 269);
            this.usForm22.TabIndex = 1;
            this.usForm22.userFace2 = global::UserControlForm.Properties.Resources.wansoo05;
            this.usForm22.userName2 = "이순신";
            this.usForm22.userPrice2 = "2천5백만원";
            // 
            // usForm21
            // 
            this.usForm21.BackColor = System.Drawing.Color.PaleTurquoise;
            this.usForm21.Location = new System.Drawing.Point(7, 6);
            this.usForm21.Name = "usForm21";
            this.usForm21.Size = new System.Drawing.Size(220, 269);
            this.usForm21.TabIndex = 0;
            this.usForm21.userFace2 = global::UserControlForm.Properties.Resources.wansoo;
            this.usForm21.userName2 = "을지문덕";
            this.usForm21.userPrice2 = "1천만원";
            // 
            // ucForm2
            // 
            this.ucForm2.BackColor = System.Drawing.Color.Salmon;
            this.ucForm2.Location = new System.Drawing.Point(236, 12);
            this.ucForm2.Name = "ucForm2";
            this.ucForm2.Size = new System.Drawing.Size(220, 269);
            this.ucForm2.TabIndex = 3;
            this.ucForm2.UserFace = global::UserControlForm.Properties.Resources.wansoo;
            this.ucForm2.UserName = "감강찬";
            this.ucForm2.UserNo = "3천만원";
            // 
            // ucForm1
            // 
            this.ucForm1.BackColor = System.Drawing.Color.Salmon;
            this.ucForm1.Location = new System.Drawing.Point(10, 12);
            this.ucForm1.Name = "ucForm1";
            this.ucForm1.Size = new System.Drawing.Size(220, 269);
            this.ucForm1.TabIndex = 0;
            this.ucForm1.UserFace = global::UserControlForm.Properties.Resources.wansoo05;
            this.ucForm1.UserName = "홍길동";
            this.ucForm1.UserNo = "2천만원";
            // 
            // main
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(714, 558);
            this.Controls.Add(this.pMain2);
            this.Controls.Add(this.pMain);
            this.Controls.Add(this.lstBox);
            this.Name = "main";
            this.Text = "User Control Form 연습";
            this.Load += new System.EventHandler(this.main_Load);
            this.pMain.ResumeLayout(false);
            this.pMain2.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private ucForm ucForm1;
        private System.Windows.Forms.ListBox lstBox;
        private ucForm ucForm2;
        private System.Windows.Forms.Panel pMain;
        private System.Windows.Forms.Panel pMain2;
        private usForm2 usForm22;
        private usForm2 usForm21;
    }
}

