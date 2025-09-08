#include <iostream>
#include <string>
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

int FrequrncyNumber(int num, int frequrncyNum)
{
    int reversed = 0, counter = 0;

    while (num > 0)
    {
        reversed = num % 10;
        num = num / 10;
        if (reversed == frequrncyNum)
        {
            counter++;
        }
    }

    return counter;
}

int main()
{

    int num = ReadPositiveNumber("Please enter a positive number: ");
    short frequrncyNum = ReadPositiveNumber("Please enter a frequrncy number: ");

    cout << "\nDigit " << frequrncyNum << " Frequency is " << FrequrncyNumber(num, frequrncyNum) << " Time(s)." << endl;

    return 0;
}