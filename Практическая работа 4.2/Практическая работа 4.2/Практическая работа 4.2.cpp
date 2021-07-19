#include <iostream>
using namespace std;

void main()
{
	system("cls");
	setlocale(LC_ALL, "RUS");
	double ch1, ch2, a, b;
	cout << "Введите первое число: ";
	cin >> ch1;
	cout << "Введите второе число: ";
	cin >> ch2;
	a = (ch1 * ch1) + (ch2 * ch2);
	b = (ch1 * ch1) + (ch1 * ch2) + (ch2 * ch1) + (ch2 * ch2);
	cout << "Сумма квадратов: " << a << endl;
	cout << "Квадрат суммы: " << b << endl;
	if (a > b)
		cout << "Сумма квадратов больше квадратов суммы "<< endl;
	else if (a < b)
		cout << "Квадрат суммы больше суммы квадратов "<< endl;
	else
		cout << "Числа равны " << endl;
}