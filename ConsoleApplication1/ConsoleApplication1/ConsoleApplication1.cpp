#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
    setlocale(LC_ALL, "RUS");
    const float pi = 3.14159265f;
    float h, r, v;
    cout << "Введите данные: " << endl;
    cout << "h= ";
    cin >> h;
    cout << "r= ";
    cin >> r;
    v = pi * (r * r) * h;
    cout << "Площадь поверхности прямого целиндра: " << v << endl;
}


