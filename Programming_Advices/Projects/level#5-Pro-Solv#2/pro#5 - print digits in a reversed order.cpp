#include <iostream>
#include <string>
#include <cmath>
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

void PrintReversedNum(int num)
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

    PrintReversedNum(ReadPositiveNumber("Enter a positive number: "));

    return 0;
}
