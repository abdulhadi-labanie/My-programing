#include <iostream>
using namespace std;

int main()
{
    short laina, maksu_kuussa, total_pay_kuussa;

    cout << "Enter the laina:\n";
    cin >> laina;

    cout << "Enter the who much Month:\n";
    cin >> maksu_kuussa;

    total_pay_kuussa = laina / maksu_kuussa;

    cout << "You pay " << total_pay_kuussa << " in = " << maksu_kuussa << "Months\n";

    return 0;
}