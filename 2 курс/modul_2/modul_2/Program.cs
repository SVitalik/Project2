using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace modul_2
{
    namespace ConsoleApplication1
    {
        class A
        {
            public void WriteMessage()
            {
                Console.Write("A.Write ");
            }
        }

        class B : A
        {
            public new void WriteMessage()
            {
                Console.Write("B.Write ");
            }
        }

        class C : B
        {
            public new void WriteMessage()
            {
                Console.Write("C.Write ");
            }
        }
        class Program
        {
            static void Main(string[] args)
            {
                A x = new B();
                x.WriteMessage();
                x = new C();
                x.WriteMessage();
            }
        }
    }
}
