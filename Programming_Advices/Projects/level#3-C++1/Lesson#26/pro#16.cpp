#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, d;
    double area_result;

    cout << "Enter the levy (a):\n";
    cin >> a;

    cout << "Enter the (d):\n";
    cin >> d;

    area_result = a * ( sqrt((pow(d, 2) - pow(a, 2))) );

    cout << "\nThe result is = " << area_result << " = " << round(area_result) << endl;

    return 0;
}