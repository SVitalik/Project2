#include <iostream>
using namespace std;

void main()
{
	system("cls");
	setlocale(LC_ALL, "RUS");
	double s, r;
	cout << "Введите стоимость покупки: ";
	cin >> s;
	r = s * 0.90;
	if (s > 1000)
		cout << "Стоимость с учетом скидки = " << r << endl;
	else if (r = s)
		cout << "Скидка не действует" << endl << "Без учета скидки = " << r << endl; system("pause");

}