#include "pch.h"
#include <string>

using namespace System;

int main(array<System::String ^> ^args)
{
    String^ s1;
    Console::WriteLine(L"Введите строчку: ");
    /*double a = Double::Parse(Console::ReadLine());*/
    /*Console::WriteLine(s1);*/
    array <String^>^ a = String::Split(Console::ReadLine());
    String^ s2;
    Console::WriteLine(s2);
    String^ s;
    /*for (Int32 i = 0; i<s1->Length(); i++)
    {
        s = s + s1[i] + s2[i];
    }*/
    Console::WriteLine(s);
    return 0;
}


//#include "pch.h"
//#include <string>
//
//using namespace System;
//
//int main(array<System::String^>^ args)
//{
//    int i = 0, k = 0;
//    String^ s;
//    Console::WriteLine(L"Введите строчку: ");
//    Console::WriteLine(s);
//    /*getline(cin, s);*/
//
//    while (s[i] != '.')
//    {
//        if (s[i] == ' ') k++;
//        i++;
//    }
//
//    /*cout << "count=" << k + 1 << "\n";*/
//    Console::WriteLine(L"count=", k + 1);
//
//    system("pause");
//    return 0;
//}