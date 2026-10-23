#include <iostream>
using namespace std;

struct stDate {
    int Year;
    int Month;
    int Day;
};

struct stPeriod
{
    stDate StartPeriod;
    stDate EndPeriod;
};

bool isLeapYear(int Year) {
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

int NumberOfDaysInAMonth(int Year, int Month) {
    if (Month < 1 || Month > 12)
        return 0;

    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
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

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year == Date2.Year) ? (Date1.Month == Date2.Month) ? (Date1.Day == Date2.Day) ? true : false : false : false;
}

bool IsDate1AfterDate2(stDate Date1, stDate Date2)
{
    return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));
}

enum enDateCompare { Before = -1, Equal = 0, After = 1 };

bool IsPeriodsOverlap(stPeriod Period1, stPeriod Period2)
{
    if (IsDate1AfterDate2(Period1.EndPeriod, Period2.StartPeriod) || IsDate1BeforeDate2(Period2.EndPeriod, Period1.StartPeriod))
        return true;
    else
        return false;
    

}

short ReadDay(string text, int min, int max) {
    short Day;

    do
    {
        cout << text;
        cin >> Day;
        cout << endl;
    } while (Day < min || Day > max);

    return Day;
}

short ReadMonth(string text, int min, int max) {
    short Month;
    cout << "Please enter a Month? ";
    cin >> Month;
    return Month;
}

short ReadYear(string text, int min, int max) {
    short Year;
    cout << "Please enter a Year? ";
    cin >> Year;
    return Year;
}

stDate ReadFullDate() {
    stDate Date;
    Date.Day = ReadDay("\nPlease enter a Day? ", 1, 31);
    Date.Month = ReadMonth("Please enter a Month? ", 1, 12);
    Date.Year = ReadYear("Please enter a Year? ", 1, 30000);

    while (Date.Day > NumberOfDaysInAMonth(Date.Year, Date.Month))
    {
        cout << "Error: the Day " << Date.Day << " is not in Month " << Date.Month << "!\n";
        cout << "Enter between 1-" << NumberOfDaysInAMonth(Date.Year, Date.Month) << "!!!\n\n";

        Date.Day = ReadDay("\nPlease enter a Day? ", 1, 31);
        Date.Month = ReadMonth("Please enter a Month? ", 1, 12);
        Date.Year = ReadYear("Please enter a Year? ", 1, 30000);
    }

    return Date;
}

stPeriod ReadPeriod()
{
    stPeriod period;

    do
    {
        cout << "Enter start day:\n";
        period.StartPeriod = ReadFullDate();

        cout << "Enter End day:\n";
        period.EndPeriod = ReadFullDate();

    } while (IsDate1AfterDate2(period.StartPeriod, period.EndPeriod));

    return period;
}

int main() {

    stPeriod period1, period2;

    cout << "Enter Period 1:\n";
    period1 = ReadPeriod();

    cout << "\nEnter Period 2:\n";
    period2 = ReadPeriod();

    if (IsPeriodsOverlap(period1, period2))
        cout << "\nYes, Periods Overlap\n"; 
    else        
        cout << "\nNo, Periods do not Overlap\n";
    

    system("pause>0");
    return 0;
}
