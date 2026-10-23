#include <iostream>
#include <string>
using namespace std;

short ReadNumber()
{ 
    short Number;
    cout << "\nEnter a year? ";
    cin >> Number;
    
    return Number; 
}

bool IsLeapYear(short Number)
{
    return (Number % 400 == 0) || (Number % 4 == 0 && Number % 100 != 0);
}

void PrintDay_H_M_S_InYear(short Number)
{
    bool IsLeap = IsLeapYear(Number);

    short days = 365;

    if (IsLeap)
        days++;

    cout << endl;
    cout << "Number of Days    in Year [" << Number << "] is " << days << endl;
    cout << "Number of Hours   in Year [" << Number << "] is " << (days * 24) << endl;
    cout << "Number of Minutes in Year [" << Number << "] is " << (days * 24 * 60) << endl;
    cout << "Number of Seconds in Year [" << Number << "] is " << (days * 24 * 60 * 60) << endl;
}

int main()
{
    short Number = ReadNumber();

    PrintDay_H_M_S_InYear(Number);

    return 0;
}