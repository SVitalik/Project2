using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_klass
{
    class Rectangle
    {
        public double a;
        public Rectangle()
        {
            //this.a = a;
        }

        public void Vvod(double ch)
        {
            //Console.WriteLine("Введите число: ");
            //int n1 = Convert.ToInt32(Console.ReadLine());
            this.a = ch;

        }

        public double Vuvod()
        {
            //Console.WriteLine("Вывод числа: ");
            return a;
        }

        public int kol(int ch)
        {
            int kol = 0;
            while (ch != 0)
            {
                kol++;
                ch /= 10;
            }
            //Console.WriteLine($"Кол-во цифр: {kol} ");
            return kol;
        }

        public int summa(int ch)
        {
            int suma = 0;
            while (ch != 0)
            {
                suma += ch % 10;
                ch /= 10;
            }
            Console.WriteLine($"Сумма цифр: {suma}");
            return suma;
        }

        //public void VSE()
        //{
        //    Vvod(a);
        //    Vuvod();
        //    kol(a);
        //    summa(a);
        //}
    }


    class Program
    {
        static void Main(string[] args)
        {
            Rectangle n = new Rectangle();
            Console.WriteLine("Введите число: ");
            int n1 = Convert.ToInt32(Console.ReadLine());
            n.Vvod(n1);
            Console.WriteLine("Вывод числа: ");
            Console.WriteLine(n.Vuvod());
            Console.WriteLine($"Кол-во цифр: {n.kol(n1)} ");
            Console.WriteLine($"Сумма цифр: {n.summa(n1)}");
        }
    }
}
