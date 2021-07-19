#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int n, f;
    double x, s;
    cout << "Введите n = ";
    cin >> n;
    cout << "Введите x = ";
    cin >> x;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        f = 1;
        for (int j = 1; j <= i; j++)
        {
            f *= j;
        }
        s = x - pow(x, i) / f;
        cout << setw(8) << "Вычисление суммы = " << i << " = " << s << endl;
        cout << setw(8) << "Факториал " << f << endl;
    }
    cout << endl;
    cout << endl;
}

