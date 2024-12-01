#include <iostream>
using namespace std;

int main()
{
    int days, hours, minutes, seconds, TotalInSeconds;

    cout << "Enter days:\n";
    cin >> days;

    cout << "Enter hours:\n";
    cin >> hours;

    cout << "Enter minutes:\n";
    cin >> minutes;

    cout << "Enter seconds:\n";
    cin >> seconds;

    TotalInSeconds = (days * 3600 * 24) + (hours * 3600) + (minutes * 60) + seconds;

    cout << "The total in seconds = " << TotalInSeconds << "seconds.";


    return 0;
}