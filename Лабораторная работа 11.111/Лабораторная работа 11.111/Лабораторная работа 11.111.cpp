#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    System::Double carpetPriceSqYd = 27.95; 
    System::Double roomWidth = 13.5;    
    System::Double roomLength = 24.75;           
    const System::Int16 feetPerYard = 3;           
    System::Double roomWidthYds = roomWidth / feetPerYard; 
    System::Double roomLengthYds = roomLength / feetPerYard; 
    System::Double carpetPrice = roomWidthYds * roomLengthYds * carpetPriceSqYd; 
    Console::WriteLine(L"Room size is {0:F2} yards by {1:F2} yards", roomLengthYds, roomWidthYds); 
    Console::WriteLine(L"Room area is {0:F2} square yards", roomLengthYds * roomWidthYds); 
    Console::WriteLine(L"Carpet price is ${0:F2}", carpetPrice);
    return 0;
}