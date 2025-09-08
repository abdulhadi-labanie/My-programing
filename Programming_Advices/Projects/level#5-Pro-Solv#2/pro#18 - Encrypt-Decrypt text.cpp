#include <iostream>
#include <string>
using namespace std;

string ReadText()
{
	string pass;

	cout << "Plaese Enter Password: ";
	getline(cin, pass);

	return pass;
}

string TextAfterEncryption(string pass, short EncryptionKey)
{
	string TextEncryption = "";

	for (int i = 0; i <= pass.length(); i++)
	{
		pass[i] = char((int) pass[i] + EncryptionKey);
	}

	return pass;
}

string TextAfterDecryption(string encryption, short EncryptionKey)
{

	string TextDecryption = "";

	for (int i = 0; i <= encryption.length(); i++)
	{
		encryption[i] = char((int) encryption[i] - EncryptionKey);
	}

	return encryption;
}

void PrintTextBeforEncryptonAndAfter(short EncryptionKey)
{
	string pass, encryption, decryption;

	pass = ReadText();
	encryption = TextAfterEncryption(pass, EncryptionKey);
	decryption = TextAfterDecryption(encryption, EncryptionKey);

	cout << "\n--------------------------------\n\n";
	cout << "Test Befor Encryption: " << pass << endl;
	cout << "Test After Encryption: " << encryption << endl;
	cout << "Test After Decryption: " << decryption << endl;

}

int main()
{
	const short EncryptionKey = 2;

	PrintTextBeforEncryptonAndAfter(EncryptionKey);

	return 0 ;
}