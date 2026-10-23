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

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year == Date2.Year) ? (Date1.Month == Date2.Month) ? (Date1.Day == Date2.Day) ? true : false : false : false;
}

bool IsDate1AfterDate2(stDate Date1, stDate Date2)
{
    return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));
}

int main() {


    stDate Date1 = GetDateCheckTrueValue();
    cout << "\n\n";
    stDate Date2 = GetDateCheckTrueValue();

    if (IsDate1AfterDate2(Date1, Date2))
        cout << "\nYes, Date1 is After Date2."; 
    else        
        cout << "\nNo, Date1 is NOT After Date2.";


    system("pause>0");
    return 0;
}
