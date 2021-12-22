using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Text.RegularExpressions;

namespace lab_regul
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            textBox1.Text = "21415@#3w42y4thgbxcnnxdfb@542531";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //string pat = @"21415@#3w42y4thgbxcnnxdfb@542531";
            //string res = Regex.Replace(pat, "[0-9]", " ");
            //textBox2.Text = res;

            string pat1 = textBox1.Text;
            string res1 = Regex.Replace(pat1, "[0-9]", " ");
            textBox2.Text = res1;
        }
    }
}
