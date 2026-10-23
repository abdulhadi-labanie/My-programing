#include <iostream>
using namespace std;
using namespace MyInputLib;
using namespace MyLib;

#include "MyLib.h";
#include "MyInputLib.h";


int main()
{

	
	MyLib::Test();

	cout << "Sum 2 Nums: " << MyLib::Sum2Numbers(10, 20) << endl;

	int Number = MyInputLib::ReadNumber();

	cout << Number;


	return 0;
}