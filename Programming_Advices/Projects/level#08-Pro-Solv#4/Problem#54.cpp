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

bool IsDate1BeforeDate2(stDate Date1, stDate Date2) {
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

short DayOfWeekOrder(int Day, int Month, int Year) {
    short a, y, m;
    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    // Gregorian Calendar Formula:
    // 0: Sunday, 1: Monday, 2: Tuesday, ...
    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

bool IsLastDayInMonth(stDate Date) {
    return (Date.Day == NumberOfDaysInAMonth(Date.Year, Date.Month));
}

bool IsLastMonthInYear(short Month) {
    return (Month == 12);
}

stDate IncreaseDateByOneDay(stDate Date) {
    if (IsLastDayInMonth(Date)) {
        if (IsLastMonthInYear(Date.Month)) {
            Date.Month = 1;
            Date.Day = 1;
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


short DayOfWeekOrder(stDate Date) 
{
    return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
}

string DayShortName(short DayOfWeekOrder) {
    string arrDayNames[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    return arrDayNames[DayOfWeekOrder];
}

bool IsEndOfWeek(short DayNum)
{
    return DayNum == 6;
}

bool IsWeekEnd(stDate Date) {
    short DayIndex = DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
    return (DayIndex == 5 || DayIndex == 6);
}

bool IsBusinessDay(stDate Date)
{
    return !IsWeekEnd(Date);
}

short CalculateVacationDays(stDate DateFrom, stDate DateTo) {
    short DaysCount = 1;
    while (IsDate1BeforeDate2(DateFrom, DateTo)) {
        if (IsBusinessDay(DateFrom))
            DaysCount++;
        DateFrom = IncreaseDateByOneDay(DateFrom);
    }
    return DaysCount;
}



int main() {


     stDate Date1 = GetDateCheckTrueValue();
     cout << "\n\n";
     stDate Date2 = GetDateCheckTrueValue();

    while (!IsDate1BeforeDate2(Date1, Date2))
    {
        cout << "Error: Date1 must be before Date2!\n";
        Date1 = GetDateCheckTrueValue();
        cout << "\n\n";
        Date2 = GetDateCheckTrueValue();
    }

    short IndexDay1_OfWeek = DayOfWeekOrder(Date1.Day, Date1.Month, Date1.Year);
    short IndexDay2_OfWeek = DayOfWeekOrder(Date2.Day, Date2.Month, Date2.Year);

    string Today1Is = DayShortName(DayOfWeekOrder(Date1));
    string Today2Is = DayShortName(DayOfWeekOrder(Date2));

    cout << "Vaction From: " << Today1Is << ", " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;
    cout << "Vaction To: " << Today2Is << ", " << Date2.Day << "/" << Date2.Month << "/" << Date2.Year << endl;

    cout << "\nActucal Vactaion Days is: " << CalculateVacationDays(Date1, Date2) << endl;

    system("pause>0");
    return 0;
}
