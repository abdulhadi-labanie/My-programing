#include <iostream>
#include <string>
#include <cstdio>
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

short get_gregorin_calendar(int Year, int Month, int Day)
{
    short a = (14 - Month) / 12;
    short m = Month + 12 * a - 2;
    short y = Year - a;
    
    int d;
    
    d = (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;

    return d;
}

void PrintDay_H_M_S_InMonth(int Year, int Month, int Day)
{
    string week_days[7] { "Sun", "Mon", "Tus", "Wen", "Thr", "Fri", "Sat" };
    string months[12]{ "Jan", "Feb", "Mars", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Ouk", "Nov", "des"};

    short gregorin_calender = get_gregorin_calendar(Year, Month, Day);

    cout << endl;
    cout << "\n  _______________"<< months[Month-1] <<"_______________\n\n";
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    // Print initial spaces
    int i;
    for (i = 0; i < gregorin_calender; i++)
        printf("     ");

    // Print days
    for (int j = 1; j <= DaysOfMonth(Year, Month); j++) {
        printf("%5d", j);
        if (++i == 7) {
            i = 0;
            printf("\n");
        }
    }

    printf("\n  _________________________________\n");
}

void Print_Calender_of_all_munths()
{
    int Year = ReadNumber("\nEnter a year to check: ", 0, 30000);
    int Day = 1;

    printf("\n  _________________________________\n");
    printf("\t calender - %d", Year);
    printf("\n  _________________________________\n");

    for (int i =1; i <= 12; i++)
        PrintDay_H_M_S_InMonth(Year, i, Day);
}

int main()
{
    Print_Calender_of_all_munths();

    return 0;
}
