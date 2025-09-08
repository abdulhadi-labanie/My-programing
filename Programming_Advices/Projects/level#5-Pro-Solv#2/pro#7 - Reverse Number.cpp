#include <iostream>
#include <string>
using namespace std;


int ReadPositiveNumber(string Massege)
{
    int num;

    do
    {
        cout << Massege;
        cin >> num;
    } while (num <= 0);

    return num;
}

int ReverseNumber(int num)
{
    int reversed = 0, num2 = 0;

    while (num > 0)
    {
        reversed = num % 10;
        num = num / 10;
        num2 = num2 * 10 + reversed;
    }

    return num2;
}

int main()
{

    cout << "\nReverse is = " << ReverseNumber(ReadPositiveNumber("Enter a positive number: ")) << endl;

    return 0;
}