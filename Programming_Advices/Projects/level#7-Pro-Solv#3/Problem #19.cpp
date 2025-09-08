#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To)
{
    // Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, arr[i][j]);
            // cout << setw(3) << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

short MaxOfMatrix(int arr[3][3], short Rows, short Cols)
{
    short max = arr[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }

    return max;
}

short MiniOfMatrix(int Matrix1[3][3], short Rows, short Cols)
{
    short mini = Matrix1[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix1[i][j] < mini)
                mini = Matrix1[i][j];
        }
    }

    return mini;
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int Matrix1[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "Minimum number is : " << MiniOfMatrix(Matrix1, 3, 3) << endl;
    cout << "Max number is : " << MaxOfMatrix(Matrix1, 3, 3) << endl;

    return 0;
}