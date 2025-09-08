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

int SumOfDigits(int num)
{
    int reversed = 0, sum = 0;

    while (num > 0)
    {
        reversed = num % 10;
        num = num / 10;
        sum += reversed;
    }

    return sum;
}

int main()
{

    cout << "Sum Of Digits = " << SumOfDigits(ReadPositiveNumber("Enter a positive number: ")) << endl;

    return 0; 
}