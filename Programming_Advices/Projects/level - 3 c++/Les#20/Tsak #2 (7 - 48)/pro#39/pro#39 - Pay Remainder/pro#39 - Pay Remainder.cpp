#include <iostream>
using namespace std;

int main()
{
    short cash, price, total;
    
    cout << "Enter the cash: \n";
    cin >> cash;

    cout << "Enter the price: \n";
    cin >> price;

    total = cash - price;

    cout << "total = " << total;

    return 0;
}