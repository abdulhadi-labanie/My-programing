#include <iostream>
using namespace std;

int ReadPositiveNumber(string massege)
{
	int num = 0;

	do
	{
		cout << massege;
		cin >> num;

	} while(num <= 0);

	return num;
}

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

string GenerateRandom4Chars()
{
	string word = "";

	for (int i = 1; i <= 4; i++)
	{
		word += char(RandomNumber(65, 90));
	}

	return word;
}

string GenerateFullPass()
{
	string FullPass = "";

	FullPass = GenerateRandom4Chars() + "-" + GenerateRandom4Chars() + "-" + GenerateRandom4Chars() + "-" + GenerateRandom4Chars();

	return FullPass;
}

void InputFullPassInArray(string arr[100], int arrNums)
{
	for (int i = 0; i < arrNums; i++)
	{
		arr[i] = GenerateFullPass();
	}
}

void PrintArrayValues(string arr[100], int arrNums)
{
	cout << "\nArray elements:\n\n";

	for (int i = 0; i < arrNums; i++)
	{
		cout << "Array[" << i << "] : " << arr[i] << endl;
	}
}


int main()
{
	srand((unsigned)time(NULL));

	string arr[100];

	int arrLength = ReadPositiveNumber("Enter how match feys you want to generate: ");

	InputFullPassInArray(arr, arrLength);

	PrintArrayValues(arr, arrLength);


	return 0;
}