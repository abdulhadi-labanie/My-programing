#include <iostream>


int main()
{
    float L, Circle_Area;
    const float PI = 3.14159;

    std::cout << "Enter circumference (L):\n";
    std::cin >> L;

    Circle_Area = (L * L) / (4 * PI);

    std::cout << "Circle area is " << Circle_Area << std::endl;

    return 0;
}