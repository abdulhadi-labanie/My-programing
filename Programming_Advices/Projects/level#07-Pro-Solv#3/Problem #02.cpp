#include <iostream>
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

short RowSum(int arr[3][3], short rows)
{
    short RowTotal = 0;

    for (int j = 0; j < 3; j++)
    {
        RowTotal += arr[rows][j];
    }

    return RowTotal;
}

void PrintRowSum(int arr[3][3])
{
    cout << "The fllowing are the sum of each row in the matrix:" << endl;
    for (int i = 0; i <= 2 ; i++)
    {
        cout << "Row " << i << " sum = " << RowSum(arr, i) << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];

    SaveRandomNumInArray(arr);
    cout << "The folllowing is a 3x3 random matrix:" << endl;
    PrintResult(arr);

    cout << endl;

    PrintRowSum(arr);

    return 0;
}