#include <iostream>
using namespace std;

void MyFunc()
{
    static int num = 1;

    cout << "The number is " << num << endl;
    num++;
}

int main()
{
    MyFunc();
    MyFunc();
    MyFunc();

    return 0;
}