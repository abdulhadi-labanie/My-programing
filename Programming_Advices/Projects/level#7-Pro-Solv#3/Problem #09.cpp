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

void PrintArrRowCenter(int arr[3][3], short rows, short cols)
{
    short C_Row = rows / 2;

    for (int j = 0; j < cols; j++)
    {
        printf("%0*d \t", 2, arr[C_Row][j]);
    }
}

void PrintArrColCenter(int arr[3][3], short rows, short cols)
{
    short Center_col = cols / 2;

    for (int i = 0; i < rows; i++)
    {
        printf("%0*d \t", 2, arr[i][Center_col]);
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

    cout << "\nMiddle Row of Matrix1 is:\n";
    PrintArrRowCenter(arr1, 3, 3);

    cout << "\nMiddle Col of Matrix1 is:\n";
    PrintArrColCenter(arr1, 3, 3);

    cout << endl;

    return 0;
}