#include <iostream>
using namespace std;

int MySum(int a, int b)
{
    return (a + b);
}

int MySum(double a, double b)
{
    return (a + b);
}

int MySum(double a, int b)
{
    return (a + b);
}

int MySum(int a, double b)
{
    return (a + b);
}

int MySum(int a, int b, int c)
{
    return (a + b + c);
}

int MySum(int a, int b, int c, int d)
{
    return (a + b + c / 4);
}

int main()
{
    cout << MySum(34.34, 5) << endl;
    cout << MySum(5, 5) << endl;
    cout << MySum(5, 6.1) << endl;
    cout << MySum(5, 5,5) << endl;

    return 0;
}