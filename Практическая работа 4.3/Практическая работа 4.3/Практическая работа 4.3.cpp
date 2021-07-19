#include <iostream>
using namespace std;

void main()
{
	system("cls");
	setlocale(LC_ALL,"RUS");
	double stoim, res;
	cout<<"Введите стоимость покупки: ";
	cin>>stoim;
	res = stoim * 0.85;
	if (stoim > 2000)
		cout << "Стоимость с учетом скидки = " <<res<< endl;
	else if (res = stoim)
		cout << "Скидка не действует" << endl << "Без учета скидки = " << res << endl; system("pause");
	    
}