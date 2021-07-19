#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
    setlocale(LC_ALL, "RUS");
    const float pi = 3.14159265f;
    float h, r, s;
    cout << "Введите данные: " << endl;
    cout << "h= ";
    cin >> h;
    cout << "r= ";
    cin >> r;
    s = 2 * pi * r * (h + r);
    cout << "Объем прямого цилиндра: " << s << endl;
}