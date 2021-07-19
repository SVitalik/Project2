#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int const n = 10;
    int A[n];
    int i;
    int s = 0, d = 0, f = 0, g = 0;
    for (i = 0; i <= n - 1; i++)
    {
        cout << "A[" << i << "]= ";
        cin >> A[i];
    }
    cout << " Количеству отрицательных элементов, кратных 3 или 7: " << endl;
    for (i = 0; i <= n - 1; i++)
    {
            if (A[i] % 3 == 0)
            {
                d++;
                cout << "кратных на 3 A[" << i << "]" << endl;

                if (A[i] % 7 == 0)
                {
                    s++;
                    cout << "кратных на 7 A[" << i << "]" << endl;

                }
            }
    }
    cout << " Количеству сумме положительных элементов, кратных 4 или 5: " << endl;
    for (i = 0; i <= n - 1; i++)
    {
        if (A[i] % 4 == 0)
        {
            f++;
            cout << "кратных на 4 A[" << i << "]" << endl;

            if (A[i] % 5 == 0)
            {
                g++;
                cout << "кратных на 5 A[" << i << "]" << endl;

            }
        }
    }
}

