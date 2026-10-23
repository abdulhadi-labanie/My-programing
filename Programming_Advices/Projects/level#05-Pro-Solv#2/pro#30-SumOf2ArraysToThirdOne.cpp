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
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

void SumOfArr1AndArr2(int arr[100], int arr2[100],int SumArr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        SumArr[i] = arr2[i] + arr[i];
    }

}



int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arr2[100],SumArr[100], arrLength;

    ReadPositiveNumber(arrLength);

    FillArrayWithRandomNumbers(arr, arrLength);
    FillArrayWithRandomNumbers(arr2, arrLength);

    SumOfArr1AndArr2(arr, arr2,SumArr, arrLength);

    cout << "\nArray Elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 Elements:\n";
    PrintArray(arr2, arrLength);

    cout << "\nSum of Array 1 and Array 2 Elements:\n";
    PrintArray(SumArr, arrLength);


    return 0;
}