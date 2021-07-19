#include <iostream>
#include <fstream>
#include <ostream>
#include <istream>
#include <string>

using namespace std;

void File(string f, string g);

int main()
{
    string f = "D:\\f.txt";
    string g = "D:\\g.txt";
    File(f, g);

    return 0;
}
void File(string f, string g)
{
    int num = 0;
    int a = 0, b = 0;
    fstream fFile;
    ofstream gFile;
    int count = 0;

    fFile.open(f);
    gFile.open(g);

    for (int i = 0; i != 2; i++)
    {
        while (!fFile.eof())
        {
            fFile >> num;
            if (count != 0)
            {
                if (num % 2 == 0)
                {
                    gFile << num << " ";
                }
            }

            if (count == 0)
            {
                if (num % 2 != 0)
                {

                    gFile << num << " ";
                }
            }
        }

        fFile.clear();
        fFile.seekg(0, ios::beg);
        count++;
    }
    fFile.close();
    gFile.close();
}