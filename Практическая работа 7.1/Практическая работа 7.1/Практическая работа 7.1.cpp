#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
	double a, b, x, y;
	a = 4.6;
	b = 6.8;
	for (x = 1.2; x <= 3; x += 0.2)
	{
		y = b * x + a / pow(log(a * x), 2) + sqrt(b);
		cout << "x = " << setw(3) << x << setw(8) << "y = " << y << endl;
	}
}


