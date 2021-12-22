using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace modul_2_2
{
    abstract class Body
    {
        public abstract double Area();
        public abstract double Volume();
        public abstract void Display();
        public abstract void Display2();
    }

    class Parallelepiped : Body
    {
        public double Width { get; set; }
        public double Height { get; set; }
        public double Length { get; set; }

        public Parallelepiped(double width, double height, double length)
        {
            this.Width = width;
            this.Height = height;
            this.Length = length;
        }

        public override double Area()
        {
            return 2 * Width * Height + Height * Length + Length * Width;
            
        }
        public override double Volume()
        {
            return Width * Height * Length;
        }
        public override void Display2()
        {
            //Area();
        }
        public override void Display()
        {
            Console.WriteLine("Введите значение для вычисление объема прямоугольного паралелипипета: ");
            int w = Convert.ToInt32(Console.ReadLine());
            int h = Convert.ToInt32(Console.ReadLine());
            int l = Convert.ToInt32(Console.ReadLine());
            Volume();
        }
    }
    class Cone : Body
    {
        public double Width { get; set; }
        public double Height { get; set; }
        public double Length { get; set; }

        public Cone(double width, double height, double length)
        {
            this.Width = width;
            this.Height = height;
            this.Length = length;
        }

        public override double Area()
        {
            return Math.PI * Width * Height;

        }
        public override double Volume()
        {
            return Math.PI * Height * Height * Length / 3;
        }
        public override void Display2()
        {
            Console.WriteLine("Введите значение для вычисление площади конуса: ");
            int w = Convert.ToInt32(Console.ReadLine());
            int h = Convert.ToInt32(Console.ReadLine());
            Area();
        }
        public override void Display()
        {
            Console.WriteLine("Введите значение для вычисление объема конуса: ");
            //int w = Convert.ToInt32(Console.ReadLine());
            int h = Convert.ToInt32(Console.ReadLine());
            int l = Convert.ToInt32(Console.ReadLine());
            Volume();
        }
    }
    class Ball : Body
    {
        public double Width { get; set; }

        public Ball(double width)
        {
            this.Width = width;
            //this.Height = height;
            //this.Length = length;
        }

        public override double Area()
        {
            return 4 * Math.PI * Width * Width;

        }
        public override double Volume()
        {
            return (4 / 3) * Math.PI * Math.Pow(Width, 3);
        }
        public override void Display2()
        {
            Console.WriteLine("Введите значение для вычисление площади шара: ");
            int w = Convert.ToInt32(Console.ReadLine());
            Area();
        }
        public override void Display()
        {
            Console.WriteLine("Введите значение для вычисление объема шара: ");
            int w = Convert.ToInt32(Console.ReadLine());
            Volume();
        }
    }

    class Series
    {
        int[] M;

    }

    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введите значение для вычисление площади прямоугольного паралелипипета: ");
            int w = Convert.ToInt32(Console.ReadLine());
            int h = Convert.ToInt32(Console.ReadLine());
            int l = Convert.ToInt32(Console.ReadLine());
            Parallelepiped parallelepiped = new Parallelepiped(w, h, l);
            Console.WriteLine(parallelepiped.Area());
            parallelepiped.Display();
            Console.WriteLine(parallelepiped.Volume());
            Cone cone = new Cone(w, h, l);
            cone.Display2();
            Console.WriteLine(cone.Area());
            cone.Display();
            Console.WriteLine(cone.Volume());
            Ball ball = new Ball(w);
            ball.Display2();
            Console.WriteLine(ball.Area());
            ball.Display();
            Console.WriteLine(ball.Volume());
        }
    }
}
