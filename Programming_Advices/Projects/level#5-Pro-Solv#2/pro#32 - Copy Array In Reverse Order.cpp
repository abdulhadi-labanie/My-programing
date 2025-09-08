#include <iostream>
using namespace std;

int ReadPositiveNumber(int& arrLength)
{
	do
	{
		cout << "Enter a length of array: ";
		cin >> arrLength;

	} while (arrLength <= 0);

	return arrLength;
}

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void GenerateRandomArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void Swap(int& A, int& B)
{
	int tamp;

	tamp = A;
	A = B;
	B = tamp;
}

void GenerateCopyArray(int arr[100], int arr2[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr2[i] = arr[i];
	}
}

void GenerateCopyReversedArray(int arr[100], int arr2[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr2[i] = arr[arrLength - 1 - i];
	}
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arr2[100], arrLength = 0;

	ReadPositiveNumber(arrLength);

	GenerateRandomArray(arr, arrLength);
	GenerateCopyArray(arr, arr2, arrLength);

	GenerateCopyReversedArray(arr, arr2 , arrLength);

	cout << "Array 1 elements: \n";
	PrintArray(arr, arrLength);

	cout << "\nArray 2 elements after copying array 1 in reversed orser: \n";
	PrintArray(arr2, arrLength);

	return 0;
}