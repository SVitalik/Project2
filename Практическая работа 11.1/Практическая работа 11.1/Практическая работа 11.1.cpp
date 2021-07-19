#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    srand(time(0));
    const int n = 5;
    const int m = 6;
    double sum = 0;
    int a[n][m], b[n][m] = { 0 }, k = 0;
    for (int str = 0; str < n; str++)
    {
        for (int stlb = 0; stlb < m; stlb++)
        {
            a[str][stlb] = rand() % 100;
            cout << setw(4) << a[str][stlb];
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    for (int str = 0; str < n; str++)
    {
        for (int stlb = 0; stlb < m; stlb++)
        {
            if (a[str][stlb] > 0)
                sum += a[str][stlb];

        }
        cout << "Sum " << str + 1 << ": " << sum / m << endl;
    }

}

