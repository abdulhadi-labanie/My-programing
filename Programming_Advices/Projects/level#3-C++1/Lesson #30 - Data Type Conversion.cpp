#include <iostream>
#include <string>
using namespace std;

int main(){

	string str1 = "43.22";

	float float1 = stof(str1);
	cout << "str 43.22 to float = " << float1 << "\n";

	double double1 = stod(str1);
	cout << "str 43.22 to double = " << double1 << "\n\n";


	int N1 = 20;

	string intToStr = to_string(N1);
	cout << "int 20 to string = " << intToStr << "\n";

	double N2 = 33.5;

	string doubleToStr = to_string(N2);
	cout << "double 33.5 to string = " << doubleToStr << "\n\n";


	float N3 = 55.23;

	string floatToStr = to_string(N3);
	cout << "float 55.23 to string = " << floatToStr << "\n\n";

	int floatToInt1 = N3;
	cout << "float 55.23 to int = " << floatToInt1 << "\n";
	int floatToInt2 = (int) N3;
	cout << "float 55.23 to (int) N3 = " << floatToInt2 << "\n";
	int floatToInt3 = int(N3);
	cout << "float 55.23 to int(N3) = " << floatToInt3 << "\n";


	return 0;
}