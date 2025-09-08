#include <iostream>
#include <cmath>
using namespace std;

enum enIsPrime {prime = 1, NotPrime = 2};

int ReadPositiveNumber(string Massege)
{
    int num;

    do
    {
        cout << Massege;
        cin >> num;
    } while (num < 2);

    return num;
}

enIsPrime CheckNumIsPrime(int num)
{
    if (num == 2) 
        return enIsPrime::prime;

    if (num % 2 == 0) 
        return enIsPrime::NotPrime;

    int M = sqrt(num); 
    for (int counter = 3; counter <= M; counter += 2) 
    {
        if (num % counter == 0)
            return enIsPrime::NotPrime;
    }

    return enIsPrime::prime; 
}

void PrintResultOfIsPrime(int num)
{
    cout << "\nPrime number are from " << 1 << " To " << num << " :\n";
    
    for (int i = 3; i <= num; i++)
    {
        if (CheckNumIsPrime(i) == enIsPrime::prime)
            cout << i << endl;
    }
}


int main()
{
    
    PrintResultOfIsPrime(ReadPositiveNumber("Please Enter a noumer to check is prime: "));
    
    return 0;
}