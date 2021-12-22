using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab3_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            textBox1.Text = "-0,5";
            textBox2.Text = "2,5";
            textBox3.Text = "0,05";
            textBox4.Text = "10,2";
            textBox5.Text = "1,25";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double x0 = double.Parse(textBox1.Text);
            double xk = double.Parse(textBox2.Text);
            double dx = double.Parse(textBox3.Text);
            double a = double.Parse(textBox4.Text);
            double b = double.Parse(textBox5.Text);

            textBox6.Text = "Работу виконав ст. Степневскький В.В." + Environment.NewLine + " " + Environment.NewLine;

            double y;

            for(double x = x0; x < xk; x+= dx)
            {
                if (dx > xk || dx < x)
                {
                    //MessageBox.Show("Проверте корректность данных");
                }

                else
                {
                    y = Math.Pow(10, -1) * a * Math.Pow(x, 3) * Math.Tan(a - b * x);
                    textBox6.Text += "X = " + Convert.ToString(x) + "  ";
                    textBox6.Text += "Y = " + Convert.ToString(y) + Environment.NewLine;
                }
            }
        }
    }
}
