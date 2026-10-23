#include <iostream>
#include <vector>
using namespace std;

int ReadNumber()
{
	int num;

	cout << "Enter a Number: ";
	cin >> num;

	return num;
}

void fullVector(int inx, vector <int>& vNum)
{
	for (int i = 1; i <= inx; i++)
	{
		int num = 0;
		cout << "Add a number: ";
		cin >> num;

		vNum.push_back(num);
	}
}

void PrintValue(vector <int>& vNum)
{
	for (int num : vNum)
	{
		cout << num << endl;
	}
}

void startGame(vector <int> vNum)
{
	char answer;
	do
	{
		int inx = ReadNumber();

		cout << endl;

		fullVector(inx, vNum);

		cout << "Do you want to contenu [y,n]: ";
		cin >> answer;
	} while (answer == 'y' || answer == 'Y');

	cout << endl;

	PrintValue(vNum);
}

int main()
{
	vector <int> vNums;

	startGame(vNums);

	return 0;
}