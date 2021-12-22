//Ввести с клавиатуры три числа. Вывести на экран среднее по значению из них
#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Введите три числа:");
    double a = Double::Parse(Console::ReadLine());
    double b = Double::Parse(Console::ReadLine());
    double c = Double::Parse(Console::ReadLine());
    Console::WriteLine(L"Среднее значение:");
    if ((a > b && a < c) || (a < b && a > c)) 
    {
        Console::WriteLine(a);
    } 
    if ((b > a && b < c) || (b < a && b > c)) 
    {
        Console::WriteLine(b);
    }   
    if ((c > a && c < b) || (c < a && c > b)) 
    {
        Console::WriteLine(c);
    } 
    if (a == b && b == c && c == a) 
    {
        Console::WriteLine(a);
    } 
    if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) 
    {
        Console::WriteLine(b);
    }
}
