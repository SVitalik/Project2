#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int const M = 8;
    double x[M] = { 1.2, 2.34, 3.7, 4.9, 6, 7.35, 9.55, 10.8 };
    double y[M];
    double max, min;
    for (int i = 0; i < 8; i++)
    {
        y[i] = (sin(pow(x[i], 2) - 4 * x[i]) / pow(0.66 * log(3 * x[i]), 2) + 2 / x[i]);
        cout << setw(15) << "x = " << x[i];
        cout << setw(20) << "y = " << y[i] << endl;
    }

    min = y[0];
    for (int i = 0; i < 8; i++)
    {
        if (y[i] < min)
        {
            min = y[i];
        }
    }
    cout << endl;
    cout << endl;

    cout << setw(25) << "min = " << min << endl;
    max = y[0];
    for (int i = 0; i <= M - 1; i++)

    {
        if (y[i] > max)
        {
            max = y[i];
        }
    }
    cout <<setw(25)<< "max = " << max << endl;

}


