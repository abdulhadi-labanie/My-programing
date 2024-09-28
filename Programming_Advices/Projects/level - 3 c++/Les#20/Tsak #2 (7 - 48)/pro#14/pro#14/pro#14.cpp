#include <iostream>
using namespace std;

int main()
{
    short num1, num2, latikko;

    cout << "Enter the num1:\n";
    cin >> num1;

    cout << "Enter the num2:\n";
    cin >> num2;
    cout << endl;

    latikko = num1;
    num1 = num2;
    num2 = latikko;

    cout << num1 << endl;
    cout << num2;

    return 0;
}
