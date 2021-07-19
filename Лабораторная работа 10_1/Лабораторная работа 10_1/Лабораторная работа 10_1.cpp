#include <iostream>
#include <string>
#include <map>
#include <stack>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    map<char, char> skop{ { '(', ')' }, { '[', ']' }, { '{', '}'} };
    stack <char> stek;
    int i = 0;
    string sh;
    cout << "Введите скобочным выражением: " << endl;
    cin >> sh;
    for (i = 0; i < sh.size(); ++i)
    {
        if ('(' == sh[i] || '[' == sh[i] || '{' == sh[i])
        {
            stek.push(sh[i]);//добавить елемент в стека
        }
        else if (!stek.empty())//проверка
        {
            char d = stek.top();//новый елемент
            stek.pop();//извлечь
            if (skop[d] != sh[i])
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    if (i == sh.size() && stek.empty())
    {
        cout << "Введено правильно!" << endl;
    }
    else
    {
        cout << "Введено неправильно!" << endl;
    }
}
