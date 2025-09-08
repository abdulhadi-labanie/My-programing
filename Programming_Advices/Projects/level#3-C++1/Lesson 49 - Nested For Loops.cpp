#include <iostream>
using namespace std;

void pritnAA_to_ZZ() {
    for (int i = 65; i <= 90; i++) {
        for (int Char = 65; Char <= 90; Char++) {
            cout << char(i) << char(Char) << endl;
        }
        cout << "----------------\n";
    }
}

void printStars() {
    for (int i = 10; i >= 1; i--) {
        for (int l = i; l >= 1; l--) {
            cout << '*';
        }
        cout << endl;
    }
}

void print1To10minus() {
    for (int i = 10; i >= 1; i--) {
        for (int l = 1; l <= i; l++) {
            cout << l << ' ';
        }
        cout << endl;
    }
}

void print1To10plus() {
    for (int i = 1; i <= 10; i++) {  // ÍáÞÉ ááÊÍßã ÈÚÏÏ ÇáÃÓØÑ
        for (int line = 1; line <= i; line++) {  // ÍáÞÉ áØÈÇÚÉ ÇáÃÑÞÇã
            cout << line << ' ';
        }
        cout << endl;  // ØÈÇÚÉ ÓØÑ ÌÏíÏ ÈÚÏ ÇäÊåÇÁ ÍáÞÉ ÇáØÈÇÚÉ ÇáÏÇÎáíÉ
    }
}

void printA_to_Fplus() {
    for (int i = 65; i <= 70; i++) {
        for (int l = 65; l <= i; l++) {
            cout << char(l) << " ";
        }
        cout << endl;
    }
}

void print10_To_1minus() {
    for (int i = 1; i <= 10; i++) {
        for (int l = i; l <= 10; l++) {
            cout << l << " ";
        }
        cout << endl;
    }
}


int main()
{

    pritnAA_to_ZZ();
    printStars();
    print1To10minus();
    print1To10plus();
    printA_to_Fplus();
    print10_To_1minus();

    return 0;
}
