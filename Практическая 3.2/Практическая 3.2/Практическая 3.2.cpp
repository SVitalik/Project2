#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void main()
{
    system("cls");
    setlocale(LC_ALL, "RUS");
    double x, a, b, y;
    cout << "Введите значение x,a,b: " << endl;
    cout << "x = ";
    cin >> x;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    y = (a * x + b) / (pow(log((b * x)), 2)) + sqrt(a);
    cout << "Результат y = " << y << endl;
    int ch = _getch();
}
