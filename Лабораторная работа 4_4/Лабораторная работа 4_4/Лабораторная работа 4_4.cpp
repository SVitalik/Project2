#include <iostream>

using namespace std;



int Sum(int a)
{
    return a ? a % 10 + Sum(a / 10) : 0;
}


int main()
{
    setlocale(LC_ALL, "rus");
    int N;
    cout << "Введите число: ";
    cin >> N;
    cout<< "Результат: " <<Sum(N)<<endl;
    return 0;
}

