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
            printf(" %0*d", 2, arr[i][j]);
        }
        cout << "\n";
    }
}

bool CalcoleteUserMatrices(int Matrix1[3][3], short Rows, short Cols, short UserInput)
{
    bool result = false;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (UserInput == Matrix1[i][j])
                return result = true;
        }
    }
    return result;
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    //int Matrix1[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int Matrix1[3][3];
    short UserIput;

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "Enter the number to count in matrix: ";
    cin >> UserIput;

    if (CalcoleteUserMatrices(Matrix1, 3, 3, UserIput))
        cout << "\nYES: the number is in matric.";
    else
        cout << "\nNO: the number is not in matric.";


    system("pause>0");
}