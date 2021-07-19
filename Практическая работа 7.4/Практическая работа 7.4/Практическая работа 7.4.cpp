#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;



int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b, x;
    a = 0;
    b = 1;
    cout << "Введите число х: " << endl;
    cin >> x;
    while (x != 0)
    {
        a = a + x;
        b = b * x;
        cin >> x;
    }
    cout << "Сумма = " << a << endl;
    cout << "Добуток = " << b << endl;
}

