#include <iostream>
using namespace std;

int main()
{
    float a, b, circle_area;
    const float PI = 3.14159;

    cout << "Enter triangle a value:\n";
    cin >> a;

    cout << "Enter triangle b foudetion:\n";
    cin >> b;

    circle_area = PI * ((b * b) / 4) * ((2 * a - b) / (2 * a + b));

    cout << "Circle Area Inscribed in an Isosceles Triangle is " << circle_area << endl;

    return 0;
}