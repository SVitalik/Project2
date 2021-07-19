#include "pch.h"

using namespace System;

int main(array<System::String^>^ args)
{
    const Int32 m = 4;
    Int32 mass[m][m] = { 0 };
    Int32 r = 0, p = 0;
    while (r < m)
    {
        //Вправо
        for (Int32 i = r; i < m - r - 1; i++)
        {
            p++;
            mass[r][i] = p;
        }

        //Вниз
        for (Int32 i = r; i < m - r - 1; i++)
        {
            p++;
            mass[i][m - r - 1] = p;
        }

        //Влево
        for (Int32 i = m - r - 1; i > r; i--)
        {
            p++;
            mass[m - r - 1][i] = p;
        }

        //Вверх
        for (Int32 i = m - r - 1; i > r; i--)
        {
            p++;
            mass[i][r] = p;
        }

        r++;
    }

    if (m % 2 != 0)
    {
        mass[(Int32)(m - 1) / 2][(Int32)(m - 1) / 2] = ++p;
    }
    Console::WriteLine(L"Вывод масива: ");
    Console::WriteLine();
    for (Int32 i = 0; i < m; i++)
    {
        for (Int32 j = 0; j < m; j++)
        {
            Console::Write(mass[i][j]);
            Console::Write("\t");
            
        }
        Console::WriteLine("\t");
    }
}
