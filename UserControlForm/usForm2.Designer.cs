
namespace UserControlForm
{
    partial class usForm2
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

        #region Component Designer generated code

        /// <summary> 
        /// Required method for Designer support - do not modify 
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.btnCatch = new System.Windows.Forms.Button();
            this.btnDel = new System.Windows.Forms.Button();
            this.btnSearch = new System.Windows.Forms.Button();
            this.lbPrice = new System.Windows.Forms.Label();
            this.lbName = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.userPic = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.userPic)).BeginInit();
            this.SuspendLayout();
            // 
            // btnCatch
            // 
            this.btnCatch.Location = new System.Drawing.Point(153, 232);
            this.btnCatch.Name = "btnCatch";
            this.btnCatch.Size = new System.Drawing.Size(60, 23);
            this.btnCatch.TabIndex = 15;
            this.btnCatch.Text = "검거";
            this.btnCatch.UseVisualStyleBackColor = true;
            this.btnCatch.Click += new System.EventHandler(this.btn_Click);
            // 
            // btnDel
            // 
            this.btnDel.Location = new System.Drawing.Point(87, 232);
            this.btnDel.Name = "btnDel";
            this.btnDel.Size = new System.Drawing.Size(60, 23);
            this.btnDel.TabIndex = 14;
            this.btnDel.Text = "정지";
            this.btnDel.UseVisualStyleBackColor = true;
            this.btnDel.Click += new System.EventHandler(this.btn_Click);
            // 
            // btnSearch
            // 
            this.btnSearch.Location = new System.Drawing.Point(19, 232);
            this.btnSearch.Name = "btnSearch";
            this.btnSearch.Size = new System.Drawing.Size(60, 23);
            this.btnSearch.TabIndex = 13;
            this.btnSearch.Text = "수배";
            this.btnSearch.UseVisualStyleBackColor = true;
            this.btnSearch.Click += new System.EventHandler(this.btn_Click);
            // 
            // lbPrice
            // 
            this.lbPrice.AutoSize = true;
            this.lbPrice.Location = new System.Drawing.Point(113, 202);
            this.lbPrice.Name = "lbPrice";
            this.lbPrice.Size = new System.Drawing.Size(47, 12);
            this.lbPrice.TabIndex = 12;
            this.lbPrice.Text = "2천만원";
            // 
            // lbName
            // 
            this.lbName.AutoSize = true;
            this.lbName.Location = new System.Drawing.Point(113, 178);
            this.lbName.Name = "lbName";
            this.lbName.Size = new System.Drawing.Size(41, 12);
            this.lbName.TabIndex = 11;
            this.lbName.Text = "홍길동";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(66, 202);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(41, 12);
            this.label2.TabIndex = 10;
            this.label2.Text = "금액 : ";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(66, 178);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(41, 12);
            this.label1.TabIndex = 9;
            this.label1.Text = "이름 : ";
            // 
            // userPic
            // 
            this.userPic.Image = global::UserControlForm.Properties.Resources.wansoo05;
            this.userPic.Location = new System.Drawing.Point(39, 18);
            this.userPic.Name = "userPic";
            this.userPic.Size = new System.Drawing.Size(137, 145);
            this.userPic.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.userPic.TabIndex = 8;
            this.userPic.TabStop = false;
            // 
            // usForm2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.PaleTurquoise;
            this.Controls.Add(this.btnCatch);
            this.Controls.Add(this.btnDel);
            this.Controls.Add(this.btnSearch);
            this.Controls.Add(this.lbPrice);
            this.Controls.Add(this.lbName);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.userPic);
            this.Name = "usForm2";
            this.Size = new System.Drawing.Size(220, 269);
            ((System.ComponentModel.ISupportInitialize)(this.userPic)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnCatch;
        private System.Windows.Forms.Button btnDel;
        private System.Windows.Forms.Button btnSearch;
        private System.Windows.Forms.Label lbPrice;
        private System.Windows.Forms.Label lbName;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.PictureBox userPic;
    }
}
