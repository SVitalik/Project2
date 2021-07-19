#include <iostream>
using namespace std;

struct Student
{
    char fio[100];
    char ima[100];
    char otch[100];
    char discp[100];
    int rost;
    char klass[20];
    int ball[5];
};

int main()
{
    setlocale(LC_ALL, "rus");
    int students = 2;
    int id = 0;
    int ch = 0;
    int dis = 0;
    int d = 0;
    cout << "Введите кол-во дисциплин: " << endl;
    cin >> dis;
    Student* stud = new Student[students];
    for (int i = 0; i < students; i++)
    {
        cout << "Введите фамилию, имя и отчество (через enter): " << endl;
        cin >> stud[i].fio>> stud[i].ima>> stud[i].otch;
        /*cin.getline(stud[i].fio, 50, '\n')*/;
        cout << "Введите ваш рост: " << endl;
        cin >> stud[i].rost;
        cout << "Введите номер класса: " << endl;
        cin >> stud[i].klass;
        /*cout << endl; */
        for (int j = 0; j < dis; j++)
        {
            cout << "Дисциплина: ";
            cin >> stud[i].discp;
            cout<< "Введите оценки ученика: ";
            cin >> stud[i].ball[j];
            cout << endl;
        }
        id++;
        cout << endl;
    }
    cout << endl;
    cout << "Введите номер ученика: " << endl;
    cin >> ch;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    for (int i = 0; i < ch; i++)
    {
        if (id = ch)
        {

            cout << "фамилии и инициалы:  " << stud[i].fio <<" "<< stud[i].ima[0] <<". "<< stud[i].otch[0]<<". " << endl;
            cout << "рост:  " << stud[i].rost << endl;
            cout << "номер класса:  " << stud[i].klass << endl;
        }
        else
        {
            cout << "Таких учеников НЕТ" << endl;
            cout << endl;
        }
        for (int j = 0; j < dis; j++)
        {
            cout << "дисциплина: " << stud[i].discp <<endl << "оценка: " << stud[i].ball[j] << endl;
            cout << endl;
        }

    }
    cout << endl;
    system("pause");
    return 0;
}




//#include <iostream>
//
//using namespace std;
//
//struct Student
//{
//    char fio[100];
//    char ima[100];
//    char otch[100];
//    char discp[100];
//    int rost;
//    char klass[20];
//    int ball[5];
//};
//
//int main()
//{
//    setlocale(LC_ALL, "rus");
//    int students = 2;
//    int id = 0;
//    int ch = 0;
//    int dis = 0;
//    cout << "Введите кол-во дисциплин: " << endl;
//    cin >> dis;
//    Student* stud = new Student[students];
//    for (int i = 0; i < students; i++)
//    {
//        cout << "Введите фамилию, имя и отчество (через enter): " << endl;
//        cin >> stud[i].fio >> stud[i].ima >> stud[i].otch;
//        /*cin.getline(stud[i].fio, 50, '\n')*/;
//        cout << "Введите ваш рост: " << endl;
//        cin >> stud[i].rost;
//        cout << endl << "Введите номер класса: " << endl;
//        cin >> stud[i].klass;
//        cout << endl;
//        for (int j = 0; j < dis; j++)
//        {
//            cout << "Дисциплина: ";
//            cin >> stud[i].discp;
//            /*cout << endl;*/
//            cout << "Введите оценки ученика: ";
//            cin >> stud[i].ball[j];
//        }
//        id++;
//        cout << endl;
//    }
//    cout << endl;
//    cout << "Введите номер ученика: " << endl;
//    cin >> ch;
//    for (int i = 0; i < ch; i++)
//    {
//        if (id = ch)
//        {
//
//            cout << "фамилии и инициалы:  " << stud[i].fio << " " << stud[i].ima[1] << ". " << stud[i].otch[1] << ". " << endl;
//            cout << "рост:  " << stud[i].rost << endl;
//            cout << "номер класса:  " << stud[i].klass << endl;
//            /*cout << endl;*/
//        }
//        else
//        {
//            cout << "Таких учеников НЕТ" << endl;
//            cout << endl;
//        }
//        for (int j = 0; j < dis; j++)
//        {
//            cout << "  Дисциплина: " << stud[i].discp <<endl << " Оценка: " << stud[i].ball[j] << endl;
//            cout << endl;
//        }
//
//    }
//    /*cout << "оценки:  ";*/
//    for (int i = 0; i < ch; i++)
//    {
//        cout << "оценки:  " << endl;
//        for (int j = 0; j < dis; j++)
//        {
//
//            if (ch = id)
//            {
//                /* cout << stud[i].ball[j] << " ";*/
//                cout << "  Дисциплина: " << stud[i].discp << endl;
//                cout << " Оценка: " << stud[i].ball[j] << endl;
//                cout << endl;
//            }
//            cout << endl;
//        }
//    }
//    cout << endl;
//    system("pause");
//    return 0;
//}