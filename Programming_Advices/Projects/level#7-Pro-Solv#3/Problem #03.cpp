#include <iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;

int GetRandomNumer(int From, int To)
{
    int RandomNum = rand() % (To - From + 1) + From;

    return RandomNum;
}

void SaveRandomNumInArray(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = GetRandomNumer(1, 100);
        }
    }

}

void PrintResult(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void RowSum(int arr[3][3],int arrRowSum[3], short rows)
{
    short RowTotal = 0;

    for (int j = 0; j < 3; j++)
    {
        RowTotal += arr[rows][j];
    }

    arrRowSum[rows] = RowTotal;
}

void PrintRowSum(int arr[3][3],int arrRowSum[3], short rows, short cols)
{

    cout << "The fllowing are the sum of each row in the matrix:" << endl;
    for (int i = 0; i <= rows - 1 ; i++)
    {
        RowSum(arr, arrRowSum, i);
        cout << "Row " << i << " sum = " << arrRowSum[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3], arrRowSum[3];

    SaveRandomNumInArray(arr);
    cout << "The folllowing is a 3x3 random matrix:" << endl;
    PrintResult(arr);

    cout << endl;

    PrintRowSum(arr, arrRowSum, 3,3);

    return 0;
}