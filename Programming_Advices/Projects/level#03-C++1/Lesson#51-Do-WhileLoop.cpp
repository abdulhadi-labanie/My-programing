#include <iostream>
using namespace std;

int main() {
    int number;

    do {
        cout << "Enter a positive number: ";
        cin >> number;

        if (number < 0) {
            cout << "Invalid input. Please try again.\n";
        }
    } while (number < 0);  // ÊÓÊãÑ ÇáÍáŞÉ ØÇáãÇ Ãä ÇáÚÏÏ ÓÇáÈ

    cout << "You entered: " << number << endl;

    return 0;
}