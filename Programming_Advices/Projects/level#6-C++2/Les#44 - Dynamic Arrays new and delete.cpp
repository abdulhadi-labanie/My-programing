#include <iostream>
using namespace std;


int main()
{
	int num;
	float * ptrARR;

	cout << "Enter a numbers of studen: ";
	cin >> num;

	ptrARR = new float[num];

	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << "- studen score is : ";
		cin >> *(ptrARR + i);
	}
	
	cout << "\n\n";
	cout << "Displayuing grades of students.\n";

	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << "- Studen score is " << *(ptrARR + i) << endl;
	}

	delete[] ptrARR;

	return 0;
}