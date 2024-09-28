#include <iostream>
using namespace std;

int main()
{
    short num, power2, power3, power4;
    
    cout << "Enter num to power of 2,3,4:\n";
    cin >> num;

    power2 = num * num;
    power3 = num * power2;
    power4 = power2 * power2;

    cout << "The number " << num << "\n" << "power2 = " << power2 << "\n" << "power3 = " << power3 << "\n" << "power4 = " << power4 << "\n";

    return 0;
}