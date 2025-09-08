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

int CheckFrequrncyNumber(int num, int frequrncyNum)
{
    int reversed = 0, num2 = 0, counter = 0;

    while (num > 0)
    {
        reversed = num % 10;
        num = num / 10;
        if (reversed == frequrncyNum)
            counter++;
    }

    return counter;
}

void PrintFrequrncyNumber(int num)
{
    int reversed = 0, counter = 0;

    for (int i = 0; i < 10; i++)
    {
        short digitFrequrncy = 0;

        digitFrequrncy = CheckFrequrncyNumber(num, i);

        if (digitFrequrncy > 0)
        {
            cout << "\nDigit " << i << " Frequency is " << digitFrequrncy << " Time(s)." << endl;
        }
    }
}

int main()
{

    int num = ReadPositiveNumber("Please enter a positive number: ");

    PrintFrequrncyNumber(num);

    return 0;
}