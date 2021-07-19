#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void main()
{
    system("cls");
    setlocale(LC_ALL, "RUS");
    double x, a, b, d;
    d = 299792;
    b = d*60;
    x = b * 60;
    a = x * 24;
    cout << "Растояние которое проедалевает свет за час: " << x << endl;
    cout << "Растояние которое проедалевает свет за день: " << a << endl;
    //cout << "Введите значение s: " << endl;
    //cout << "s = ";
    //cin >> s;


}