//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "rus");
//    char mass[30]; int l = 0, k = 0, t = 0;
//    cout << "Введите ваше слово: ";
//    cin.getline(mass, 30);
//    for (int i = 0; i < 30; i++) {
//        for (int j = 0; j >= i; j--) {
//            if (j == i) {
//                k++;
//            }
//            if (j != i) {
//                t++;
//            }
//        }
//        /*if (mass[i] >= 65 && mass[i] <= 90 || mass[i] >= 97 && mass[i] <= 122) {
//            l++;
//        }*/
//    }
//    cout << "Количество букв в вашем слове: " << l << endl;
//    if (l / 2 == k) {
//        cout << "Ваше слово палиндромно!" << endl;
//    }
//    else {
//        cout << "Ваше слово не палиндромно!" << endl;
//    }
//    return 0;
//}




//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "rus");
//    const int MAX(100);
//    char mass[100];
//    int s = 0, c = 0, i = 0;
//    cout << "Введите предложение: " << endl;
//    cin.getline(mass, MAX, '\n');
//    for (i = 0; i < MAX / 2; i++)
//    {
//        if (MAX == 1)
//        {
//            cout <<"Это палиндром"<< mass[i];
//        }
//
//        else
//        {
//            cout << "Это не палиндром" << mass[i];
//        }
//    }
//    cout << "Количество слов в предложении = " << s << endl;
//}


//#include    <iostream>
//#include    <string>
//
//
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "rus");
//    cout << "Введите строку: ";
//    string sStr;
//    getline(cin, sStr);
//    bool bFlag(true);
//    size_t szStr(sStr.length());
//    for (size_t i = 0; i <= (szStr / 2); ++i)
//    {
//        if (sStr[i] != sStr[szStr - 1 - i])
//        {
//            bFlag = false;
//            break;
//        }
//    }
//    if (bFlag) { cout << "Да, это является палиндром\n"; }
//    else { cout << "Нет, это не является палиндром\n"; }
//    system("pause");
//    return 0;
//}


#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    bool b = true;
    string s;
    cout << "Введите строку: \n";
    getline(cin, s);

    int n = s.size();
    for (int i = 0; i < n / 2; i++)
        if (s[i] != s[n - 1 - i]) b = false;

    if (b) cout << "Да, это является палиндром\n";
    else cout << "Нет, это не является палиндром\n";
    system("pause");
    return 0;
}
