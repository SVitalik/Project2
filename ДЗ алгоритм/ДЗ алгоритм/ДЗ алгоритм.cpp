//#include <iostream>
//#include <conio.h>
//#include <math.h>
//
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "rus");
//    int a, b, c;
//    double y1, y2, x1, x2, x3, x4, d;
//    cout << "Введите a,b,c: " << endl;
//    cin >> a;
//    cin >> b;
//    cin >> c;
//    d = (b * b) - 4 * a * c;
//    if (d < 0)
//    {
//        cout << "Действий решений нет" << endl;
//    }
//    else if (d > 0)
//    {
//        y1 = -b - sqrt(d) / 2 * a;
//        y2 = -b + sqrt(d) / 2 * a;
//        cout << "у1 =1 " << y1 << endl;
//        cout << "у2 =2 " << y2 << endl;
//    }
//    if (y1 < 0 && y2 < 0)
//    {
//        cout << "Действий решений нет" << endl;
//    }
//    if (y1 >= 0 && y2 >= 0)
//    {
//        x1 = -sqrt(y1);
//        x2 = -x1;
//        x3 = -sqrt(y2);
//        x4 = -x3;
//        cout << x1 << endl << x2 << endl << x3 << endl << x4 << endl;
//    }
//    if (y1 >= 0 && y2 < 0)
//    {
//        x1 = -sqrt(y1);
//        x2 = -x1;
//        cout << x1 << endl << x2 << endl;
//    }
//    else if (y1 >= 0 && y2 > 0)
//    {
//        x1 = -sqrt(y2);
//        x2 = -x1;
//        cout << x1 << endl << x2 << endl;
//    }
//}







#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a, b, c;
    double x1, x2, y1, y2, y3, y4, d;
    cout << "Введите a,b,c: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    d = (b * b) - 4 * a * c;
    if (d < 0)
    {
        cout << "Действий решений нет" << endl;
    }
    else if (d > 0)
    {
        x1 = -b - sqrt(d) / 2 * a;
        x2 = -b + sqrt(d) / 2 * a;
        cout << "x1 =1 " << x1 << endl;
        cout << "x2 =2 " << x2 << endl;
    }
    y1 = sqrt(x1);
    y2 = -sqrt(x1);
    y3 = sqrt(x2);
    y4 = -sqrt(x2);
    if (x1 > 0 && x2 > 0)
    {
        cout << "y1 =3 " << y1 << endl;
        cout << "y2 =4 " << y2 << endl;
        cout << "y1 =5 " << y3 << endl;
        cout << "y2 =6 " << y4 << endl;
    }
    else if (x1 > 0 && y2 <= 0)
    {
        y1 = sqrt(x1);
        y2 = -sqrt(x1);
        cout << "x1 =7 " << y1 << endl;
        cout << "x2 =8 " << y2 << endl;
    }
    if (x2 > 0 && x1 <= 0)
    {
        y3 = sqrt(x2);
        y4 = -sqrt(x2);
        cout << "y3 =9 " << y3 << endl;
        cout << "y4 =0 " << y4 << endl;
    }
    else if (x2 >= 0 && x1 <= 0)
    {
        cout << "Корней нет" << endl;
    }
}

