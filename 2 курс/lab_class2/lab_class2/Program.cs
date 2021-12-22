using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_class2
{
    class Hero
    {
        private int Age;
        private string Name;
        private readonly bool Alive;
        // Конструктор
        public Hero(int Age, string Name)
        {
            this.Age = Age; 
            this.Name = Name;
            Alive = true;
        }
        public int GetAge() { return Age; }
        public string GetName() { return Name; }
        public bool IsAlive() { return Alive; }
        //public static void Hobby() { }
        //public void Talk() { }

        //public class FairyTale
        //{
        //    public static void Main()
        //    {
        //  // Створення об'єкта класу Hero
        //        Hero LittleHero = new Hero(19, "Student");
        //        Console.WriteLine(LittleHero.GetName() + ", " +
        //        LittleHero.GetAge() + ", " + LittleHero.IsAlive());
        //    }
        //}
    }

    class Program
    {
        static void Main(string[] args)
        {
            int n = 2;
            Hero[] LittleHero = new Hero[2];
            for (int i = 0; i < n; i++)
                LittleHero[i] = new Hero(19, "Student");

            //Hero LittleHero = new Hero(19, "Student");
            //Console.WriteLine(LittleHero.GetName() + ", " +
            //LittleHero.GetAge() + ", " + LittleHero.IsAlive());
        }
    }
}
