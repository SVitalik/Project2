#include <iostream>
#include <cmath>

using namespace std;

double fun(int a, int b);

int main()
{
    setlocale(LC_ALL, "rus");
    double y = 0.0, CHa = 0.0, CHb = 0.0;
    cout << "Введите число а: " << endl;
    cin >> CHa;
    cout << "Введите число b: " << endl;
    cin >> CHb;
    cout << "Найменьшее общее краткое: " << fun(CHa, CHb);
}


double fun(int a, int b)
{
    while (a != 0 && b != 0) {
        if (a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }
    return a + b;
}






