#include <iostream>
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

void PrintCopyArray2(int arr[100],int arr2[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr2[i] = arr[i];

}



int main()
{
    srand((unsigned)time(NULL));

    int arr[100],arr2[100], arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    PrintCopyArray2(arr, arr2, arrLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    cout << "\nThe Copy of array numbers is : ";
    PrintArray(arr2, arrLength);

    return 0;
}