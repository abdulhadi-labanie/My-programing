#include <iostream>
using namespace std;

int main()
{
    short laina, maksu_kuussa, total_month;

    cout << "Enter the laina:\n";
    cin >> laina;

    cout << "Enter the maksu kuukaudessa:\n";
    cin >> maksu_kuussa;

    total_month = laina / maksu_kuussa;

    cout << "You pay " << maksu_kuussa << " in = " << total_month << "Months\n";

    return 0;
}