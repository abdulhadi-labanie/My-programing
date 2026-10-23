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

string ReplaceWordInString(string S1, string StringToReplace, string sRepalceTo)
{
    short pos = S1.find(StringToReplace);
    while (pos != string::npos)
    {

        S1 = S1.erase(pos, StringToReplace.length());
        S1 = S1.insert(pos, sRepalceTo);

        pos = S1.find(StringToReplace); // find next occurrence
    }
    return S1;
}

string ToLowerString(string str) {
    for (char& c : str) {
        c = tolower(c);
    }
    return str;
}

string ReplaceWordWithNoMathCase(string text, string target, string replacement) 
{
    string result = "";
    string lowerText = ToLowerString(text);
    string lowerTarget = ToLowerString(target);
    size_t i = 0;

    while (i < text.length()) 
    {
        if (lowerText.substr(i, target.length()) == lowerTarget) {
            result += replacement;
            i += target.length();
        }
        else {
            result += text[i];
            i++;
        }
    }

    return result;
}



int main()
{
    string UserSTR = ReadStr("Please enter a string:\n");
    string WordToRep = ReadStr("Please enter a word wand to replace: ");
    string RepWord = ReadStr("Please enter the replaced word: ");


    string result1 = ReplaceWordInString(UserSTR, WordToRep, RepWord);
    cout << "\nString after replace With match case:\n" << result1 << endl;

    string result2 = ReplaceWordWithNoMathCase(UserSTR, WordToRep, RepWord);
    cout << "\nString after replace With no match case:\n" << result2 << endl;

    return 0;
}