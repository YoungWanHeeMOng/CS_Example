
namespace UserControlForm
{
    partial class ucForm
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
            this.userFace = new System.Windows.Forms.PictureBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.lbName = new System.Windows.Forms.Label();
            this.lbPrice = new System.Windows.Forms.Label();
            this.btnSearch = new System.Windows.Forms.Button();
            this.btnDel = new System.Windows.Forms.Button();
            this.btnCatch = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.userFace)).BeginInit();
            this.SuspendLayout();
            // 
            // userFace
            // 
            this.userFace.Image = global::UserControlForm.Properties.Resources.wansoo;
            this.userFace.Location = new System.Drawing.Point(38, 19);
            this.userFace.Name = "userFace";
            this.userFace.Size = new System.Drawing.Size(137, 145);
            this.userFace.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.userFace.TabIndex = 0;
            this.userFace.TabStop = false;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(65, 179);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(41, 12);
            this.label1.TabIndex = 1;
            this.label1.Text = "이름 : ";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(65, 203);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(41, 12);
            this.label2.TabIndex = 2;
            this.label2.Text = "금액 : ";
            // 
            // lbName
            // 
            this.lbName.AutoSize = true;
            this.lbName.Location = new System.Drawing.Point(112, 179);
            this.lbName.Name = "lbName";
            this.lbName.Size = new System.Drawing.Size(41, 12);
            this.lbName.TabIndex = 3;
            this.lbName.Text = "홍길동";
            // 
            // lbPrice
            // 
            this.lbPrice.AutoSize = true;
            this.lbPrice.Location = new System.Drawing.Point(112, 203);
            this.lbPrice.Name = "lbPrice";
            this.lbPrice.Size = new System.Drawing.Size(47, 12);
            this.lbPrice.TabIndex = 4;
            this.lbPrice.Text = "2천만원";
            // 
            // btnSearch
            // 
            this.btnSearch.Location = new System.Drawing.Point(13, 235);
            this.btnSearch.Name = "btnSearch";
            this.btnSearch.Size = new System.Drawing.Size(60, 23);
            this.btnSearch.TabIndex = 5;
            this.btnSearch.Text = "수배";
            this.btnSearch.UseVisualStyleBackColor = true;
            this.btnSearch.Click += new System.EventHandler(this.btn_Click);
            // 
            // btnDel
            // 
            this.btnDel.Location = new System.Drawing.Point(81, 235);
            this.btnDel.Name = "btnDel";
            this.btnDel.Size = new System.Drawing.Size(60, 23);
            this.btnDel.TabIndex = 6;
            this.btnDel.Text = "정지";
            this.btnDel.UseVisualStyleBackColor = true;
            this.btnDel.Click += new System.EventHandler(this.btn_Click);
            // 
            // btnCatch
            // 
            this.btnCatch.Location = new System.Drawing.Point(147, 235);
            this.btnCatch.Name = "btnCatch";
            this.btnCatch.Size = new System.Drawing.Size(60, 23);
            this.btnCatch.TabIndex = 7;
            this.btnCatch.Text = "검거";
            this.btnCatch.UseVisualStyleBackColor = true;
            this.btnCatch.Click += new System.EventHandler(this.btn_Click);
            // 
            // ucForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Salmon;
            this.Controls.Add(this.btnCatch);
            this.Controls.Add(this.btnDel);
            this.Controls.Add(this.btnSearch);
            this.Controls.Add(this.lbPrice);
            this.Controls.Add(this.lbName);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.userFace);
            this.Name = "ucForm";
            this.Size = new System.Drawing.Size(220, 269);
            ((System.ComponentModel.ISupportInitialize)(this.userFace)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox userFace;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label lbName;
        private System.Windows.Forms.Label lbPrice;
        private System.Windows.Forms.Button btnSearch;
        private System.Windows.Forms.Button btnDel;
        private System.Windows.Forms.Button btnCatch;
    }
}
