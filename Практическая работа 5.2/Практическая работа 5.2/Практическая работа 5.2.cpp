#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    double b, m, n, x, y;
    cout << "Введите: b, m, n, x" << endl;
    cin >> b;
    cin >> m;
    cin >> n;
    cin >> x;
    if (abs(b * m) > x * x)
        y = sin(b * m + cos(n * x));
    if (abs(b * m) < x * x)
        y = cos(b * m - sin(x));
    if (abs(b * m) <= x * x)
        y = sqrt(exp(abs(cos(x))) + sqrt(abs(b * m * x)));
    cout << y << endl;
 }