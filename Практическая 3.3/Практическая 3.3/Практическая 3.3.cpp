#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void main()
{
    system("cls");
    setlocale(LC_ALL, "RUS");
    double a, b, x, y1, y2;
    cout << "Введите значение a,b,x: " << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "x = ";
    cin >> x;
    y1 = (pow(cos(a * x),2));
    y2 = (pow(log(b * x - a), 2)) / (exp(-(x / b)));
    cout << "Результат y1 = " << y1 << endl;
    cout << "Результат y2 = " << y2 << endl;
    int ch = _getch();


}