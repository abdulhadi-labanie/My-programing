#include <iostream>
using namespace std;

int ReadNumber()
{
	int num;

	cout << "Enter a number: ";
	cin >> num;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Please enter a valid num: ";
		cin >> num;
	}

	return num;
}

int main()
{

	cout << "\nYour Number is: " << ReadNumber();

	return 0;
}