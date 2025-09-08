#include <iostream>
using namespace std;


int ReadPositiveNumber(string Massege)
{
    int num;

    do
    {
        cout << Massege;
        cin >> num;
    } while (num <= 0);

    return num;
}

void PrintInvertedPatternNum(int num)
{
    for (int Rivi = num; Rivi >= 1; Rivi--)
    {
        for (int hylly = 1; hylly <= Rivi; hylly++)
        {
            cout << Rivi;
        }
        cout << endl;
    }
}

int main()
{

    PrintInvertedPatternNum(ReadPositiveNumber("Enter a positive number: "));

    return 0;
}
