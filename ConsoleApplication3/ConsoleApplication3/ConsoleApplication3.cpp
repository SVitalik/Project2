#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
    setlocale(LC_ALL, "RUS");
    int b = 20000, c = 5, d = 12, e = 1;
    float a;
    float f = 0.12;
    a = b * (e + f) / c;
    cout << "Размер выплат: ";
    int ch = _getch();
    cout << "" << a << " гривень." << endl;

    
}
