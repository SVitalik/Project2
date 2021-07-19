#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int const n = 10;
    int A[n];
    int i, s = 0, d = 0, max;
    int* b = A;
    for (i = 0; i <= n - 1; i++)
    {
        cout << "A[" << i << "]= ";
        cin >> b[i];
    }
    max = b[0];
    cout << "Положительнные елементы: " << endl;
    for (i = 0; i <= n - 1; i++)
    {
        if (b[i] < max)
        {
            max = b[i];
            d += b[i];
        }
        if (b[i] > 0)
        {
            s += b[i];
            cout << "A[" << i << "]= " << b[i] << endl;
        }
    }
    cout << "Максимально отрицательный елемент: "<< max << endl;
    cout << "Сумма отрицательных елементов масива: " << d << endl;


}

