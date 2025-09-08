#include <iostream>
#include <cmath>
using namespace std;

void printNum_1(int num) {
    for (int i = 1; i <= num; i++) {
        cout << i << endl;
    }
}

void printNum_2(int num) {
    for (int i = 1; num >= 1; num--) {
        cout << num << endl;
    }
}

int sumOddNum(int numSum) {
    int total = 0;

    for (int i = 1; i <= numSum; i=i+2) {
        total += i;
        cout << total << endl;
    }

    return total;
}

int sumEvenNum(int evenSum) {
    int total1 = 0;

    for (int i = 2; i <= evenSum; i = i + 2) {
        total1 += i;
        cout << total1 << endl;
    }

    return total1;
}

int maltiFactorial(int calcuFactorial) {
    int total = 1;

    for (int i = calcuFactorial; i >= 1; i--) {
        total *= i;
        cout << "= " << total << "\n";
    }

    return total;
}

int powerNum(int num, int power) {
    int totalPower = num;

    for (int i = 0; i <= power-2; i++) {
        totalPower *= num;
        cout << totalPower << endl;
    }

    return totalPower;
}

void printLetters() {
    for (int i = 65; i <= 90; i++) {
        cout << char(i) << endl;
    }
}


int main()
{
    int num1, num2, oddSum, evenSum, num4, num5, power;

    cout << "Enter a num to print from 1 to Num: ";
    cin >> num1;
    printNum_1(num1);

    cout << "\nEnter a num to print from Num to 1: ";
    cin >> num2;
    printNum_2(num2);

    cout << "\nEnter a num to print sum of odd num: ";
    cin >> oddSum;
    cout << "The total is = " << sumOddNum(oddSum) << endl;

    cout << "\nEnter a num to print sum of even num: ";
    cin >> evenSum;
    cout << "The total is = " << sumEvenNum(evenSum) << endl;

    cout << "\nEnter num to calculate factorial of num: ";
    cin >> num4;
    cout << "The total is = " << maltiFactorial(num4) << endl;

    cout << "\nEnter num to power: ";
    cin >> num5;
    cout << "Enter power num: ";
    cin >> power;
    cout << "The total is = " << powerNum(num5, power) << endl;

    cout << "\nletter is = " << endl;
    printLetters();

    return 0;
}