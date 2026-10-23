#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To)
{
    // Function to generate a random number between From and To
    return rand() % (To - From + 1) + From;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        cout << "\n";
    }
}

bool AreIdentityMatrices(int Matrix1[3][3], short Rows, short Cols)
{
    short IsSame = Matrix1[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (i == j && Matrix1[i][i] != IsSame)
                return false;
            else if (i != j && Matrix1[i][j] != 0)
                return false;
        }
    }

    return true;
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    //int Matrix1[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int Matrix1[3][3] = { {3,0,0},{0,3,0},{0,0,3} };

    //FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);


    if (AreIdentityMatrices(Matrix1, 3, 3))
        cout << "\nYES: Both matrices are identical.";
    else
        cout << "\nNO: Matrices are NOT identical.";

    system("pause>0");
}