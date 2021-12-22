using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace lab_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double x = Convert.ToDouble(textBox1.Text);
            double y = Convert.ToDouble(textBox2.Text);
            double f = 0;

            textBox3.Text = "Результат работы программы " + "ст. Степневский В.В." + Environment.NewLine;
            textBox3.Text += "При Х = " + textBox1.Text + Environment.NewLine;
            textBox3.Text += "При Y = " + textBox2.Text + Environment.NewLine;

            if (radioButton1.Checked)
            {
                textBox3.Text += "Выбранная функция: синус" + Environment.NewLine;
                f = Math.Sinh(x);
            }

            if (radioButton2.Checked)
            {
                textBox3.Text += "Выбранная функция: косинус" + Environment.NewLine;
                f = Math.Pow(x, 2);
            }

            if (radioButton3.Checked)
            {
                textBox3.Text += "Выбранная функция: экспонента" + Environment.NewLine;
                f = (Math.Exp(x));
            }

            double c;

            if ((x - y) == 0)
            {
                c = (Math.Pow(f, 2)) + Math.Pow(y, 2) + Math.Sin(y);
            }
            else if ((x - y) > 0)
            {
                c = (Math.Pow((Math.Pow(f, 2) - y), 2)) + Math.Cos(y);
            }
            else
            {
                c = (Math.Pow(y - (Math.Pow(f, 2)), 2)) + Math.Tan(y);
            }

            textBox3.Text += "C = " + c.ToString() + Environment.NewLine;

        }
    }
}
