#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	vector<int>mydate(rand() % 10);
	mydate.push_back(9);
	int ch = 0;
	int buffer = 0;
	vector<int>v(mydate.size() / 2);
	vector<int>v1(mydate.size() - v.size());
	cout << "Начальный вектор: ";
	for (int i = 0; i < mydate.size(); i++)
	{
		mydate[i] = rand() % 50;
		cout << mydate[i] << " ";
	}
	cout << endl;
	cout << "Первый вектор: ";
	for (int i = 0; i < v.size() + 1; i++)
	{

		cout << mydate[i] << " ";
	}
	cout << endl;
	cout << "Второй вектор: ";
	for (int i = 0; i < v1.size() + 1; i++)
	{

		cout << mydate[i] << " ";
	}

}
