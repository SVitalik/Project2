#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    setlocale(LC_ALL, "RUS");
    int x = 0, y = 0;
    double k[14];
    for (int i = 0; i < 14; i++)
    {
        cin >> k[i];
    }
    for (int a = 0; a < 14; a++)
    {
        if (k[a] < x)
        {
            y++;
        }
        else
        {
            x = k[a];
        }
    }
    cout << endl;
    if (y <= 0)
    {
        cout << "Упорядкований" << endl;
    }
    else
    {
        cout << "Не упорядкований" << endl;
    }
    cout << endl;
    cout << endl;
}

