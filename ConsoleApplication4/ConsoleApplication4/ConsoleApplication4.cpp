#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c;
	cout << "Введите трёхзначное число:" << endl;
	cin >> a;
	cout << "Введите двухзначное число:" << endl;
	cin >> b;
	cout << "Ответ: ";
	c = a + b;
	cout << " " << c << endl;

}
