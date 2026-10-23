#include <iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;

int GetRandomNumer(int From, int To)
{
    int RandomNum = rand() % (To - From + 1) + From;

    return RandomNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols)
{
    for (int i = 0; i <= rows - 1; i++)
    {
        for (int j = 0; j <= cols - 1; j++)
        {
            arr[i][j] = GetRandomNumer(1, 100);
        }
    }
}

void PrintMatrixWithRandomNumbers(int arr[3][3])
{
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << arr[i][j] << "\t";
        }

        cout << endl;
    }
}

int ColSum(int RandomArr[3][3], short col)
{
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        sum += RandomArr[i][col];
    }
    return sum;
}

void PrintColsSum(int RandomArr[3][3], short col)
{
    cout << "The following are the sum of each col in the matrix:" << endl;

    for (int i = 0; i <= col - 1; i++)
    {
        cout << "Col " << i << " Sum = " << ColSum(RandomArr, i) << endl;
    }
}


int main()
{
    srand((unsigned)time(NULL));

    int RandomArr[3][3];

    FillMatrixWithRandomNumbers(RandomArr, 3, 3);
    cout << "\nThe following is a 3x3 random matrix:\n";
    PrintMatrixWithRandomNumbers(RandomArr);
    
    cout << endl;

    PrintColsSum(RandomArr, 3);

    return 0;
}