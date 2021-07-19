#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;


void main()
{
    system("cls");
    setlocale(LC_ALL, "RUS");
    double x, y, h, z;
    cout << "Введите значение x, y, h: " << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "h = ";
    cin >> h;
    z = ((h * h * pow(tan(x), 4) - 3 * (cos(y), 2) /
        (exp(x) + exp(y))) + (log(2)) * (abs(2 * h * pow(x, 3))) - (3 * (h, 2)) * (x + y) /
            (3 - (sin(x)) - (cos(y)) + 3) + (cos(h * x)) * (1 + (tan(y))));
    cout << "Результат z = " << z << endl;
    int ch = _getch();
}
