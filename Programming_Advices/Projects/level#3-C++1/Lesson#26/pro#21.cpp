#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float L;
    const float PI = 3.14159;
    double area_result;

    cout << "Enter the D:\n";
    cin >> L;

    area_result = pow(L, 2) / (4 * PI);

    cout << "\nThe result is = " << area_result << " = " << floor(area_result) << endl;

    return 0;
}