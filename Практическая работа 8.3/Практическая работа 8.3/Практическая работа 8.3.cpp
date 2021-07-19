#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    double y;
    for (double i = -2; i <= 2; i += 0.4)
    {
        if (i > 0)
        {
            y = pow(pow(i, 3), 1.0 / 5);
        }
        else if (i <= 0)
        {
            for (int j = 1; j <= 3; j++)
            {
                y = pow(i, 2) + j * (pow(i, j) / j);
            }
        }
        cout << setw(10) << "i = " << i;
        cout << setw(25) << "y = " << y << endl;

    }
}

