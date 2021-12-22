#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	const int MAX(100);
	char mass[MAX];
	cout << "Введите текст: " << endl;
	cin.getline(mass, 100);
	char MaS = mass[0];
	mass[0] = mass[strlen(mass) - 1];
	mass[strlen(mass) - 1] = MaS;
	/*swap(mass[0], mass[strlen(mass) - 1]);*/
	cout << mass;
}