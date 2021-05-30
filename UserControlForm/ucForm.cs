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


    public partial class ucForm : UserControl
    {
        public delegate int delEvent(object Sender, string strText);            //n delegate 선언
        public event delEvent eventdelSender;       // delegate event 선언

        [Category("UserProperty"), Description("Image")]
        public Image UserFace
        {
              get
            {
                return this.userFace.BackgroundImage;
            }
            set
            {
                this.userFace.BackgroundImage = value;
            }
        }
        [Category("UserProperty"), Description("현상금")]
        public string UserNo
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
        [Category("UserProperty"), Description("Name")]
        public string UserName
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
        public ucForm()
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
                    this.BackColor = Color.Red;
                    strText = string.Format("{0}은 금액 {1}으로 수배중 입니다.", lbName.Text, lbPrice.Text);
                    break;
                case "btnDel":
                    this.BackColor = Color.Yellow;
                    strText = string.Format("{0}은 수배 정지 입니다.", lbName.Text);
                    break;
                case "btnCatch":
                    this.BackColor = Color.Green;
                    strText = string.Format("{0}은 검거 되었습니다.", lbName.Text);
                    break;
                default:
                    break;
            }

            if (eventdelSender != null)
             {
                eventdelSender(this, strText);
            }
        }
    }
}
