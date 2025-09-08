#include <iostream>
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

void printReverseNumber2(int num)
{
    int reversed = 0;

    while (num > 0)
    {
        reversed = num % 10;
        num = num / 10;
        cout << reversed << endl;
    }
}

int main()
{

    printReverseNumber2(ReverseNumber(ReadPositiveNumber("Enter a positive number: ")));

    return 0;
}
