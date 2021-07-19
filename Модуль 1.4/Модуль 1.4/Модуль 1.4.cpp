#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char indikator = 'n';
    double x, y, y3;
    for (;;)
    {
        setlocale(LC_ALL, "RUS");
        cout << "Введите x,y" << endl;
        cin >> x >> y;
        y3 = x * x;
        if ((x <= 0 && y <= abs(x) && y >= y3) || (x > 0 && y <= x && y >= y3))
            cout << "Да " << endl;
        else
            cout << "Нет " << endl;
        cout << "Еще? " << endl;
        cin >> indikator;
        if (indikator == 'n' || indikator == 'N')
            break;

    }

}
