#include <iostream>
using namespace std;


int main()
{

	int num;

	cout << "Enter a number: ";
	cin >> num;

	(num <= 0) ? cout << num << " is Not positive.\n" : cout << num << " is positive.\n";

	(num == 0) ? cout << num << " = 0.\n" : ((num <= 0) ? cout << num << " is Not positive.\n" : cout << num << " is positive.\n");

	return 0;
}