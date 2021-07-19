#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    double d, pi = 3.1415;
    cout << "Введите длину: " << endl;
    cin >> d;
    double& a = d;
    cout <<"Площадь круга " << (a * a) / (4 * pi) << endl;
}

