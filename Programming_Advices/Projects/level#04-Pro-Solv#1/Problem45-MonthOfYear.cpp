#include <iostream>
using namespace std;

enum enDayOfWeek {Jan =1 , Feb =2 , Mar =3 , Apr =4 , May=5 , Jun =6 , 
                  Jul =7 , Aug =8 , Sep =9 , Oct =10 ,Nov =11 ,Dec =12};

int ReadNumberInRange(string Message, int From, int To)
{
    int Number = 0;
    
    do
    {
        cout << Message << " (between " << From << " and " << To << "): ";
        cin >> Number;
    } while (Number < From || Number > To);
    
    return Number;
}

enDayOfWeek ReadMonthOfYear()
{
    return (enDayOfWeek) ReadNumberInRange("Enter Month number", 1, 12);
}

string GetMonthOfYear(enDayOfWeek Month)
{
    switch (Month)
    {
    case enDayOfWeek::Jan:
        return "January";
    case enDayOfWeek::Feb:
        return "February";
    case enDayOfWeek::Mar:
        return "March";
    case enDayOfWeek::Apr:
        return "April";
    case enDayOfWeek::May:
        return "May";
    case enDayOfWeek::Jun:
        return "June";
    case enDayOfWeek::Jul:
        return "July";
    case enDayOfWeek::Aug:
        return "August";
    case enDayOfWeek::Sep:
        return "September";
    case enDayOfWeek::Oct:
        return "October";
    case enDayOfWeek::Nov:
        return "November";
    case enDayOfWeek::Dec:
        return "December";
    default:
        return "Invalid month";
    }
}

int main()
{
    cout << GetMonthOfYear(ReadMonthOfYear()) << endl;
    
    return 0;
}
