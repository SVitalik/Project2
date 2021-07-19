#include <iostream>
#include <math.h>
#include <iomanip>
#include <conio.h>
#include <string>
using namespace std;


int main()
{
    double x, y, e;
    for (x = -5; x <= 10; x += 0.2)
    {
        if (x > 12.5)
        {
            y = pow(x, 2) - 3 * x + 2.5 * pow(x, 2);
            cout << setw(12) << "x = " << x;
            cout << setw(12) << "y = " << y << endl;
        }
        else if (0 <= x <= 1)
        {
            y = exp(x) + 5 + cos(0.001 * x);
            cout << setw(12) << "x = " << x;
            cout << setw(12) << "y = " << y << endl;
        }
        else if (x < 12.5)
        {
            y = pow(x, 2);
            cout << setw(12) << "x = " << x;
            cout << setw(12) << "y = " << y << endl;
        }
    }
}


