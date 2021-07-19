#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double y = 1, n = 0, s = 0.0, e = 0.0;
	cout << "Введите n, e: ";
	cin >> n >> e;
	for (int i = 2, st = 2; i > 0; i++, st += 1)
	{
		s = pow(n, st) / (i * (i + 2));
		y += s;
		cout <<" e = " << e << "\ts = " << s << endl;
		if (y > e)break;
	}
	cout << "y = " << y;
}

















//#include <iostream>
//#include <math.h>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//    srand(time(0));
//    const int n = 5;
//    const int m = 6;
//    double sum = 0;
//    int a[n][m], b[n][m] = { 0 }, k = 0;
//    for (int str = 0; str < n; str++)
//    {
//        for (int stlb = 0; stlb < m; stlb++)
//        {
//            a[str][stlb] = rand() % 200 - 100;
//            cout << setw(4) << a[str][stlb];
//        }
//        cout << endl;
//    }
//    cout << endl;
//    cout << endl;
//    for (int str = 0; str < n; str++)
//    {
//        for (int stlb = 0; stlb < m; ++stlb)
//        {
//            if (a[n][m] > 0) && (a[str][stlb] % 3 == 0) || (a[i][j] % 5 == 0))
//            /*if (a[str][stlb] % 2 == 3 || 5)*/
//                sum = a[str][stlb];
//
//        }
//           
//        cout << "Sum" << sum << ": "<< endl;
//    }
//
//}








//#include <iostream>
//#include <conio.h>
//using namespace std;
//
//void main()
//{
//	int a[20]{};
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "vvedite " << i << "-i element:" << endl;
//		cin >> a[i];
//	}
//	for (int j = 0; j < 4; j++)
//	{
//		cout << "vvedite" << j << "-j element:" << endl;
//		cin >> a[j];
//	}
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 4; j++)
//			count = 0;
//		if (a[i][j] > 0) && (a[i][j] % 3 == 0) || (a[i][j] % 5 == 0))
//		count++;
//		b[i] = count;
//		count = 0;
//	}
//}