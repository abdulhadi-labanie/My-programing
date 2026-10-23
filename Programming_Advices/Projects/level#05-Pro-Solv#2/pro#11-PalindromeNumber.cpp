#include <iostream>
using namespace std;


int ReadPositiveNumber(string Message)
{
    int num;

    do
    {
        cout << Message;
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

bool CheckIsPalindromeNumber(int num)
{
    return num == ReverseNumber(num);
}

int main()
{

    if ( CheckIsPalindromeNumber(ReadPositiveNumber("Enter a positive number: ")) )
    {
        cout << "Yes, it is a Palindrome number.\n";
    }
    else
    {
        cout << "No, it is Not a Palindrome number!!!\n";
    }

    return 0;
}
