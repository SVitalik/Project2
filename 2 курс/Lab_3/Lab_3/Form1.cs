using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab_3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            textBox1.Text = "-0.5" + Environment.NewLine;
            textBox2.Text = "2.5" + Environment.NewLine;
            textBox3.Text = "0.05" + Environment.NewLine;
            textBox4.Text = "10.2" + Environment.NewLine;
            textBox5.Text = "1.25" + Environment.NewLine;
        }

        private void textBox5_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            textBox6.Text = " ";
            double x0 = Convert.ToDouble(textBox1.Text);
            double xk = Convert.ToDouble(textBox2.Text);
            double dx = Convert.ToDouble(textBox3.Text);
            double a = Convert.ToDouble(textBox4.Text);
            double b = Convert.ToDouble(textBox5.Text);

            textBox5.Text = "Работу виконав ст. Степневскький В.В." + Environment.NewLine;
        }
    }
}
