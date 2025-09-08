#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    short num, power_num;
    double result;

    cout << "Enter a number:\n";
    cin >> num;

    cout << "Enter the power num:\n";
    cin >> power_num;

    result = pow(num, power_num);

    cout << "\nThe result " << num << " whith power^" << power_num << " = " << round(result) << endl;

    return 0;
}