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
    public partial class main : Form
    {
        public main()
        {
            InitializeComponent();

            //ucForm.eventdelSender += UcInfo1_eventdelSender;
        }

        private void main_Load(object sender, EventArgs e)
        {
            foreach (var oControl in pMain.Controls)
            {
                 if(oControl is ucForm)
                {
                    ucForm oForm = oControl as ucForm;
                    oForm.eventdelSender += UcInfo1_eventdelSender;
                }
            }

            foreach (var oControl in pMain2.Controls)
            {
                if (oControl is usForm2)
                {
                    usForm2 oForm = oControl as usForm2;
                    oForm.eventDelSender += usForm_ventDelSender;
                }
            }

        }

        private int usForm_ventDelSender(object sender, string strText)
        {
            usForm2 oform = sender as usForm2;
            lstBox.Items.Add(string.Format("{0}:{1}", oform.Name, strText));

            return 0;
        }

        private int UcInfo1_eventdelSender(object Sender, string strText)
        {
            ucForm oform = Sender as ucForm;
            lstBox.Items.Add(string.Format("{0} : {1}",oform.Name, strText));

            return 0;
        }

        
    }
}
