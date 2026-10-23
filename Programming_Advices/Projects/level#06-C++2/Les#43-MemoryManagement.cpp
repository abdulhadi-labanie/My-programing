#include <iostream>
using namespace std;

int main()
{

	int* prtX;
	float* prtY;

	prtX = new int;
	prtY = new float;

	*prtX = 30;
	*prtY = 30.3;

	cout << *prtX << endl;
	cout << *prtY << endl;

	delete prtX;
	delete prtY;

	return 0;
}