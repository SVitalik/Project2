#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int const m = 17;
	int a[m];
	int i;
	float sum;
	sum = 0;
	srand(time(0));
	for (i = 0; i < m; i++)
	{
		a[i] = rand() % 100;
		sum = sum + a[i];
        cout << "[" << i << "]= "<<a[i]<<endl;
	}
	cout<<"Сумма цифр этого масива = "<<sum;

}
