#include <iostream>
#include <cstdlib>
using namespace std;

// Function to read a positive number from the user
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}


int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}


void PrintRandArray(int arr[100], int& arrLength)
{

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);

        cout << arr[i] << " ";
    }
    cout << "\n";
}



int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;
     

    arrLength = ReadPositiveNumber("Enter who matsh numbers you want to rand: ");

    cout << "\nArray Elements: ";
    PrintRandArray(arr, arrLength);

    return 0;
}
