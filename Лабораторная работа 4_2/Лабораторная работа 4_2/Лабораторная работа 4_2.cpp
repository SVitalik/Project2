#include <iostream>

using namespace std;

void func(int a, int b) 
{
	if (a < b) 
	{
		for (int i = a; i <= b; i++)
			cout << i<<endl;
	}
	else 
	{
		for (int i = a; i >= b; i--)
			cout << i << endl;
	}
}
int main() 
{
	setlocale(LC_ALL, "rus");
	int num1, num2;
	cout << "Введите число A: " << endl;
	cin >> num1;
	cout << "Введите число B: " << endl;
	cin >> num2;
	cout << endl;
	func(num1, num2);
}