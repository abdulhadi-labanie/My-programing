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
    for (int Rivi = 1; Rivi <= num; Rivi++)
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
    int num = ReadPositiveNumber("Enter a positive number: ");

    PrintInvertedPatternNum(num);

    return 0;
}
