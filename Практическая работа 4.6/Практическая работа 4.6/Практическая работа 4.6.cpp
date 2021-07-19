#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int n;
    cout << "Введите двухзначное число" << endl;
    cin >> n;
    if (n == 37 || n == 73 || n == 33 || n == 77) cout << "Оба числа входят";
    else if (n / 10 == 7 || n % 10 == 7) cout << "входит 7 ";
    else if (n / 10 == 3 || n % 10 == 3) cout << "входит 3 ";
    if (n == 48 || n == 84 || n == 44 || n == 88) cout << "Оба числа входят";
    else if (n / 10 == 4 || n % 10 == 4) cout << "входит 4 ";
    else if (n / 10 == 8 || n % 10 == 8) cout << "входит 8 ";
    if (n == 9) cout << "число входит";
    else if (n / 10 == 9 || n % 10 == 9) cout << "входит 9";
}





