using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace lab_6_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }


        private void button1_Click(object sender, EventArgs e)
        {

            //double[,] mass = new double[5, 5];
            Random rand = new Random();

            //int[][] M = new int[5][]; 
            //M[0] = new int[3];
            //M[1] = new int[4]; 
            //M[2] = new int[5];
            //M[3] = new int[3];
            //M[4] = new int[2];

            double[][] Z = new double[5][];

            double[][] P = new double[5][];
            P[0] = new double[5];
            P[1] = new double[5];
            P[2] = new double[5];
            P[3] = new double[5];
            P[4] = new double[5];




            for (int i = 0; i < P.Length; i++)
            {
                for(int j = 0; j < P[i].Length; j++)
                {
                    P[i][j] = rand.Next(0, 20);
                }
            }


            dataGridView1.RowCount = P.Length;
            dataGridView1.ColumnCount = 5; // тут с помощью кода не знаю как вычислять, разве что циклом узнавать максимальное кол-во элементов в каждом "под-массиве"

            for (int i = 0; i < P.GetLength(0); i++)
            {
                for (int j = 0; j < P[i].Length; j++)
                {
                    dataGridView1.Rows[i].Cells[j].Value = P[i][j];
                    dataGridView1.Columns[i].Width = 30;
                    dataGridView1.Columns[i].Name = $"P{i}";
                }
            }

            dataGridView2.RowCount = Z.Length;
            dataGridView2.ColumnCount = 5; // тут с помощью кода не знаю как вычислять, разве что циклом узнавать максимальное кол-во элементов в каждом "под-массиве"

            for (int i = 0; i < P.GetLength(0); i++)
            {
                for (int j = 0; j < P[i].Length; j++)
                {
                    dataGridView2.Rows[i].Cells[j].Value = P[i][j];
                    dataGridView2.Columns[i].Width = 30;
                    dataGridView2.Columns[i].Name = $"Z{i}";
                }
            }

        }
    }
}
