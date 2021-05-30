using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace UserControlForm
{
    public partial class usForm2 : UserControl
    {
        public delegate int delEvent(object sender, string strText);
        public event  delEvent eventDelSender;

         [Category ("UserProperty"), Description("Image") ]
        public Image userFace2
        {
            get
            {
                return this.userPic.BackgroundImage;
            }
            set
            {
                this.userPic.BackgroundImage = value;
            }
        }

        [Category("UserProperty"), Description("현상범")]
        public string userName2
        {
            get
            {
                return this.lbName.Text;
            }
            set
            {
                this.lbName.Text = value;
            }
        }

        [Category("UserProperty"), Description("현상금액")]
        public string userPrice2
        {
            get
            {
                return this.lbPrice.Text;
            }
            set
            {
                this.lbPrice.Text = value;
            }
        }

        public usForm2()
        {
            InitializeComponent();
        }

        private void btn_Click(object sender, EventArgs e)
        {

            string strText = string.Empty;
            Button oBtn = sender as Button;

            switch (oBtn.Name)
            {
                case "btnSearch":
                    this.BackColor = Color.AliceBlue;
                    strText = string.Format("{0}는 현상금이 {1}원 입니다.", lbName.Text, lbPrice.Text);
                    break;
                case "btnDel":
                    this.BackColor = Color.Aquamarine;
                    strText = string.Format("{0}는 수배 중지중입니다.", lbName.Text);
                    break;
                case "btnCatch":
                    this.BackColor = Color.Brown;
                    strText = string.Format("{0}는 검거 되었습니다.", lbName.Text);
                    break;
                default:
                    break;
            }

            if (eventDelSender != null)
            {
                eventDelSender(this, strText);
            }
        }
    }
}
