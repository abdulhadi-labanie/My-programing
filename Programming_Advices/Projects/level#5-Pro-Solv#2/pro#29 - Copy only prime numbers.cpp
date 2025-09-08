#include <iostream>
#include <cmath>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements: ";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}


enum enIsPrime { prime = 1, NotPrime = 2 };

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

void CopyArrayofNumPrime(int arr[100], int arr2[100], int arrLength, int& arrLength2)
{

    for (int i = 0; i < arrLength; i++)
    {
        if (CheckNumIsPrime(arr[i]) == enIsPrime::prime)
        {
            arr2[arrLength2] = arr[i];
            arrLength2++;
        }
    }
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;
    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100], arrLength2 = 0;
    CopyArrayofNumPrime(arr, arr2, arrLength, arrLength2);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    cout << "\nThe Copy of array numbers is : ";
    PrintArray(arr2, arrLength2);

    return 0;
}