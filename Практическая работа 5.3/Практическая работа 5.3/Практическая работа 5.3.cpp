#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "RUS");
    int d;
    const char s[][12] = { "понедельник", "вторник", "среда", "четверг", "пятница", "субота", "воскресение" };
    cout << "Введите день недели: ";
    cin >> d;
    if (d % 7 != 0)
        cout << s[d % 7 - 1] << endl;
    else cout << s[6] << endl;
}
