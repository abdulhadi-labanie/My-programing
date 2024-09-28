#include <iostream>
using namespace std;

int main()
{
    float D, area;
    const double PI = 3.141592653589793;

    cout << "Enter D:\n";
    cin >> D;

    area = (PI * (D * D) / 4);

    cout << "Area is " << area;
}