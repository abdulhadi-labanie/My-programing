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

void WriteWordsOfSutringInVector(string str, vector <string>& Words)
{
    string delim = " ";
    string word;
    short pos = 0;

    while ((pos = str.find(delim)) != std::string::npos)
    {
        word = str.substr(0, pos);
        if (word != " ")
        {
            Words.push_back(word);
        }

        str.erase(0, pos + delim.length());
    }
    if (str != "")
    {
        Words.push_back(str);
    }

}


string ReverseWordsInString(vector <string> Words)
{
    vector <string>::iterator iter = Words.end();
    string STR;

    while (iter != Words.begin())
    {
        iter--;

        STR += *iter + " ";
    }

    STR = STR.substr(0, STR.length() - 1);  //remove last space.

    return STR;
}

int main()
{
    vector <string> Words;
    string UserSTR = ReadStr();


    WriteWordsOfSutringInVector(UserSTR, Words);

    cout << "The number of words in your string is: " << Words.size() << endl << endl;

    cout << "Your string wrords are :\n" << ReverseWordsInString(Words) << endl;

    return 0;
}