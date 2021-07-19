#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int const w = 7;
    double m[w] = { -6, 12, 3, -2, 16, 5, 6 };
    double s = 0, d = 0;
    cout << "Елементы меньше 4: " << endl;
    for (int i = 0; i < w; i++)
    {
         if (m[i] < 4)
         {
              s++;
              d = m[i];
              cout << "[" << i + 1 << "] " << d  <<" = " << d * 3 << endl;

         }
        
    }
       
}


