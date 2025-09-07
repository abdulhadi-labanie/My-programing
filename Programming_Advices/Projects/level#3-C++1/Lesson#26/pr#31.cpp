#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    short num;
    short power_2, power_3, power_4;

    cout << "Enter the number to power(2, 3, 4):\n";
    cin >> num;

    power_2 = pow(num, 2);
    power_3 = pow(num, 3);
    power_4 = pow(num, 4);

    cout << "\nThe result whith power^2 is = " << power_2 << " = " << floor(power_2) << endl;
    cout << "\nThe result whith power^3 is = " << power_3 << " = " << floor(power_3) << endl;
    cout << "\nThe result whith power^4 is = " << power_4 << " = " << floor(power_4) << endl;

    return 0;
}