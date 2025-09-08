#include <iostream>
using namespace std;

int main() {
    int a = 10;    // متغير من النوع int
    int& ref = a;  // مرجع للمتغير a

    cout << "Value of a: " << a << endl;       // الإخراج: 10
    cout << "Value of ref: " << ref << endl;   // الإخراج: 10

    // تعديل القيمة عبر المرجع
    ref = 20;

    cout << "Value of a after modifying ref: " << a << endl;   // الإخراج: 20
    cout << "Value of ref after modification: " << ref << endl; // الإخراج: 20

    return 0;
}