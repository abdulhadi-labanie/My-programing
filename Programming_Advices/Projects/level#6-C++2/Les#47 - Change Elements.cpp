
#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector <int> vNums;

	vNums.push_back(10);
	vNums.push_back(20);
	vNums.push_back(30);

	for (const int& num : vNums)
	{
		cout << num << endl;
	}

	cout << "\n-----------------------------------\n";

	for (const int& num : vNums)
	{
		cout << num + 10 << endl;
	}

	cout << "\n-----------------------------------\n";

	const vector <float> vFloat = { 100,200,300 };

	for (const float& num : vFloat)
	{
		cout << num << endl;
	}

	cout << "\n-----------------------------------\n";

	for (const float& num : vFloat)
	{
		cout << num + 10 << endl;
	}

	cout << "\n-----------------------------------\n";

	for (const float & nums : vFloat)
	{
		cout << nums << endl;
	}

	return 0;
}