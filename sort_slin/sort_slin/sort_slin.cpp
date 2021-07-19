//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	const int n = 5;
//	int a[n];
//	int s = 0;
//	int a, l, r;
//	int mid;
//	cout << "Введите числа: " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	if(l==r)
//		mid = (l + r) / 2;
//	int i = l;  
//	int j = mid + 1;
//	for (int step = 0; step < r - l + 1; step++)
//	{
//		if ((j > r) || ((i <= mid) && (a[i] < a[j])))
//		{
//			a[step] = a[i];
//			i++;
//		}
//		else
//		{
//			a[step] = a[j];
//			j++;
//		}
//	}
//	// переписываем сформированную последовательность в исходный массив
//	for (int step = 0; step < r - l + 1; step++)
//		a[l + step] = a[step];
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << '\t';
//		cout << endl;
//	}
//
//}


#include <iostream>

using namespace std;

//функция, сливающая массивы
void Merge(int* A, int first, int last)
{
	int middle, start, final, j;
	int* mas = new int[100];
	middle = (first + last) / 2; //вычисление среднего элемента
	start = first; //начало левой части
	final = middle + 1; //начало правой части
	for (j = first; j <= last; j++) //выполнять от начала до конца
		if ((start <= middle) && ((final > last) || (A[start] < A[final])))
		{
			mas[j] = A[start];
			start++;
		}
		else
		{
			mas[j] = A[final];
			final++;
		}
	//возвращение результата в список
	for (j = first; j <= last; j++) A[j] = mas[j];
	delete[]mas;
};
//рекурсивная процедура сортировки
void MergeSort(int* A, int first, int last)
{
	{
		if (first < last)
		{
			MergeSort(A, first, (first + last) / 2); //сортировка левой части
			MergeSort(A, (first + last) / 2 + 1, last); //сортировка правой части
			Merge(A, first, last); //слияние двух частей
		}
	}
};
//главная функция
void main()
{
	setlocale(LC_ALL, "Rus");
	int i, n;
	int* A = new int[100];
	cout << "Размер массива > "; cin >> n;
	for (i = 1; i <= n; i++)
	{
		cout << i << " элемент > "; cin >> A[i];
	}
	MergeSort(A, 1, n); //вызов сортирующей процедуры
	cout << "Упорядоченный массив: "; //вывод упорядоченного массива
	for (i = 1; i <= n; i++) cout << A[i] << " ";
	delete[]A;
	system("pause>>void");
}