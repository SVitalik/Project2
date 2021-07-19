#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void main()
{
    system("cls");
    setlocale(LC_ALL, "RUS");
    double x,a;
    cout << "Введите значение x: " << endl;
    cout << "x = ";
    cin >> x;
    a = (sin(x) - cos(pow(x, 3)))*(sin((x * x - 4,2)) + 4,27);
    cout << "Результат a = " << a << endl;
    int ch = _getch();
}

//(pow(sin(x) - cos(x), 3 * sin))* (x* x - 4, 2) + 4, 27;