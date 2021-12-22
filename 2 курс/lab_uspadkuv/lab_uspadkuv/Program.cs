//Є відношення спадкування: персона(Person) – базова абстракція,
//італієць (Italian) та українець (Ukranian) – похідні класи.
//Person має методи PrintCountryName() (надрукувати назву держави) та
//Speak() (говорити деякою мовою). Кожний із похідних класів перевизначає
//методи PrintCountryName(), Speak() базової абстракції.
//Розробити консольну програму, яка використовує принцип
//поліморфізму для виведення текстових повідомлень щодо назви держави та
//рідної мови італійця й українця.

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_uspadkuv
{
    class Program
    {
        abstract class Person
        {
            public abstract void PrintCountryName();
            public abstract void Speak();
        }
        class Ukranian : Person
        {
            public override void PrintCountryName()
            {
                Console.WriteLine("Держава Украина");
            }

            public override void Speak()
            {
                Console.WriteLine("Добрий день");
            }
        }

        class Italian : Person
        {
            public override void PrintCountryName()
            {
                Console.WriteLine("Держава Италия");
            }

            public override void Speak()
            {
                Console.WriteLine("Ciao");
            }
        }

        static void Main(string[] args)
        {
            Italian italian = new Italian();
            Ukranian ukranian = new Ukranian();
            italian.PrintCountryName();
            ukranian.PrintCountryName();
            italian.Speak();
            ukranian.Speak();
        }
    }
}
