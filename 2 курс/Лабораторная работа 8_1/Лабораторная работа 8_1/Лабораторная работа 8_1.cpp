//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//struct STUDENT
//{
//    string surname;
//    int nomber;
//    char uspev[5];
//};
//
//void Sort(STUDENT* studs, int& len) 
//{
//    for (int i = 0; i < len - 1; i++) 
//    {
//        for (int j = i + 1; j < len; j++) 
//        {
//            if (studs[i].nomber > studs[j].nomber) 
//            {
//                STUDENT buf = studs[i];
//                studs[i] = studs[j];
//                studs[j] = buf;
//            }
//        }
//    }
//}
//double avg(STUDENT catalog) 
//{
//    double sum = 0;
//    for (int i = 0; i < 5; i++)
//    {
//        sum += catalog.uspev[i];
//    }
//    return sum / 5;
//}
//int main()
//{
//    setlocale(LC_ALL, "rus");
//    int N;
//    int j = 0;
//    cout << "Введите количество студентов: " << endl;
//    cin >> N;
//    STUDENT* catalog = new STUDENT[N];
//    for (int i = 0; i < N; i++)
//    {
//        cout << "Введите фамилии и инициалы: " << endl;
//        cin >> catalog[i].surname;
//        cout << "Введите номер группы: " << endl;
//        cin >> catalog[i].nomber;
//        cout << "Введите оценки студента: " << endl;
//        do 
//        {
//            cout << "" << endl;
//            cin >> catalog[i].uspev[j];
//            j++;
//        } while (j != 5);
//        cout << endl;
//    }
//    Sort(catalog, N);
//    for (int i = 0; i < N; i++)
//    {
//        /*cout << catalog[i].surname << endl;
//        cout << catalog[i].nomber << endl;*/
//        for (j = 0; j != 5; j++)
//        {
//            cout << catalog[i].uspev[j] << " ";
//        }
//        cout << endl;
//    }
//    float s = 0;
//    int sum = 0;
//    int ind;
//    int f = 0;
//    
//    /*cout << "Средний бал студента > 4" << endl;*/
//    for (int i = 0; i != N; i++)
//    {
//        if (avg(catalog[i]) > 4)
//        {
//            f++;
//            ind = i;
//            cout <<"фамилии и инициалы: " <<catalog[ind].surname << endl;
//            cout <<"номер группы: " <<catalog[ind].nomber << endl;
//        }
//    }
//    if (f == 0)
//    {
//        cout << "NO" << endl;
//    }
//    delete[]catalog;
//    return 0;
//}





//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//struct STUDENT
//{
//    string surname;
//    int nomber;
//    char uspev[5];
//    float price;
//};
//
//
//int main()
//{
//    setlocale(LC_ALL, "rus");
//    int N;
//    int j = 0;
//    double sum = 0;
//    cout << "Введите количество студентов: " << endl;
//    cin >> N;
//    STUDENT* catalog = new STUDENT[N];
//    for (int i = 0; i < N; i++)
//    {
//        cout << "Введите фамилии и инициалы: " << endl;
//        cin >> catalog[i].surname;
//        cout << "Введите номер группы: " << endl;
//        cin >> catalog[i].nomber;
//        cout << "Введите оценки студента: " << endl;
//        do
//        {
//            cout << " " << endl;
//            cin >> catalog[i].uspev[j];
//            j++;
//            sum += catalog[i].uspev[j];
//        } while (j != 5);
//        cout << endl;
//    }
//    float s = 0;
//    for (int i = 0; i < N; i++)
//    {
//        for (j = 0; j != 5; j++)
//        {
//            cout << catalog[i].uspev[j] << " ";
//        }
//        cout << endl;
//    }
//    sum = sum / 5;
//    for (int i = 0; i < N; i++) 
//    {
//        if (sum != 4 && sum != 5)
//        { 
//            cout << "фамилии и инициалы: " << catalog[i].surname << endl;
//            cout << "номер группы: " << catalog[i].nomber << endl;
//            cout << "оценка студента: " << sum<< endl; 
//            //cout << "Сумма: " << catalog[i].price * catalog[i].quantity << endl; 
//            cout << endl; 
//        }
//        sum = sum / 5;
//        //s += catalog[i].price * catalog[i].quantity; 
//    }
//    cout << "Общая сумма: " << sum << endl;
//    delete[]catalog;
//    return 0;
//}


#include <iostream>
using namespace std;

struct Student
{
    char fio[12];
    int number_group;
    int ball[5];
};

int main()
{
    setlocale(LC_ALL, "rus");
    int students = 2;
    Student* stud = new Student[students];
    for (int i = 0; i < students; i++)
    {
        cout << "Введите фамилию и инициалы: " << endl;
        cin >> stud[i].fio;
        cout << endl << "Введите номер группы: " << endl;
        cin >> stud[i].number_group;
        cout << endl << "Введите оценки студента: " << endl;
        for (int j = 0; j < 5; j++)
        {
            cin >> stud[i].ball[j];
        }
    }
    cout << endl;
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            if (((stud[i].ball[j]) == 4) || ((stud[i].ball[j]) == 5))
            {
                cout << "фамилии и инициалы:  " << stud[i].fio << endl;
                cout << endl;
            }
            else
            {
                cout << "Таких оценок НЕТ" << endl;
                cout << endl;
            }
        }
    }
    cout << endl;
    system("pause");
    return 0;
}