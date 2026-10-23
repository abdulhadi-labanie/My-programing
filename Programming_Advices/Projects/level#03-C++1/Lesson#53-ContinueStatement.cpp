#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int total = 0;

    for (int i = 1; i <= 5; i++) {
        cout << i << ". Enter a num: ";
        cin >> num;

        if (num > 50) {
            continue;
        }
            total += num;
    }
    cout << "The total is = " << total << endl;

    return 0;
}