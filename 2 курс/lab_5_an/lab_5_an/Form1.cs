using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace lab_5_an
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        int[] Mas = new int[26];

        private void button1_Click(object sender, EventArgs e)
        {
            listBox1.Items.Clear();
            Random rand = new Random();

            for(int i = 1; i < 26; i++)
            {
                Mas[i] = rand.Next(-50, 50);
                listBox1.Items.Add("Mas[" + i.ToString() + "] = " + Mas[i].ToString());
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            listBox2.Items.Clear();

            int min = Mas[0];

            for(int i = 1; i < Mas.Length; i++)
            {
                if (Mas[i] < min)
                    min = Mas[i];
            }

            int index_min = 0;
            for (int i = 1; i < Mas.Length; i++)
            {
                if (Mas[i] == min)
                {
                    min = Mas[i];
                    index_min = i;
                }
            }

            for (int i = 1; i < Mas.Length; i++)
            {
                int temp = Mas[1];
                Mas[index_min] = temp;
                Mas[1] = min;

                listBox2.Items.Add("Mas[" + Convert.ToString(i) + "] = " + Mas[i].ToString());
            }

        }
    }
}
