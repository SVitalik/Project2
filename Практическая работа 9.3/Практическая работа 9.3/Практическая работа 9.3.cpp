#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
using namespace std;


int main()
{
    setlocale(LC_ALL, "RUS");
    double c = 0, sar = 0, sge = 0;
    double D[13] = { 5, -6, 24, -9.8, 15.3, 45, -6.23, 7, 2, -7, 54.1, 12.2, -23 };
    for (int i = 0; i < 13; i++)
    {
        if (D[i] > 0)
        {
            c++;
            sar += D[i];
            sge *= D[i];
        }
    }
    sar /= c;
    sge = pow(sge, 1.0 / c);
    cout << "Средне арифметические елементи: " << sar << endl << "Средне геометрические елементи:" << sge << endl;
}

