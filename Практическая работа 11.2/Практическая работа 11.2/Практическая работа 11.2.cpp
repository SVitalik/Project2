#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    const int m = 4;
    int mass[m][m] = { 0 };
    int r = 0, p = 0;
    while (r < m)
    {
        //Вправо
        for (int i = r; i < m - r - 1; i++)
        {
            p++;
            mass[r][i] = p;
        }

        //Вниз
        for (int i = r; i < m - r - 1; i++)
        {
            p++;
            mass[i][m - r - 1] = p;
        }

        //Влево
        for (int i = m - r - 1; i > r; i--)
        {
            p++;
            mass[m - r - 1][i] = p;
        }

        //Вверх
        for (int i = m - r - 1; i > r; i--)
        {
            p++;
            mass[i][r] = p;
        }

        r++;
    }

    if (m % 2 != 0)
    {
        mass[(int)(m - 1) / 2][(int)(m - 1) / 2] = ++p;
    }

    cout << "Вивод масива: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mass[i][j] << "\t";
        }
        cout << endl;
    }
}








//#include <iostream>
//#include <math.h>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//    const int m = 5;
//    int a[m][m] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
//    double a, s = 0, N = 0;
//    for (int i = 0; i < m; i++)
//    {
//        if
//    }
//}
//

