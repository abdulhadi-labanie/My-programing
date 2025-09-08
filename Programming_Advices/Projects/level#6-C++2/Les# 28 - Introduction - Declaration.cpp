#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector <int> varr = { 1,2,3 };

	for (int &num : varr) {
		cout << num << " ";
	}
	cout << endl;

	return 0;
}