#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b;
    const float PI = 3.14159;
    double area_result;

    cout << "Enter the sivu a:\n";
    cin >> a;

    cout << "Enter the kanta b:\n";
    cin >> b;

    area_result = PI * ( pow(b, 2) /4 ) * ( (2 * a - b) / (2* a + b) );

    cout << "\nThe result is = " << area_result << " = " << floor(area_result) << endl;

    return 0;
}