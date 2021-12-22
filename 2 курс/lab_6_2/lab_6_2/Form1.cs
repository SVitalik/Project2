using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace lab_6_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Random random = new Random();
            int rowcount, columncount;
            if (int.TryParse(textBox1.Text, out rowcount) && int.TryParse(textBox2.Text, out columncount))
            {
                int[] z = new int[rowcount];
                dataGridView1.RowCount = rowcount;
                dataGridView1.ColumnCount = columncount;
                dataGridView2.RowCount = rowcount;
                dataGridView2.ColumnCount = columncount;
                dataGridView3.ColumnCount = rowcount;

                for (int i = 0; i < rowcount; i++)
                {
                    z[i] = 0;
                    for (int j = 0; j < columncount; j++)
                    {
                        dataGridView1.Columns[i].Width = 30;
                        dataGridView1[j, i].Value = random.Next(-10, 10);
                        if (Convert.ToInt32(dataGridView1[j, i].Value) == 0) z[i] = j + 1;
                    }
                    if (z[i] == 0) z[i] = columncount;
                }
                int[][] Q = new int[rowcount][];
                for (int i = 0; i < rowcount; i++)
                {
                    dataGridView3.Columns[i].Width = 30;
                    dataGridView3[i, 0].Value = z[i];
                    Q[i] = new int[z[i]];
                    for (int j = 0; j < z[i]; j++) Q[i][j] = random.Next(-10, 10);
                    for (int k = 0, temp; k < z[i] - 1; k++)
                    {
                        for (int t = k + 1; t < z[i]; t++)
                        {
                            if (Q[i][k] < Q[i][t])
                            {
                                temp = Q[i][k];
                                Q[i][k] = Q[i][t];
                                Q[i][t] = temp;
                            }
                        }
                    }
                }
                for (int i = 0; i < rowcount; i++)
                {
                    for (int j = 0; j < columncount; j++)
                    {
                        dataGridView2.Columns[i].Width = 30;
                        dataGridView2[j, i].Value = null;
                    }
                    for (int j = 0; j < z[i]; j++)
                    {
                        dataGridView2[j, i].Value = Convert.ToInt32(Q[i][j]);
                        //dataGridView2.Columns[i].Width = 30;
                    }
                }
            }
        }
    }
}
