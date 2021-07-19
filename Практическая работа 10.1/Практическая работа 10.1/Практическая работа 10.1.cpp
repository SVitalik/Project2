#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
    const int N = 11;
    int a[N];    
    int i;
    float sum, avrg;
    srand(time(0));
    sum = 0;
    for (i = 0; i < N; i++) 
    {
        a[i] = rand() % 100;
        printf("%3d", a[i]);
        sum += a[i];
    }
    printf("\n");
    avrg = sum / N;
    printf("%.2f\n", avrg);
    for (i = 0; i < N; i++)
        if (a[i] > avrg) printf("%3d", a[i]);
    printf("\n");
    
}
