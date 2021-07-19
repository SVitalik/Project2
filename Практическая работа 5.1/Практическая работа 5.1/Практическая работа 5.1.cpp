#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    float ax, ay, bx, by, a, b;
    cout << "Начало координат (0:0)" << endl;
    cout << "Введите координаты точок А: ";
    cin >> ax >> ay;
    cout << "Введите координаты точок В: ";
    cin >> bx >> by;
    a = ax * ax + ay * ay;
    b = bx * bx + by * by;
    if (a == b)
        cout << "Они одинаково отдалены от начальной точки: " << endl;
    else if (a > b)
        cout << "точка A более отдалена, чем точка В: " << endl;
    else if (a < b)
        cout << "точка B более отдалена, чем точка A: " << endl;
}


