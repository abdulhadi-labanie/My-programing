#include <iostream>
using namespace std;

struct stDate {
    short Year;
    short Month;
    short Day;
};

bool isLeapYear(short Year) {
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
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

short NumberOfDaysInAMonth(short Month, short Year) {
    if (Month < 1 || Month > 12)
        return 0;

    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

bool IsLastDayInMonth(stDate Date) {
    return Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year);
}

bool IsLastMonthInYear(short Month) {
    return Month == 12;
}

stDate IncreaseDateByOneDay(stDate Date) {
    if (IsLastDayInMonth(Date)) {
        if (IsLastMonthInYear(Date.Month)) {
            Date.Day = 1;
            Date.Month = 1;
            Date.Year++;
        } else {
            Date.Day = 1;
            Date.Month++;
        }
    } else {
        Date.Day++;
    }
    return Date;
}

int GetDifferenceInDays(stDate Date1, stDate Date2, bool IncludeEndDay = false) {
    int Days = 0;
    while (IsDate1BeforeDate2(Date1, Date2)) {
        Days++;
        Date1 = IncreaseDateByOneDay(Date1);
    }
    return IncludeEndDay ? ++Days : Days;
}

short ReadDay() {
    short Day;
    cout << "\nPlease enter a Day: ";
    cin >> Day;
    return Day;
}

short ReadMonth() {
    short Month;
    cout << "Please enter a Month: ";
    cin >> Month;
    return Month;
}

short ReadYear() {
    short Year;
    cout << "Please enter a Year: ";
    cin >> Year;
    return Year;
}

stDate ReadFullDate() {
    stDate Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}

int main() {
    cout << "Enter the first date:\n";
    stDate Date1 = ReadFullDate();

    cout << "\nEnter the second date:\n";
    stDate Date2 = ReadFullDate();

    cout << "\nDifference is: " << GetDifferenceInDays(Date1, Date2) << " day(s).";
    cout << "\nDifference (Including End Day) is: " << GetDifferenceInDays(Date1, Date2, true) << " day(s)." << endl;

    system("pause>0");
    return 0;
}
