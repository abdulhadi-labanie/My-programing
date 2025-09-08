#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float D;
    const float PI = 3.14159;
    double area_result;

    cout << "Enter the D:\n";
    cin >> D;


    area_result = PI * (pow(D, 2) / 4);

    cout << "\nThe result is = " << area_result << " = " << ceil(area_result) << endl;

    return 0;
}