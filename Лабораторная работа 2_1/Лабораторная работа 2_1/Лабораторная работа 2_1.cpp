#include <iostream>
#include <string>


using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    const int MAX(100);
    char mass[MAX];
    int i, c = 0, s = 0;
    cout << "Введите текст: " << endl;
    cin.getline(mass, 100);
    for (i = 0; mass[i] != '\0'; i++)
        if (mass[i] != ' ' && s == 0) 
        {
            c += 1;
            s = 1;
        }
        else
            if (mass[i] == ' ') 
                s = 0;
    cout << endl;
    cout <<"Предложение состоит из: "<< c <<" слов.";
}