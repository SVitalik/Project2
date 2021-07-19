#include <iostream>
#include <conio.h>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(0));
    int const n = 10;
    /*int a[n];*/
    int* b = new int [n];
    int i, s = 0, min;
    double d = 1;
    cout << "Рандомный массив: " << endl;
    for (i = 0; i <= n - 1; i++)
    {
        b[i] = rand() % 101 - 50;
        cout << "A[" << i << "]= " << b[i] << endl;
    }
    cout << endl;
    min = b[0];
    cout << "Положительнные елементы: " << endl;
    for (i = 0; i <= n - 1; i++)
    {
        if (b[i] > min)
        {
            min = b[i];
        }
        if (b[i] > 0)
        {
            s += b[i];
            cout << "A[" << i << "]= " << b[i] << endl;
        }
        d *= b[i];
    }
    cout << endl;
    cout << "Максимально положительных елемент: " << min << endl;
    cout << "Произведение элементов массива: " << d << endl;
    

}
