//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	vector<double> mass;
//	int buffer[8];
//	vector<int>mydate(8);
//	cout << "Введите масив восемь двухзначных чисел: " << endl;
//	for (int i = 0; i < 8; i++)
//	{
//		cout << "chislo" << "[" << i + 1 << "] ";
//		cin >> buffer[i];
//	}
//
//	for (int i = 0; i < 8; i++)
//	{
//		mydate[i] = buffer[i] % 10;
//		cout << mydate[i] << endl;
//	}
//	return 0;
//}


#include <iostream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	vector<int>mydate;
	int ch = 0;
	int buffer = 0;
	cout << "Введите масив, для остановки введите 0" << endl;
	do {
		cout << "chislo" << "[" << ch + 1 << "] ";
		cin >> buffer;
		mydate.push_back(buffer);
		ch++;
	} while (buffer != 0);
	cout << endl;
	for (int i = 0; i < ch; i++)
	{
		cout << mydate[i] % 10 << endl;
	}
}