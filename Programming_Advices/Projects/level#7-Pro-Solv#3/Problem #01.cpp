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

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    
    SaveRandomNumInArray(arr);
    cout << "The folllowing is a 3x3 random matrix:" << endl;
    PrintResult(arr);

    return 0;
}