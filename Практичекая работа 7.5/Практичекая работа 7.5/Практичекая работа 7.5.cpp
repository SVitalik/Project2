#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
    double s, c, t, ct, x;
    for (x = 0; x <= 180; x += 10)
    {
        s = sin(x * 3.14159 / 180);
        c = cos(x * 3.14159 / 180);
        t = tan(x * 3.14159 / 180);
        ct = 1 / t;
        cout << "x = " << setw(4) << x << setw(8) << "sin = " << s << endl;
        cout << "x = " << setw(4) << x << setw(8) << "cos = " << c << endl;
        cout << "x = " << setw(4) << x << setw(8) << "tan = " << t << endl;
        cout << "x = " << setw(4) << x << setw(8) << "ctg = " << ct << endl;
        cout << endl;
    }
}

