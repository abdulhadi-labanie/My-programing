#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void PrintName_1() {
    string name1;

    cout << "#1 Enter name: \n";
    cin.ignore(1, '\n');
    getline(cin, name1);

    cout << "The name is = " << name1 << "\n\n";
}

void SwapNum() {
    int box, num1, num2;
    cout << "Enter num1:\n";
    cin >> num1;

    cout << "Enter num2:\n";
    cin >> num2;

    box = num1;
    num1 = num2;
    num2 = box;
    cout << "Number 1 = " << num1 << "\n" << "Number 2 = " << num2;
}

int RectangleArea(int num1, int num2) {
    int result;

    result = num1 * num2;

    return result;
}

float RectangleAreaThrough(int a, int d) {
    float result;

    result = a * sqrt( pow(d, 2) - pow(a, 2) );

    return result;
}

float CircleArea(float r) {
    float result;

    result = 3.14156 * pow(r, 2);

    return result;
}

float CircleAreaThroughDiameter(float D) {
    float result;

    result = (3.14 * pow(D, 2)) / 4;

    return result;
}

float CircleAreaInscribedInASquare(int A) {
    float result;
    const float PI = 3.14;

    result = (PI * pow(A, 2)) / 4;

    return result;
}

double CircleAreaAlongTheCircumference(int L) {
    float result;

    result = pow(L, 2) / (4 * 3.14151);

    return result;
}

double Circle_Area_Inscribed_in_Triangle(float a, float b) {
    double result;
    const float PI = 3.1415;

    result = (PI * b*b / 4 ) * ( (2 * a - b) / (2 * a + b) );

    return result;
}

double Circle_Area_Arbitrary_Triangle(float a, float b, float c) {
    double result, p;
    const float PI = 3.1415;

    p = (a + b + c) / 2;

    result = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c) ));
    result = pow(result, 2);
    result = PI * result;

    return result;
}

void PowerOf2_3_4() {
    int num, power2, power3, power4;

    cout << "Enter a num to power: ";
    cin >> num;

    power2 = pow(num, 2);
    power3 = pow(num, 3);
    power4 = pow(num, 4);

    cout << "power#2 = " << power2 << "\npower#3 = " << power3 << "\npower#4 = " << power4;
}

int Power_Of_M(int num, int M) {
    int result;

    result = pow(num, M);

    return result;
}

int TaskDurationInSeconds(short day, short hours, short min, short seconds) {
    int result;
    
    result = day * 24 * 60 * 60 + hours * 3600 + min * 60 + seconds;

    return result;
}

void SecTo_Days_Hours_Min_Sec() {
    int D_day, H_day, M_day, total_s;
    int D, H, M, S;

    cout << "Enter total seconds:\n";
    cin >> total_s;

    D_day = 24 * 3600;  // ÚÏÏ ÇáËæÇäí İí Çáíæã
    H_day = 3600;       // ÚÏÏ ÇáËæÇäí İí ÇáÓÇÚÉ
    M_day = 60;         // ÚÏÏ ÇáËæÇäí İí ÇáÏŞíŞÉ

    D = total_s / D_day;          // ÍÓÇÈ ÇáÃíÇã
    H = (total_s % D_day) / H_day;  // ÍÓÇÈ ÇáÓÇÚÇÊ
    M = (total_s % H_day) / M_day;  // ÍÓÇÈ ÇáÏŞÇÆŞ
    S = total_s % M_day;           // ÍÓÇÈ ÇáËæÇäí

    // ØÈÇÚÉ ÇáäÊíÌÉ
    cout << "Days: " << D << ", Hours: " << H << ", Minutes: " << M << ", Seconds: " << S << endl;

}


int main()
{
    
    // pro #1
    PrintName_1();

    // pro #14
    SwapNum();

    cout << "\n\n";

    // pro #15
    cout << "#15 Area is = " << RectangleArea(10, 20);

    cout << "\n\n";

    // pro #16
    cout << "#16 Area is = " << RectangleAreaThrough(5, 40);

    cout << "\n\n";

    // pro #18
    cout << "#18 Area is = " << CircleArea(5);
        
    cout << "\n\n";

    // pro #19
    cout << "#19 Area is = " << CircleAreaThroughDiameter(10);
    
    cout << "\n\n";

    // pro #20
    cout << "#20 Area is = " << CircleAreaInscribedInASquare(10);
    
    cout << "\n\n";

    // pro #21
    cout << "#21 Area is = " << CircleAreaAlongTheCircumference(20);
    
    cout << "\n\n";

    // pro #22
    cout << "#22 Area is = " << Circle_Area_Inscribed_in_Triangle(20, 10);

    cout << "\n\n";

    // pro #23
    cout << "#23 Area is = " << Circle_Area_Arbitrary_Triangle(5, 6, 7);

    cout << "\n\n";

    // pro #31
    PowerOf2_3_4();

    cout << "\n\n";

    // pro #32
    cout << "#32 The num is : 2 and power4 = " << Power_Of_M(2, 4);

    cout << "\n\n";

    // pro #42
    cout << "#42 The total of sen = " << TaskDurationInSeconds(2, 5, 45, 35);
    
    cout << "\n\n";

    // pro #43
    SecTo_Days_Hours_Min_Sec();


    return 0;
}