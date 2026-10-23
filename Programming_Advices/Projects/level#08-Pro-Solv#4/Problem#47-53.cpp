#include <iostream>
using namespace std;

struct stDate {
    int Year;
    int Month;
    int Day;
};

int ReadNumber(string text, int min, int max)
{
    int num = 0;
    do
    {
        cout << text;
        cin >> num;
        cout << endl;
    } while (num < min || num > max);
    return num;
}

bool isLeapYear(int Year) {
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

int NumberOfDaysInAMonth(int Year, int Month) {
    if (Month < 1 || Month > 12)
        return 0;

    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

stDate GetDateCheckTrueValue()
{
    stDate Date;
    Date.Day = ReadNumber("Please enter a Day: ", 1, 31);
    Date.Month = ReadNumber("Please enter a Month: ", 1, 12);
    Date.Year = ReadNumber("Please enter a Year: ", 1, 30000);

    while (Date.Day > NumberOfDaysInAMonth(Date.Year, Date.Month))
    {
        cout << "Error: the Day " << Date.Day << " is not in Month " << Date.Month << "!\n";
        cout << "Enter between 1-" << NumberOfDaysInAMonth(Date.Year, Date.Month) << "!!!\n\n";

        Date.Day = ReadNumber("Please enter a Day: ", 1, 31);
        Date.Month = ReadNumber("Please enter a Month: ", 1, 12);
        Date.Year = ReadNumber("Please enter a Year: ", 1, 30000);
    }

    return Date;
}

bool IsLastDayInMonth(stDate Date) {
    return Date.Day == NumberOfDaysInAMonth(Date.Year, Date.Month);
}

bool IsLastMonthInYear(int Month) {
    return Month == 12;
}

short DayOfWeekOrder(int Day, int Month, int Year) {
    short a, y, m;
    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    // Gregorian Calendar Formula:
    // 0: Sunday, 1: Monday, 2: Tuesday, ...
    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

short DayOfWeekOrder(stDate Date) {
    short a, y, m;
    a = (14 - Date.Month) / 12;
    y = Date.Year - a;
    m = Date.Month + (12 * a) - 2;

    // Gregorian Calendar Formula:
    // 0: Sunday, 1: Monday, 2: Tuesday, ...
    return (Date.Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string DayShortName(short DayOfWeekOrder) {
    string arrDayNames[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    return arrDayNames[DayOfWeekOrder];
}

bool IsEndOfWeek(short DayNum)
{
    return DayNum == 6;
}

bool IsWeekEnd(short DayNum)
{
    return (DayNum == 5 || DayNum == 6) ? true : false;
}

bool IsBusinessDay(short DayNum)
{
    return DayNum != 5;
}

short DaysUntilTheEndOfWeek(stDate Date)
{
    return 7 - (DayOfWeekOrder(Date) + 1);
}

short DaysUntilTheEndOfMonth(stDate Date)
{
    return (NumberOfDaysInAMonth(Date.Year, Date.Month) - Date.Day) + 1;
}

short DaysUntilTheEndOfYear(stDate Date)
{
    short totalDays = 0;

    for (int i = 1; i < Date.Month; i++)
    {
        totalDays += NumberOfDaysInAMonth(Date.Year, i);
    }
    totalDays += Date.Day;

    return ((isLeapYear(Date.Year)) ? 366 - totalDays : 365 - totalDays ) + 1;
}

int main() {
    stDate Date = GetDateCheckTrueValue();
    short IndexDayOfWeek = DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
    string TodayIs = DayShortName(IndexDayOfWeek);

    cout << "Today is " << TodayIs << ", " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
    string stTodayIs = DayShortName(DayOfWeekOrder(Date));
    cout << "st Today is " << stTodayIs << ", " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    cout << "\nIs it End of Week?\n";
    cout << ((IsEndOfWeek(IndexDayOfWeek)) ? "Yes it is " : "No Not ") << "end of week.\n";

    cout << "\nIs it Weekend?\n";
    cout << ((IsWeekEnd(IndexDayOfWeek)) ? "Yes it is " : "No Not ") << "week end.\n";

    cout << "\nIs it Business Day?\n";
    cout << ((IsBusinessDay(IndexDayOfWeek)) ? "Yes it is " : "No Not ") << "a business day.\n";

    cout << "\nDays until end of week  : " << DaysUntilTheEndOfWeek(Date) << "Day(s).\n";
    cout << "\nDays until end of Month : " << DaysUntilTheEndOfMonth(Date) << "Day(s).\n";
    cout << "\nDays until end of Year  : " << DaysUntilTheEndOfYear(Date) << "Day(s).\n";


    system("pause>0");
    return 0;
}
