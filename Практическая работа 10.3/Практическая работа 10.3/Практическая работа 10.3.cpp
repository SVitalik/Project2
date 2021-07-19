#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    char p[16];
    int ch = 0, i = 0;

    cin >> p;
    _strrev(p);
    for (i = 0; i < strlen(p); i++)
    {
        if (i == 0)
        {
            if (p[i] == '0')
                ;
            if (p[i] == '1')
                ch = 1;
        }
        if (i > 0)
            ch += pow(2 * (p[i] - '0'), i);
    }
    cout << hex << ch << "\n";
    system("pause");
    return 0;
}



