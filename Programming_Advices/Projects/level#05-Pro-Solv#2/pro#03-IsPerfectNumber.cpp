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
    } while (num < 0);

    return num;
}

bool ChekIsPerfectNum(int num)
{
    int M = round(num / 2);
    int sum = 0;

    for (int i = 1; i <= M; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    if (sum == num)
        return 1;
    else
        return 0;

} 

void PrintIsPerfectNum(int num)
{
    if (ChekIsPerfectNum(num) == 1)
        cout << num << " is perfect!\n";
    else
        cout << num << " is Not perfect!!!\n";
}

int main()
{
    PrintIsPerfectNum(ReadPositiveNumber("Enter a number: "));

    return 0;
}