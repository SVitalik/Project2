#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c, d;
	int a3, a2, a1;
	int b2, b1;
	cout << "Введите трёхзначное число:" << endl;
	cin >> a;
	cout << "Введите двухзначное число:" << endl;
	cin >> b;
	cout << "Ответ ";
	a1 = a % 10;
	a2 = (a % 100 - a1) / 10;
	b1 = b % 10;
	c = a1 + b1;
	cout << c << "  " << endl;



}
