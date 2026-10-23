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

bool IsDate1LessDate2(stDate Date1, stDate Date2)
{
    if (Date1.Year < Date2.Year)
        return true;
    else if (Date1.Year == Date2.Year)
    {
        if (Date1.Month < Date2.Month)
            return true;
        else if (Date1.Month == Date2.Month)
            return Date1.Day < Date2.Day;
    }
    return false;
}

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year == Date2.Year && Date1.Month == Date2.Month && Date1.Day == Date2.Day);
}

bool IsLastDayInMonth(stDate Date) {
    return Date.Day == NumberOfDaysInAMonth(Date.Year, Date.Month);
}

bool IsLastMonthInYear(int Month) {
    return Month == 12;
}

stDate IncreaseDateByOneDay(stDate Date) {
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

stDate IncreaseDateBy_X_Days(stDate Date, int Add_X_Days)
{
    for (int i = 1; i <= Add_X_Days; i++)
    {
        Date = IncreaseDateByOneDay(Date);
    }
    return Date;
}

stDate IncreaseDateBy_X_Weeks(stDate Date, int Week = 1)
{
    for (int i = 1; i <= Week; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            Date = IncreaseDateByOneDay(Date);
        }
    }
    return Date;
}

stDate IncreaseDateBy_X_Months(stDate Date, int Add_X_Months = 1)
{
    Date.Month += Add_X_Months;

    while (Date.Month > 12)
    {
        Date.Month -= 12;
        Date.Year++;
    }

    int DaysInMonth = NumberOfDaysInAMonth(Date.Year, Date.Month);
    if (Date.Day > DaysInMonth)
        Date.Day = DaysInMonth;

    return Date;
}

stDate IncreaseDateBy_X_Years(stDate Date, int Add_X_Years = 1)
{
    Date.Year += Add_X_Years;

    int DaysInMonth = NumberOfDaysInAMonth(Date.Year, Date.Month);
    if (Date.Day > DaysInMonth)
        Date.Day = DaysInMonth;

    return Date;
}

stDate IncreaseDateBy_X_Years_Fast(stDate Date, int Add_X_Years = 1)
{
    Date.Year += Add_X_Years;

    int DaysInMonth = NumberOfDaysInAMonth(Date.Year, Date.Month);
    if (Date.Day > DaysInMonth)
        Date.Day = DaysInMonth;

    return Date;
}

stDate IncreaseDateBy_X_Decade(stDate Date, int Deacde = 1)
{
    Date.Year += Deacde * 10;

    int DaysInMonth = NumberOfDaysInAMonth(Date.Year, Date.Month);
    if (Date.Day > DaysInMonth)
        Date.Day = DaysInMonth;

    return Date;
}

stDate IncreaseDateBy_X_Centruy(stDate Date, int Centruy = 1)
{
    Date.Year += Centruy * 100;

    int DaysInMonth = NumberOfDaysInAMonth(Date.Year, Date.Month);
    if (Date.Day > DaysInMonth)
        Date.Day = DaysInMonth;

    return Date;
}

stDate IncreaseDateBy_X_Millennium(stDate Date, int Millennium = 1)
{
    Date.Year += Millennium * 1000;

    int DaysInMonth = NumberOfDaysInAMonth(Date.Year, Date.Month);
    if (Date.Day > DaysInMonth)
        Date.Day = DaysInMonth;

    return Date;
}


int main() {
    stDate Date = GetDateCheckTrueValue();

    // #1
    Date = IncreaseDateByOneDay(Date);
    cout << "\n0-1 Adding one day is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
    // #2
    //int Add_X_Days = ReadNumber("Please Enter how many days you want to add: ", 1, 1000000);
    Date = IncreaseDateBy_X_Days(Date, 10);
    cout << "\n0-2 Adding " << 10 << " days is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
    // #3
    Date = IncreaseDateBy_X_Weeks(Date, 1);
    cout << "\n0-3 Adding one week week is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
    // #4
    //int Add_X_Week = ReadNumber("Please Enter how many days you want to add: ", 1, 1000000);
    Date = IncreaseDateBy_X_Weeks(Date, 10);
    cout << "\n0-4 Adding " << 10 << " weeks days is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    // #5
    //int Add_X_Week = ReadNumber("Please Enter how many days you want to add: ", 1, 1000000);
    Date = IncreaseDateBy_X_Months(Date, 1);
    cout << "\n0-5 Adding " << 1 << " month days is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    // #6
    //int Add_X_Week = ReadNumber("Please Enter how many days you want to add: ", 1, 1000000);
    Date = IncreaseDateBy_X_Months(Date, 5);
    cout << "\n0-6 Adding " << 5 << " months days is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    // #7
    //int Add_X_Week = ReadNumber("Please Enter how many days you want to add: ", 1, 1000000);
    Date = IncreaseDateBy_X_Years(Date, 1);
    cout << "\n0-7 Adding " << 1 << " Year days is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    // #8
    //int Add_X_Week = ReadNumber("Please Enter how many days you want to add: ", 1, 1000000);
    Date = IncreaseDateBy_X_Years(Date, 10);
    cout << "\n0-8 Adding " << 10 << " Years days is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    // #9
    //int Add_X_Week = ReadNumber("Please Enter how many days you want to add: ", 1, 1000000);
    Date = IncreaseDateBy_X_Years_Fast(Date, 10);
    cout << "\n0-8 Adding " << 10 << " Years (Faster) days is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    // #10
//int Add_X_Week = ReadNumber("Please Enter how many days you want to add: ", 1, 1000000);
    Date = IncreaseDateBy_X_Decade(Date, 1);
    cout << "\n0-10 Adding " << 1 << " Decade days is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    // #11
    //int Add_X_Week = ReadNumber("Please Enter how many days you want to add: ", 1, 1000000);
    Date = IncreaseDateBy_X_Decade(Date, 1);
    cout << "\n0-11 Adding " << 1 << " Decade (Faster) days is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    // #12
    //int Add_X_Week = ReadNumber("Please Enter how many days you want to add: ", 1, 1000000);
    Date = IncreaseDateBy_X_Decade(Date, 10);
    cout << "\n0-12 Adding " << 10 << " Decade (Faster) days is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    // #13
    //int Add_X_Week = ReadNumber("Please Enter how many days you want to add: ", 1, 1000000);
    Date = IncreaseDateBy_X_Centruy(Date, 1);
    cout << "\n0-13 Adding " << 1 << " Centruys (Faster) days is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    // #14
//int Add_X_Week = ReadNumber("Please Enter how many days you want to add: ", 1, 1000000);
    Date = IncreaseDateBy_X_Millennium(Date, 1);
    cout << "\n0-14 Adding " << 1 << " Years days is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;



    system("pause>0");
    return 0;
}
