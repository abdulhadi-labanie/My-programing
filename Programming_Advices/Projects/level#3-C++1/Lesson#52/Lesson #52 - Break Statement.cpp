#include <iostream>
using namespace std;

int getNumFromArr(int arr[10]) {
    int i;
    for (i = 0; i <= 9; i++) {
        if (arr[i] == 20) {
            break;
        }
    }
    return i;
}

int main()
{
    int arr[10] = { 10,20,44,55,33,22,99,88,99,100 };

    cout << "The num poztion in arr is = " << getNumFromArr(arr) << endl;

    return 0;
}