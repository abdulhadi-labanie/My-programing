#include <iostream>
using namespace std;

void FileMatrixOrderedNum(int arr[3][3], short row, short col)
{
    int sum = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = sum;
            sum += 1;
        }
    }
}

void PrintMatrixOrderedNum(int arr[3][3], short row, short col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3];

    FileMatrixOrderedNum(arr, 3, 3);

    cout << "The following is a 3x3 ordered matrix: " << endl;
    PrintMatrixOrderedNum(arr, 3, 3);


    return 0;
}