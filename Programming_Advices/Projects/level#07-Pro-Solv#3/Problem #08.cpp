#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cstdlib> 
using namespace std;

int GetRandomNumer(int From, int To)
{
    int RandomNum = rand() % (To - From + 1) + From;

    return RandomNum;
}

void FileRandomNumberInArr(int arr[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = GetRandomNumer(1, 10);
        }
    }
}

void CalcoleteMultiplyResult(int arr1[3][3], int arr2[3][3], int arrResult[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arrResult[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
}

void PrintArrContenten(int arr[3][3], short rows, short cols)
{


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%0*d \t", 2, arr[i][j]);
        }
        cout << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[3][3], arr2[3][3], arrResult[3][3];

    cout << "Matrix1:" << endl;
    FileRandomNumberInArr(arr1, 3, 3);
    PrintArrContenten(arr1, 3, 3);

    cout << endl;

    cout << "Matrix2:" << endl;
    FileRandomNumberInArr(arr2, 3, 3);
    PrintArrContenten(arr2, 3, 3);

    cout << endl;

    CalcoleteMultiplyResult(arr1, arr2, arrResult);
    cout << "Results:" << endl;
    PrintArrContenten(arrResult, 3, 3);


    return 0;
}