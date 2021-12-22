#include <iostream>

using namespace std;

void func(int n)
{
    if (n > 1)
        func(n - 1);
    cout << n << endl;
}

int main()
{
    setlocale(LC_ALL, "rus");
    int f;
    cout << "Введите натуральне число: ";
    cin >> f;
    func(f);
}




//#include <iostream>
//using namespace std;
//
//struct Student
//{
//    char fio[12];
//    int number_group;
//    int ball[5];
//};
//
//int main()
//{
//    setlocale(LC_ALL, "rus");
//    int students = 2;
//    Student* stud = new Student[students];
//    for (int i = 0; i < students; i++)
//    {
//        cout << "Введите фамилию и инициалы: " << endl;
//        cin >> stud[i].fio;
//        cout << endl << "Введите номер группы: " << endl;
//        cin >> stud[i].number_group;
//        cout << endl << "Введите оценки студента: " << endl;
//        for (int j = 0; j < 5; j++)
//        {
//            cin >> stud[i].ball[j];
//        }
//    }
//    cout << endl;
//    for (int i = 0; i < students; i++)
//    {
//        for (int j = 0; j < 1; j++)
//        {
//            if (((stud[i].ball[j]) == 4) || ((stud[i].ball[j]) == 5))
//            {
//                cout << "фамилии и инициалы:  " << stud[i].fio << endl;
//                cout << endl;
//            }
//            else
//            {
//                cout << "Таких оценок НЕТ" << endl;
//                cout << endl;
//            }
//        }
//    }
//    cout << endl;
//    system("pause");
//    return 0;
//}