using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_class_2
{
    class Program
    {
        class warehouse
        {
            //private Random rand = new Random();

            public static int totalRemainder_n = 0;
            public static int totalReceived = 0;
            public static int totalIssued = 0;
            public static int totalRemainder_k = 0;

            public string name;
            public int remainder_n;
            public int received;
            public int issued;
            public int remainder_k;

            public void setValues(string name, int remainder_n, int received, int issued)
            {
                this.name = name;
                this.remainder_n = remainder_n;
                this.received = received;
                this.issued = issued;
                remainder_k = remainder_n + received - issued;

            }

            public void printValues(int i)
            {
                Console.Write(i + "\t\t" + name + "\t\t\t\t" + remainder_n + "\t\t" + "" + received + "\t\t" + "" + issued + "\t\t" + "" + remainder_k);
                Console.WriteLine();
            }

        }

        static void Main(string[] args)
        {

            Console.WriteLine("Введите кол-во складов: ");
            int N = Convert.ToInt32(Console.ReadLine());
            warehouse[] scald = new warehouse[N];

            string _name;
            int _remainder_n, _received, _issued;
            for (int i = 0; i < scald.Length; i++)
            {
                scald[i] = new warehouse();
                Console.WriteLine("Введите склад: ");
                _name = Console.ReadLine();
                Console.WriteLine("Введите остаток на начало периода: ");
                _remainder_n = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Введите кол-во полученого: ");
                _received = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Введите кол-во выданого: ");
                _issued = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("");
                scald[i].setValues(_name, _remainder_n, _received, _issued);
                warehouse.totalRemainder_n += scald[i].remainder_n;
                warehouse.totalReceived += scald[i].received;
                warehouse.totalIssued += scald[i].issued;
                warehouse.totalRemainder_k += scald[i].remainder_k;
            }

            Console.WriteLine("№ з/п" + "\t\t" + "Склад" + "\t\t\t\t" + "Остаток" + "\t\t" + "Полученно" + "\t" + "Выдано" + "\t\t"
                + "Остаток на конец");

            for (int i = 0; i < scald.Length; i++)
            {
                scald[i].printValues(i + 1);
            }

            Console.WriteLine("\t\t" + "Общее количество: " + "\t\t" + warehouse.totalRemainder_n + "\t\t" +
                warehouse.totalReceived + "\t\t" + warehouse.totalIssued + "\t\t" + warehouse.totalRemainder_k);
        }
    }
}
