//#include <iostream>
//
//using namespace std;
//
//int a(int n, int m)
//{
//    return n == 0 ? m + 1 : a(n - 1, m == 0 ? 1 : a(n, m - 1));
//}
//
//int main(void)
//{
//    setlocale(LC_ALL, "rus");
//    int n, m;
//    cout << "Введите число n: ";
//    cin >> n;
//    cout << "Введите число m: ";
//    cin >> m;
//    cout << a(n, m) << endl;
//    return 0;
//}




#include <iostream>

using namespace std;

int a(int n, int m)
{
    if (n != 0 && m == 0)
    {
        return a(n - 1, 1);
    }
    else if (n > 0 && m > 0)
    {
        int result = a(n, m - 1);
        return a(n - 1, result);
    }
    return m + 1;
}

int main(void)
{
    setlocale(LC_ALL, "rus");
    int n, m;
    cout << "Введите число n: ";
    cin >> n;
    cout << "Введите число m: ";
    cin >> m;
    cout << a(n, m) << endl;
    return 0;
}