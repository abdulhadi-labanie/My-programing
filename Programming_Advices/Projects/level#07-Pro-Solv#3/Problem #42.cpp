#include <iostream>
#include <string>
using namespace std;

string ReadStr(string text)
{
    string str;

    cout << text;
    getline(cin, str);

    return str;
}

string ReplaceWordInStringUsingBuiltInFunction(string str, string wordToRep, string repWord)
{
    string str2 = str;
    short pos = 0;

    while ((pos = str2.find(wordToRep)) != std::string::npos)
    {
        str2.replace(pos, wordToRep.length(), repWord);
        pos += repWord.length();
    }

    return str2;
}


int main()
{
    string UserSTR = ReadStr("Please enter a string:\n");
    string WordToRep = ReadStr("Please enter a word wand to replace: ");
    string RepTo = ReadStr("Please enter the replaced word: ");


    string result = ReplaceWordInStringUsingBuiltInFunction(UserSTR, WordToRep, RepTo);

    cout << "String after replace:\n" << result << endl;

    return 0;
}