#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	const int n = 100;
	int a[n];
	int s = 0;
	int i, j, c;
    cout << "Введите масив: " << endl;
	cin >> c;
	for (i = 0; i < c; i++)
	{
		cout << "Число: " << endl;
		cin >> a[i];
	}
	for (i = 1; i < c; i++)
	{
		s = a[i];
		for (j = i - 1; j >= 0 && a[j] > s; j--)
			a[j + 1] = a[j];
		a[j + 1] = s;
		
	}
	cout << endl;
	for (i = 0; i < c; i++)
	{
        cout << a[i] << '\t';
		cout << endl;
	}
	
}


