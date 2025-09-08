#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float r;
    const float PI = 3.14159;
    double area_result;

    cout << "Enter the PI:\n";
    cin >> r;


    area_result = PI * pow(r, 2);

    cout << "\nThe result is = " << area_result << " = " << ceil(area_result) << endl;

    return 0;
}