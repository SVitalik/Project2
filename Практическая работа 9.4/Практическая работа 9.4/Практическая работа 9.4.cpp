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
    cout << " Количеству парных элементов, кратных 3: " << endl;
    for (i = 0; i <= n - 1; i++)
    {
        if (A[i] % 3 == 0)
        {
            d++;
            cout << "кратных на 3 A[" << i << "]" << endl;
        }
    }
}