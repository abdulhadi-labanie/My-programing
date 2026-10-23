#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    fstream MyFile;

    MyFile.open("MyFile.txt", ios::out);

    if (MyFile.is_open())
    {
        MyFile << "Hei Abdulhadi !!\n";
        MyFile << "3434";

        MyFile.close();
    }


    return 0;
}