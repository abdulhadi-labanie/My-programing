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

bool IsNumberOdd(int Number)
{
	if (Number % 2 != 0)
		return true;
	else
		return false;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{

	if (IsNumberOdd(Number))
	{
		arrLength++;
		arr[arrLength - 1] = Number;
	}
}


void CopyArrayUsingAddArrayElement(int arr[100], int arrDestinatio[100], int arrLength, int& arrDestinatioLength)
{

	for (int i = 0; i < arrLength; i++)
	{
			AddArrayElement(arr[i], arrDestinatio, arrDestinatioLength);
	}
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

	int arr[100], arr2[100], arrLength = 0, arr2Length = 0;

	GenerateRandomArray(arr, arrLength);

	cout << "Array elements: " << endl;
	PrintArray(arr, arrLength);

	CopyArrayUsingAddArrayElement(arr, arr2, arrLength, arr2Length);

	cout << "\nArray 2 elements after copy:" << endl;
	PrintArray(arr2, arr2Length);


	return 0;
}