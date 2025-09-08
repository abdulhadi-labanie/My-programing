#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, p;
    const float PI = 3.14159;
    double area_result;

    cout << "Enter the sivu a:\n";
    cin >> a;

    cout << "Enter the kanta b:\n";
    cin >> b;

    cout << "Enter the sivu c:\n";
    cin >> c;

    p = (a + b + c) / 2;

    area_result = PI * (pow( (a * b * c) / (4 * sqrt(p * (p-a) * (p-b) * (p-c))) , 2));

    cout << "\nThe result is = " << area_result << " = " << floor(area_result) << endl;

    return 0;
}