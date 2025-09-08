#include <iostream>
using namespace std;

int ReadNumber(string Massege)
{
	int num;

	do
	{
		cout << Massege;
		cin >> num;

	} while (num <= 0);

	return num;
}

bool IsWantAddMoreNum()
{
	int result;

	cout << "Do you want to add more numbers? [0]:No , [1]:Yes? ";
	cin >> result;

	return result;
}

void AddNumToArray(int arr[100], int& arrLength)
{
	int i = 0;

	do
	{
		int num = ReadNumber("Please Enter a number: ");
		arr[i] = num;


		if (IsWantAddMoreNum() == 1)
		{
			arrLength++;
			i++;
		}
		else
			break;

		cout << "\n";

	} while (arrLength == i);
}

void PrintArrayElements(int arr[100], int arrLength)
{
	cout << "\n";

	for (int i = 0; i <= arrLength; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

}

int main()
{
	int arr[100], arrLength = 0;

	AddNumToArray(arr, arrLength);

	cout << "\n";

	cout << "Array Length: " << arrLength + 1 << endl;
	cout << "Array elements: ";
	PrintArrayElements(arr, arrLength);


	return 0;
}