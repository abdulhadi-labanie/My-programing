#include <iostream>
using namespace std;

int main()
{
    short raha;
    float raha_service, raha_sales;

    cout << "Enter your price to add 10% services and 16% sales tax:\n";
    cin >> raha;

    raha_service = raha * 1.1;
    raha_sales = raha_service * 1.16;

    cout << "Total price " << raha << " 10% plus 16% sales tax = " << raha_sales;

    return 0;
}