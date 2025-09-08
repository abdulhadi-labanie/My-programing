#include <iostream>
using namespace std;

int ReadPositiveNumber(int& arrLength)
{
    do
    {
        cout << "\nEnter number of elements: ";
        cin >> arrLength;

    } while (arrLength <= 0);

    return arrLength;
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
        arr[i] = i + 1;
    }
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

void Swap(int& A, int& B)
{
    int Temp;

    Temp = A;
    A = B;
    B = Temp;
}

void ShuffleArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
    }
}

 
int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 0;

    ReadPositiveNumber(arrLength);


    FillArrayWithRandomNumbers(arr, arrLength);


    cout << "\nArray Elements befor shuffle:\n";
    PrintArray(arr, arrLength);

    ShuffleArray(arr, arrLength);

    cout << "\nArray elements after shuffle:\n";
    PrintArray(arr, arrLength);


    return 0;
}