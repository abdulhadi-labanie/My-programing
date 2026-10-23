#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);

	cout << "\nStack size = " << vNumbers.size() << endl;

	if (!vNumbers.empty())
		vNumbers.pop_back();

	if (vNumbers.size() > 0)
		vNumbers.pop_back();

	vNumbers.clear();

	cout << "\nStack size = " << vNumbers.size() << endl;


	cout << "Vector numbers is:\n";

	for (int num : vNumbers)
	{
		cout << num << endl; 
	}


	return 0;
}