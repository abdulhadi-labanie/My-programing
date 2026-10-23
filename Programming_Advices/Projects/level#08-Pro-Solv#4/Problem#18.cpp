#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct sDate {
    short Day;
    short Month;
    short Year;
};

short ReadNumber(string text, short min, short max) {
    short num = 0;
    do {
        cout << text;
        cin >> num;
        cout << endl;
    } while (num < min || num > max);
    return num;
}

bool IsLeapYear(short Year) {
    return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}

short DaysOfMonth(short Year, short Month) {
    short days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

sDate GetDateCheckTrueValue() {
    sDate Date;
    Date.Day = ReadNumber("Please enter a Day: ", 1, 31);
    Date.Month = ReadNumber("Please enter a Month: ", 1, 12);
    Date.Year = ReadNumber("Please enter a Year: ", 1, 30000);

    while (Date.Day > DaysOfMonth(Date.Year, Date.Month)) {
        cout << "Error: the Day " << Date.Day << " is not in Month " << Date.Month << "!\n";
        cout << "Enter between 1-" << DaysOfMonth(Date.Year, Date.Month) << "!!!\n\n";
        Date.Day = ReadNumber("Please enter a Day: ", 1, 31);
        Date.Month = ReadNumber("Please enter a Month: ", 1, 12);
        Date.Year = ReadNumber("Please enter a Year: ", 1, 30000);
    }
    return Date;
}

sDate GetCurrentDate() {
    time_t t = time(0);
    tm now;
    localtime_s(&now, &t);

    sDate Date;
    Date.Day = now.tm_mday;
    Date.Month = now.tm_mon + 1;
    Date.Year = now.tm_year + 1900;

    return Date;
}


bool IsDate1BeforeDate2(sDate Date1, sDate Date2) {
    if (Date1.Year < Date2.Year)
        return true;
    else if (Date1.Year == Date2.Year) {
        if (Date1.Month < Date2.Month)
            return true;
        else if (Date1.Month == Date2.Month)
            return Date1.Day < Date2.Day;
    }
    return false;
}

bool IsLastDayInMonth(sDate Date) {
    return Date.Day == DaysOfMonth(Date.Year, Date.Month);
}

bool IsLastMonthInYear(short Month) {
    return Month == 12;
}

sDate IncreaseDateByOneDay(sDate Date) {
    if (IsLastDayInMonth(Date)) {
        if (IsLastMonthInYear(Date.Month)) {
            Date.Day = 1;
            Date.Month = 1;
            Date.Year++;
        }
        else {
            Date.Day = 1;
            Date.Month++;
        }
    }
    else {
        Date.Day++;
    }
    return Date;
}

short GetDifferenceInDays(sDate Date1, sDate Date2, bool IncludeEndDay = false) {
    short Days = 0;
    while (IsDate1BeforeDate2(Date1, Date2)) {
        Days++;
        Date1 = IncreaseDateByOneDay(Date1);
    }
    return IncludeEndDay ? ++Days : Days;
}

void PrintTotalDaysFromBeginnigYear() {
    sDate BirthDay = GetDateCheckTrueValue();
    sDate DateNow = GetCurrentDate();

    short totalDays = GetDifferenceInDays(BirthDay, DateNow);

    cout << "The Difference between the entered date and today is [ " << totalDays << " ] day(s)." << endl;
}

int main() {
    PrintTotalDaysFromBeginnigYear();
    return 0;
}
