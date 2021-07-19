#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "rus");
    int n = 0, m = 0;
    int i, j;
    cout << "Введите масив: " << endl;
    cin >> n;
    cin >> m;
    cout << endl;
    cout << "Масив А: " << endl;
    int** A = new int* [n];
    for (i = 0; i < n; i++) 
    {
        A[i] = new int [m];
        cout << endl;
        for (int j = 0; j < m; j++)
        {
            A[i][j] = rand() % 10;
            cout << A[i][j]<<'\t';
        }
        cout << "\n";
    }
    cout << endl;
    cout << endl;
    cout << "Масив B: " << endl;
    int** B = new int* [n];
    for (i = 0; i < n; i++)
    {
        B[i] = new int[m];
        cout << endl;
        for (int j = 0; j < m; j++)
        {
            B[i][j] = rand() % 10;
            cout << B[i][j] << '\t';
        }
        cout << "\n";
    }
    cout << endl;
    cout << endl;
    cout << "Масив C: " << endl;
    int** C = new int* [n];
    for (i = 0; i < n; i++)
    {
        C[i] = new int[m];
        cout << endl;
        for (int j = 0; j < m; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << '\t';
        }
        cout << "\n";
    }
        

}


