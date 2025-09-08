#include <iostream>
#include <stdio.h>
using namespace std;


void RowsArrResult(int arr[3][3])
{
    int total = 0;

    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 3; j++)
        {
            total++;
            arr[i][j] = total;
        }
    }
}

void ColsArrResult(int arr[3][3], int arrT[3][3])
{
    short total = 0;

    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 3; j++)
        {
            arrT[i][j] = arr[j][i];
        }
    }
}

void PrintArrContenten(int arr[3][3], short rows, short cols)
{


    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            printf("%0*d \t", 2, arr[i][j]);
        }
        cout << endl;
    }
}

int main()
{
    int arr1[3][3], arr2[3][3];

    cout << "\nThe following is a 3x3 ordered matrix:\n";
    RowsArrResult(arr1);
    PrintArrContenten(arr1, 3, 3);

    cout << endl;

    cout << "\n\nThe following is the transposed matrix:\n";
    ColsArrResult(arr1, arr2);
    PrintArrContenten(arr2, 3, 3);



    return 0;
}