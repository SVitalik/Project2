#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    for (double x = 0; x <= 2020; x += 4)
        cout << "\n\t " << setw(6) << x << " год до нашей эры – високосный";

}
