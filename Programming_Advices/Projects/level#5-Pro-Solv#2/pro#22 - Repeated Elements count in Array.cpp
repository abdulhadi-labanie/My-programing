#include <iostream>
using namespace std;

// Function to read a positive number from the user
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

// Function to read elements into an array
void ReadArray(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    cout << "\nEnter array elements: \n";
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i];
    }
    cout << endl;
}

// Function to print elements of an array
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// Function to count how many times a number is repeated in the array
int TimesRepeated(int Number, int arr[100], int arrLength)
{
    int count = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (Number == arr[i])
        {
            count++;
        }
    }
    return count;
}

// Main function
int main()
{
    int arr[100], arrLength, NumberToCheck;

    // Read the array and number to check
    ReadArray(arr, arrLength);
    NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");

    // Print the original array
    cout << "\nOriginal array: ";
    PrintArray(arr, arrLength);

    // Print the number of times the number is repeated
    cout << "\nNumber " << NumberToCheck;
    cout << " is repeated " << TimesRepeated(NumberToCheck, arr, arrLength) << " time(s)\n";

    return 0;
}
