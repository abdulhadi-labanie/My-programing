#include <iostream>
using namespace std;


int GenerateRandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void GenerateRandomArray(int arr[100], int& arrLength)
{

	cout << "\nPlease enter a number? ";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = GenerateRandomNumber(1, 100);
	}
}

int OddCount(int arr[100], int arrLength)
{
	int Counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] % 2 != 0)
		{
			Counter++;
		}
	}
	return Counter;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arr2[100], arrLength = 0;

	GenerateRandomArray(arr, arrLength);

	cout << "Array elements: " << endl;
	PrintArray(arr, arrLength);


	cout << "\nOdd Numbers count is: " << OddCount(arr, arrLength) << endl;


	return 0;
}