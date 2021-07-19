#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, x, y;
    a = 2.8;
    b = 0.015;
    for (x = 4.5; x <= 48; x += 5.2)
    {
        if (log(x) > a)
        {
            y = (sqrt(pow(a, 2) + x) / exp(b * x) - a);
            cout << "x = " << setw(4) << x << setw(8) << "y = " << y << endl;
        }
        else if (log(x) <= a)
        {
            y = sqrt(pow(log(x), 5) + pow(log(a), 3));
            cout << "x = " << setw(4) << x << setw(8) << "y = " << y << endl;

        }
    }
}

