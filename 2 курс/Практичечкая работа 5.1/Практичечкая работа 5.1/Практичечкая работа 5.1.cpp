//#include <iostream>
//#include <conio.h>
//
//using namespace std;
//
//void main()
//{
//	system("cls");
//	setlocale(LC_ALL, "RUS");
//	float a, b, r;
//	cin >> a >> b >> c;
//	if (a == b && b == c && c == a) 
//		cout << "Рівносторонній"; 
//	else 
//	{
//		if (a == b || b == c || c == a) 
//			cout << "Рівнобедрений"; 
//		else cout << "Довільний"; 
//	}
//}


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double x, y, R;
	cout << "x = "; 
	cin >> x;
	cout << "y = "; 
	cin >> y;
	cout << "R = "; 
	cin >> R;
	if (sqrt(x * x + y * y) < R) 
		cout << "Да" << endl;
	else cout << "Нет" << endl;
	system("pause");
	return 0;
}