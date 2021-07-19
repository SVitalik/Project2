#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;


void main()
{
    system("cls");
    setlocale(LC_ALL, "RUS");
    double a, b, x, z, f;
    cout << "Введите значение a,b,x,z: "<<endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "x = ";
    cin >> x;
    cout << "z = ";
    cin >> z;
    f = (a * pow(sin(abs(b * x)), 2) - sqrt(24 * z)) /
        (pow(-x + 13, 1 / 3) - b * log(z * z + 4));
    cout << "Результат f = " << f << endl;
    int ch = _getch();
}