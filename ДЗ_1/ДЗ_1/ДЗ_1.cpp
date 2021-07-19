#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    double y;
    cout << "Введите х: " << endl;
    cin >> x;
    int* a = &x;
    y = tan(*a) + 5 * pow(*a, 3) - 4 * pow(*a, 2);
    cout << "Ответ = " << y << endl;
}

