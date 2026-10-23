#include <iostream>
#include <string>
using namespace std;

bool IsLeapYear(short Number)
{
    if (Number % 400 == 0)
    {
        return true;
    }

    else if (Number % 4 == 0 && Number % 100 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

short ReadNumber()
{ 
    short Number;
    cout << "\nEnter a year? ";
    cin >> Number;
    
    return Number; 
}

void PrintLeapYearResult(short Number)
{
    bool result = IsLeapYear(Number);

    if (result)
        cout << "The year" << Number << " is leap Year." << endl;
    else
        cout << "The year" << Number << " is not leap Year!!!!" << endl;
}

int main()
{
    short Number = ReadNumber();

    PrintLeapYearResult(Number);

    return 0;
}