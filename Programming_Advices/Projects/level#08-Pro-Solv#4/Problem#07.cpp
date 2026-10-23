#include <iostream>
#include <string>
using namespace std;

int ReadNumber(string text, int min, int max)
{ 
    int Number;
    do
    {
        cout << text;
        cin >> Number;

    } while (Number < min || Number > max);
    
    return Number; 
}

bool IsLeapYear(int Year)
{
    return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}

short DaysOfMonth(int Year, short Month)
{
    short days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

short get_a(int Month)
{

    return (14 - Month) / 12;
}

short get_y(int Year, int Month)
{
    return Year - get_a(Month);
}

int get_m(int Month)
{
    short a = get_a(Month);

    return Month + 12 * a - 2;
}

short get_gregorin_calendar(short y, int m, int Day)
{
    int d;
    
    d = (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12));

    return d % 7;
}

void PrintDay_H_M_S_InMonth(int Year, int Month, int Day)
{
    string week_days[7] { "Sunday", "Monday", "Tuesday", "Wensday", "Thorsday", "Friday", "Saterday" };

    cout << endl;
    cout << "Date      : " << Day << "/" << Month << "/" << Year << endl;
    cout << "Day Order :" << get_gregorin_calendar(get_y(Year, Month),get_m(Month), Day) << endl;
    cout << "Day Name  :" << week_days[get_gregorin_calendar(get_y(Year, Month), get_m(Month), Day)] << endl;

}

int main()
{
    int Year = ReadNumber("\nEnter a year to check: ", 0, 30000);
    int Month = ReadNumber("\nEnter a Month: ", 1, 12);
    int Day = ReadNumber("\nEnter a Day: ", 1, DaysOfMonth(Year, Month));

    PrintDay_H_M_S_InMonth(Year, Month, Day);

    return 0;
}
