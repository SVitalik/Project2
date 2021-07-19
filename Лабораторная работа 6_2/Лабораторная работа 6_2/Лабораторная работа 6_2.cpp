//2 1 4
#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(0));
    int n = 0, m = 0, l = 0;
    int i = 0, j = 0, k = 0;
    cout << "Введите масив: " << endl;
    cin >> n;
    cin >> m;
    cin >> l;
    //masiv a
    cout << "Массив А: " << endl;
    int** A = new int* [n];
    for (i = 0; i < n; i++)
    {
        A[i] = new int[m];
        cout << endl;
        for (int j = 0; j < m; j++)
        {
            A[i][j] = rand() % 10;
            cout << A[i][j] << '\t';
        }
        cout << "\n";
    }
    cout << endl;
    cout << endl;
    //masiv b
    cout << "Массив B: " << endl;
    int** B = new int* [m];
    for (i = 0; i < m; i++)
    {
        B[i] = new int[l];
        cout << endl;
        for (int j = 0; j < l; j++)
        {
            B[i][j] = rand() % 10;
            cout << B[i][j] << '\t';
        }
        cout << "\n";
    }
    cout << endl;
    cout << endl;   
    //masiv c
    int** C = new int* [n];
    for (i = 0; i < n; i++)
    {
        C[i] = new int[l];
    }   

    cout << "Маcсив C "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << endl;
            for (k = 0; k < l; k++) 
            {
                C[j][k] = 0;
                C[i][k] = A[i][j] * B[j][k];
                cout << C[i][k] << '\t';
            }
            cout << "\n";
        }
        cout << endl;
    }
    
}

