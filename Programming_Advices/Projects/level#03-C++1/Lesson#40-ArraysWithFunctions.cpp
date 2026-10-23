#include <iostream>
using namespace std;

void getGradeMarke(int grade[3]) {
    cout << "\n";
    cout << "Enter grade 1: ";
    cin >> grade[0];

    cout << "Enter grade 2: ";
    cin >> grade[1];

    cout << "Enter grade 3: ";
    cin >> grade[2];
}

float calculateGradeAVE(int grade[3]) {

    return (grade[0] + grade[1] + grade[2]) / 3;

}


int main()
{
    int grade[3];

    getGradeMarke(grade);
    cout << "*********************************\n";
    cout << "The average of grades is = " << calculateGradeAVE(grade);

    return 0;
}