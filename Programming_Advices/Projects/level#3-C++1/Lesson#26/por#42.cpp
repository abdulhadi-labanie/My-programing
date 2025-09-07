#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int days, hours, minutes, seconds;
    int total_sen;

    cout << "Enter a days:\n";
    cin >> days;

    cout << "Enter a hours:\n";
    cin >> hours;

    cout << "Enter a minutes:\n";
    cin >> minutes;

    cout << "Enter a seconds:\n";
    cin >> seconds;

    total_sen = (days * 3600 * 24) + (hours * 3600) + (minutes * 60) + seconds;

    cout << "\nThe result = " << total_sen << endl;

    return 0;
}