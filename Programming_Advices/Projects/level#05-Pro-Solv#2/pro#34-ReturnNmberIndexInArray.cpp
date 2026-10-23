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

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int arrLength)
{


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


int CheckIfNumInArray(int arr[100], int arrLenght, int checknum)
{
    for (int i = 0; i < arrLenght; i++)
    {
        if (checknum == arr[i])
        {
            return i;
        }
    }

    return -1;
}

void PrintResultOfSearchNumInArray(int arr[100], int arrLenght, int checknum)
{
    int SearchNum = CheckIfNumInArray(arr, arrLenght, checknum);

    cout << "\n";

    if (SearchNum != -1)
    {
        cout << "Number you are looking for is: " << checknum << "\n";
        cout << "The number found at position : " << SearchNum << "\n";
        cout << "Thr number found its order   : " << (SearchNum + 1) << "\n";
    }
    else
    {
        cout << "Number you are looking for is: " << checknum << "\n";
        cout << "The number is not found :-(\n";
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength, checknum;

    arrLength = ReadPositiveNumber("\nEnter a array size: ");

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements:\n";
    PrintArray(arr, arrLength);

    checknum = ReadPositiveNumber("\nPlease enter a number to search for: ");

    PrintResultOfSearchNumInArray(arr, arrLength, checknum);

    return 0;
}