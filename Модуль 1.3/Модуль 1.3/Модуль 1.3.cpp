#include <iostream>
using namespace std;

void main()
{
	system("cls");
	setlocale(LC_ALL, "RUS");
	double ch1, ch2, ch3;
	cout << "Введите первое число ";
	cin >> ch1;
	cout << "Введите второе число ";
	cin >> ch2;
	cout << "Введите третье число ";
	cin >> ch3;
	if (ch1 > 0)
		cout << "Первое число больше 0, результат =" << ch1 * ch1 << endl;
	else if (ch1 < 0)
		cout << "Первое число меньше 0, результат =" << ch1 / 2 << endl;
	else 
		cout << "Первое число равно 0" << endl;
	if (ch2 > 0)
		cout << "Второе число больше 0, результат =" << ch2 * ch2 << endl;
	else if (ch2 < 0)
		cout << "Второе число меньше 0, результат =" << ch2 / 2 << endl;
	else
		cout << "Второе число равно 0" << endl;
	if (ch3 > 0) 
		cout << "Третье число больше 0, результат =" << ch3 * ch3 << endl;
	else if (ch3 < 0)
		cout << "Третье число меньше 0, результат =" << ch3 / 2 << endl;
	else
		cout << "Третье число равно 0" << endl; system("pause");
}