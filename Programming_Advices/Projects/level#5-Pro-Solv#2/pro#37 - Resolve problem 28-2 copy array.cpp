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

void AddArrayElement(int RandNumber, int arr[100], int& arrLength)
{
	//its a new element so we need to add the length by 1
	arrLength++;
	arr[arrLength - 1] = RandNumber;

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

	int arr[100], arrDestinatio[100], arrLength = 0, arrDestinatioLength = 0;

	GenerateRandomArray(arr, arrLength);

	cout << "Array elements: " << endl;
	PrintArray(arr, arrLength);

	CopyArrayUsingAddArrayElement(arr, arrDestinatio, arrLength, arrDestinatioLength);

	cout << "\nArray 2 elements after copy:" << endl;
	PrintArray(arrDestinatio, arrDestinatioLength);


	return 0;
}