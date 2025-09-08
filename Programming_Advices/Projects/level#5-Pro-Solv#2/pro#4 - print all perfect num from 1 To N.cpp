#include <iostream>
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

bool CheckIsPerfectNum(int num)
{
    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    return (sum == num);
}

void PrintIsPerfectNum1ToN(int num)
{
    for (int counter = 1; counter <= num; counter++)
    {
        if (CheckIsPerfectNum(counter) == true)
            cout << counter << " is perfect!\n";
    }
}

int main()
{
    PrintIsPerfectNum1ToN(ReadPositiveNumber("Enter a number: "));

    return 0;
}