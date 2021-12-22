using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace mk_1_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //int a = Convert.ToInt32(textBox1.Text);
            //int b = Convert.ToInt32(textBox2.Text);

            //int n = a % 10;
            //int k1 = 0;

            //if (a > 9)
            //{
            //    a /= 10;
            //    k1 += 1;
            //}


            //int k = 0;
            //int s = 0;

            ////for(int i = 0; i < a; i++)
            ////{
            ////    k += 1;
            ////}
            //k = a + n;
            //textBox3.Text = k.ToString();



            int a = Convert.ToInt32(textBox1.Text);
            int b = Convert.ToInt32(textBox2.Text);


            int k = 0;
            int s = 0;
            int c = 0;
            int n = 0;

            //if (a >= 0)
            //{
            //    c = a % 10;
            //    k = k + 1;
            //    s = s + c;
            //    a = a / 10;
            //}

            do
            {// выполняем цикл.
                c = a / 10;
                k += 1;
                s = s + c;
                a = a % 100;
            } while (a <= 0);

            textBox3.Text = k.ToString();
            textBox5.Text = s.ToString();
        }
    }
}
