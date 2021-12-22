using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace lab7
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        //double[][] P = new double[5][];
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

            //double[,][] P = new double[4, 4];




            for (int i = 0; i < P.Length; i++)
            {
                for (int j = 0; j < P[i].Length; j++)
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
            //double count = 0;
            //double x = 0;

            double temp = 0;

            for (int i = 0; i < P.GetLength(0); i = i + 1)
            {
                for (int j = 0; j < P[i].Length; j = j + 1)
                {
                    //buff = P[i][j];
                    if (i == j)
                    {
                        //P[i][j + 1] = P[i][j];
                        //P[i][j + 1] = buff;
                        //x = P[i][j];
                        //P[j] = P[j + 1];
                        //P[j + 1] = x;
                        //count++;
                        P[i][j] = 49;
                    }
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

        private void dataGridView2_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        //public void ascendingOrder()
        //{
        //    // helper class
        //    double temp = 0;

        //    for (int j = 0; j < P.GetLength(0); j++)
        //    {
        //        for (int i = 0; i < P.Length - 1; i++)
        //        {
        //            if (P[i] > P[i + 1])
        //            {
        //                temp = P[i];
        //                P[i] = P[i + 1];
        //                P[i + 1] = temp;
        //            }
        //        }
        //    }
        //}
    }
}
