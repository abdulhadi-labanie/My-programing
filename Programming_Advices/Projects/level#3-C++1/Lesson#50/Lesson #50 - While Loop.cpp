#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	while (i <= 10) {
		cout << i << endl;
		i++;
	}

	cout << "\n------------------------\n";

	i = 10;
	while (i >= 1) {
		cout << i << endl;
		i--;
	}

	cout << "\n------------------------\n\n";

	int num28, total28 = 0;
	cout << "Enter odd num: ";
	cin >> num28;

	i = 1;
	while (i <= num28) {
		total28 += i;
		i += 2;
	}
	cout << "The total is = " << total28 << endl;

	cout << "\n------------------------\n\n";

	int num29, total29 = 0;
	cout << "Enter even num: ";
	cin >> num29;

	i = 2;
	while (i <= num29) {
		total29 += i;
		i += 2;
	}
	cout << "The total is = " << total29 << endl;

	cout << "\n------------------------\n\n";

	int num30, total30;
	cout << "Enter positive num: ";
	cin >> num30;

	while (num30 < 0) {
		cout << "Enter positive num: ";
		cin >> num30;
	}
	total30 = num30;
	while (num30 > 1) {
		num30--;
		total30 *= num30;
	}

	cout << "The total is = " << total30 << endl;

	cout << "\n------------------------\n\n";

	int power32, num32, total32;

	cout << "Enter num: ";
	cin >> num32;
	cout << "Enter power num: ";
	cin >> power32;

	i = 1;
	total32 = 1;
	while (i <= power32) {
		total32 *= num32;
		i++;
	}

	cout << "The total is = " << total32 << endl;

	cout << "\n------------------------\n\n";

	int num37, total37;

	cout << "Enter num: ";
	cin >> num37;

	total37 = 0;
	while (num37 != -99) {
		total37 += num37;
		cout << "Enter num: ";
		cin >> num37;
	}

	cout << "The total is = " << total37 << endl;

	cout << "\n------------------------\n\n";

	int charA_Z = 65;

	while (charA_Z <= 90) {
		cout << char(charA_Z) << "\n";
		charA_Z++;
	}

	cout << "\n------------------------\n\n";

	int pass, total50 = 7500, Password = 1234;

	cout << "Enter password: ";
	cin >> pass;

	while (pass != Password) {
		cout << "Wrong PIN!!\n";
		cout << "Enter password: ";
		cin >> pass;
	}

	cout << "The total is = " << total50 << endl;


	return 0;
}