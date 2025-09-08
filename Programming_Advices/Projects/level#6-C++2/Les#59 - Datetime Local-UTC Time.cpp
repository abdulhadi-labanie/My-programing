#pragma warning(disable : 4996)
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	time_t t = time(0);

	char* ptr_t = ctime(&t);

	cout << ptr_t << endl;


	tm* gmtm = gmtime(&t);
	ptr_t = asctime(gmtm);
	cout << "UTC = " << ptr_t << endl;

}