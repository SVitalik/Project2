#include <iostream>
#include <conio.h>
using namespace std;

int main(void)

{
    setlocale(LC_ALL, "RUS");
    int N;
    int X;
    int c1, c2, c3;
    cout << "Введите трёхзначное число: ";
    cin >> N;
    cout << "Ответ " << endl;
    c1 = N % 10;
    c2 = (N % 100 - c1) / 10;
    c3 = (N - N % 100) / 100;
    if (N > 99) { X = c1 * 10 + c2 * 100 + c3; }

    if ((N > 9) && (N < 100)) { X = c1 * 10 + c2; }
    if (N < 10) { X = c1; }
    cout << X << "  " << endl;
}

