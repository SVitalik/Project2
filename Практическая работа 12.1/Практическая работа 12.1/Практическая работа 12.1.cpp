#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	system("cls");
	
	int const M=4; 
	int const N=4; 
	int a[M][N]={{1, 3, -8, 0},  
		{-4, 6, 2,-5},  
		{3, 7, 0, 6},
		{-3, 9, 11, -2}};

	int i,j;       
	int s = 0;

	cout<<"Вихідна матриця"<<endl;
	for (i=0;i<M;i++)
	{
         for (j = 0; j < N; j++) 
	     cout << a[i][j] << " ";
         cout << endl; 
	}
	cout << "Перетворена матриця" << endl;
	for (i = 0; i < M; i++) 
	{ 
		for (j = 0; j < N; j++) 
		{ 
			s++;
			a[i][j] /= 4;
		    cout << a[i][j] << " ";
		}
		cout << endl;
		
	}
	system("pause");
}