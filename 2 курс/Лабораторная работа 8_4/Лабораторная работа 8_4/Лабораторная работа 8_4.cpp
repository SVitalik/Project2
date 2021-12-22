//Описать структуру «дата»(год, месяц, день).Определить функцию «дней до конца месяца»вычисляющую количество дней до конца месяца.
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

const int Days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

struct MyDate {
    int day = 1;
    int month = 1;
    int year = 1;
};

int days(MyDate& date)
{
    if (0 < date.month && date.month < 13)
        return Days[date.month - 1] - date.day;
    return -1;
}
int main()
{
    setlocale(LC_ALL, "rus");
    MyDate d1;
    d1.day = 28;
    d1.month = 03;
    d1.year = 2021;

    cout << "Дней до конца текущего месяца: " << days(d1);
}