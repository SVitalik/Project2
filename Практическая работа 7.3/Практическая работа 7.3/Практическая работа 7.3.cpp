#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    double pi, a, x, y;
    pi = 3.14159;
    a = 1;
    x = 2;
    y = 0;
    for (x = 2; pi - y >= 0.001; x++)
    {
        a = a + 1 / (pow(x, 2));
        y = sqrt(6 * a);
        cout << "x = " << setw(4) << x << setw(8) << "y = " << y << endl;
    }
}

