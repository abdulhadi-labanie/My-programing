#include <iostream>

int main()
{
    float num, total;

    std::cout << "Enter a number:\n";
    std::cin >> num;

    total = num / 2;

    std::cout << "Half of the " << num << " is " << total << std::endl;

    return 0;
}