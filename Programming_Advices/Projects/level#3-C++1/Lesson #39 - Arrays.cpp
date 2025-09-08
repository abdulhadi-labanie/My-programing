#include <iostream>
using namespace std;


int main()
{
    float n[3];

    cout << "Enter num1: ";
    cin >> n[0];

    cout << "Enter num2: ";
    cin >> n[1];

    cout << "Enter num3: ";
    cin >> n[2];

    float avrege = (n[0] + n[1] + n[2]) / 3;

    cout << "\nave = " << avrege;

    return 0;
}