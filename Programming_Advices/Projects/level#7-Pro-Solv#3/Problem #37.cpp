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

void GetWordsOfSTR(string str, vector <string>& Words, string delim = " ")
{
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


void PrintVectorWords(vector <string> Words)
{
    for (string& word : Words)
    {
        cout << "- " << word << endl;
    }
}

int main()
{
    vector <string> Words;
    string UserSTR = ReadStr();


    GetWordsOfSTR(UserSTR, Words);

    cout << "Tokens: " << Words.size() << endl;
    cout << "Your string wrords are :\n\n";
    PrintVectorWords(Words);

    return 0;
}