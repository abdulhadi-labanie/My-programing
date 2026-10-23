#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{ 
    int Number;
    do
    {
        cout << "\nEnter a year to check? ";
        cin >> Number;

    } while (Number < 0 || Number > 30000);
    
    return Number; 
}

short ReadMonth()
{
    short Number;
    do
    {
        cout << "\nEnter a Month? ";
        cin >> Number;

    } while (Number < 1 || Number >= 12);

    return Number;
}

bool IsLeapYear(int Year)
{
    return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}

short DaysOfMonth(int Year, short Month)
{
    short arr31[7] = { 1, 3, 5, 7, 8, 10, 12 };

    if (Month == 2)
    {
        return IsLeapYear(Year) ? 29 : 28;
    }
    
    for (short month = 0; month <= 12; month++)
    {
        if (Month == arr31[month])
            return 31;
    }

    return 30;
}

void PrintDay_H_M_S_InMonth(int Year, short Month)
{
    short days = DaysOfMonth(Year, Month);

    cout << endl;
    cout << "Number of Days    in Month [" << Month << "] is " << days << endl;
    cout << "Number of Hours   in Month [" << Month << "] is " << (days * 24) << endl;
    cout << "Number of Minutes in Month [" << Month << "] is " << (days * 24 * 60) << endl;
    cout << "Number of Seconds in Month [" << Month << "] is " << (days * 24 * 60 * 60) << endl;
}

int main()
{
    int Year = ReadNumber();
    short Month = ReadMonth();

    PrintDay_H_M_S_InMonth(Year, Month);

    return 0;
}