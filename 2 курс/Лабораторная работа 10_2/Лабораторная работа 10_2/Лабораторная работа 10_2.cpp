#include <iostream>

using namespace std;

int znak(char x)
{
    if ((x = '*') || (x = '/')) return 2;
    if ((x = '+') || (x = '-')) return 1;
    if ((x = '(') || (x = ')')) return 0;
}

class stack
{
    int s;
    char ch[100];
public:
    stack() { s = 0; }
    bool empty() { return s == 0; }
    char get_s_element() { return ch[s]; }
    int s_znak() { return znak(ch[s]); }
    void push(char x)
    {
        s++;
        ch[s] = x;
    }
    char ar()
    {
        s--;
        return ch[s + 1];
    }

};

int main()
{
    setlocale(LC_ALL, "rus");
    char arv[100], vrt[100];
    int i, p = 0;
    stack s;
    cout << "Введите арифметическое выражение" << endl;
    cin >> arv;

    for (i = 0; i < strlen(arv); i++)
    {
        if (arv[i] == '(') s.push(arv[i]);
        else if ((arv[i] == '+') || (arv[i] == '-') || (arv[i] == '/') || (arv[i] == '*'))
        {
            while ((!s.empty()) && (s.s_znak() > znak(arv[i])))
            {
                p++;
                vrt[p] = s.ar();
            }
            s.push(arv[i]);
        }
        else if (arv[i] == ')')
        {
            while ((!s.empty()) && (s.get_s_element() != '('))
            {
                p++;
                vrt[p] = s.ar();
            }
            s.ar();
        }
        else
        {
            p++;
            vrt[p] = arv[i];
        }
    }
    while (!s.empty())
    {
        p++;
        vrt[p] = s.ar();
    }
    for (i = 1; i <= p; i++)
        cout << vrt[i];
    cout << endl;
    return 0;
}


