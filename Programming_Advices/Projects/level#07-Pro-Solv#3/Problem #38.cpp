#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ReadStr()
{
    string str;

    cout << "Please enter a string:\n";
    getline(cin, str);

    return str;
}

string TrimRight(string str, char delim = ' ')
{
    for (short i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] != delim)
        {
            return str.substr(0, i + 1);
        }
    }
    return "";
}

string TrimLeft(string str, char delim = ' ')
{
    for (short i = 0; i < str.length(); i++) 
    {
        if (str[i] != delim)
        {
            return str.substr(i, str.length() - i );
        }
    }

    return "";
}

string Trim(string str, char delim = ' ')
{
    return TrimLeft(TrimRight(str, delim), delim);
}

int main()
{
    
    string str1 = "   Hello World   ";
    cout << "[" << TrimRight(str1, ' ') << "]" << endl;

    string str2 = "   Hello World   ";
    cout << "[" << TrimLeft(str2, ' ') << "]" << endl;

    string str3 = "   Hello World   ";
    cout << "[" << Trim(str3, ' ') << "]" << endl;

    return 0;
}