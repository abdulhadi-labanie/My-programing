#include <iostream>
using namespace std;

int main()
{
    float Square_Area, Circle_Area;
    const float PI = 3.14;

    cout << "Enter square area (A):\n";
    cin >> Square_Area;

    Circle_Area = (PI * (Square_Area * Square_Area)) / 4;

    cout << "Circle Area Inscribed in a Square is " << Circle_Area << endl;

    return 0;
}