//cstring
#include <iostream>
#include <string>
#include <cstring>


using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    const int MAX(100);
    char mass[MAX];
    char mass1[MAX];
    int i, c = 0, s = 0;
    cout << "Введите текст: " << endl;
    cin.getline(mass, 100);
    cin.getline(mass1, 100);
    cout << endl;
    cout <<mass<<" "<<mass1;
}