#include <iostream>
#include <string>
using namespace std;

struct sDate
{
    short Day;
    short Month;
    short Year;
};


short ReadNumber(string text, short min, short max)
{
    short num = 0;
    do
    {
        cout << text;
        cin >> num;
        cout << endl;
    } while (num < min || num > max);
    return num;
}


bool IsLeapYear(short Year)
{
    return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}


short DaysOfMonth(short Year, short Month)
{
    short days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : days[Month - 1];
}


sDate GetDateCheckTrueValue()
{
    sDate Date;
    Date.Day = ReadNumber("Please enter a Day: ", 1, 31);
    Date.Month = ReadNumber("Please enter a Month: ", 1, 12);
    Date.Year = ReadNumber("Please enter a Year: ", 1, 30000);

    while (Date.Day > DaysOfMonth(Date.Year, Date.Month))
    {
        cout << "Error: the Day " << Date.Day << " is not in Month " << Date.Month << "!\n";
        cout << "Enter between 1-" << DaysOfMonth(Date.Year, Date.Month) << "!!!\n\n";

        Date.Day = ReadNumber("Please enter a Day: ", 1, 31);
        Date.Month = ReadNumber("Please enter a Month: ", 1, 12);
        Date.Year = ReadNumber("Please enter a Year: ", 1, 30000);
    }

    return Date;
}


short GetTotalDayFromBeginnigYear(short Day, short Month, short Year)
{
    short TotalDays = 0;
    for (int i = 1; i < Month; i++)
        TotalDays += DaysOfMonth(Year, i);
    TotalDays += Day;
    return TotalDays;
}


sDate ReverseTotalDaysToDate(short totalDays, short Year)
{
    sDate Date;
    Date.Month = 1;

    while (totalDays > DaysOfMonth(Year, Date.Month))
    {
        totalDays -= DaysOfMonth(Year, Date.Month);
        Date.Month++;
    }

    Date.Day = totalDays;
    Date.Year = Year;

    return Date;
}


void PrintTotalDaysFromBeginnigYear()
{
    sDate Date = GetDateCheckTrueValue();

    short TotalDays = GetTotalDayFromBeginnigYear(Date.Day, Date.Month, Date.Year);

    cout << "Number of Days from the beginning of the year = " << TotalDays << endl;

    sDate ReversedDate = ReverseTotalDaysToDate(TotalDays, Date.Year);

    cout << "\nDate for [" << TotalDays << "] is = "
        << ReversedDate.Day << "/"
        << ReversedDate.Month << "/"
        << ReversedDate.Year << endl;
}

int main()
{
    PrintTotalDaysFromBeginnigYear();
    return 0;
}
