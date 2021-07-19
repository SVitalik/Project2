#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    double x, a, b, c, y;
    cout << "Введите: a, b, c, x" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> x;
    if (x < a)
        y = c * sin(b * b * x) + b * log(c * x + a);
    if (a <= x <= b)
        y = a + log(b * x) - pow(sin(a + c * x), 2);
    if (x >= b)
        y = sqrt(abs(cos(a + b * x) + c * x * x));
    cout << y << endl;
}
    /* for
    {
        if (x < a) 
            y = c * sin(b * b * x) + b * log(c * x + a);
    }
        if (a <= x <= b);
            y = a + log(b * x) - pow(sin(a + c * x), 2);
        if (x >= b); 
            y = sqrt(abs(cos(a + b * x) + c * x * x));
    }*/

//if(x < a)
//y = c * sin(b*b*x) + b * log(c*x+a);
//if (a <= x <= b)
//y = a + log(b * x) - pow(sin(a + c * x), 2);
//if (x >= b)
//y = sqrt(abs(cos(a + b * x) + c * x * x));