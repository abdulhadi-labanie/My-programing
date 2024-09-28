#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float penny, nickel, dime, quarter, dollar, total_penny;
    float total_dollar;

    cout << "Enter num of penny:\n";
    cin >> penny;

    cout << "Enter num of nickel:\n";
    cin >> nickel;

    cout << "Enter num of dime:\n";
    cin >> dime;

    cout << "Enter num of quarter:\n";
    cin >> quarter;

    cout << "Enter num of dollar:\n";
    cin >> dollar;

    total_penny = penny * 1 + nickel * 5 + dime * 10 + quarter * 25 + dollar * 100;
    total_dollar = total_penny / 100;

    cout << "The number of pennys = " << total_penny << endl;
    //cout << fixed << setprecision(2);
    cout << "The number of dollars = " << total_dollar << endl;

    return 0;
}