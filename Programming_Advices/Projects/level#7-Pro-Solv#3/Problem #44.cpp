#include <string>
#include <iostream>
using namespace std;

string ReadStr(string text)
{
    string str;

    cout << text;
    getline(cin, str);

    return str;
}

string RemovePunctuationsFromString(string str)
{
    string s2 = "";

    for (short i = 0; i < str.length(); i++)
    {
        if (!ispunct(str[i]))
        {
            s2 += str[i];
        }
    }

    return s2;
}


int main()
{
    string UserSTR = ReadStr("Please enter a string:\n");

    cout << "\nString after delete punctuatins from string:\n" << RemovePunctuationsFromString(UserSTR) << endl;

    return 0;
}