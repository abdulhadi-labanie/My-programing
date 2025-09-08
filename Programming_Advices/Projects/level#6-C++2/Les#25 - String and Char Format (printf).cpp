#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	char letter = 'A';
	char word[] = "Hello world!";

	printf("Hei %s, wlecame\n", word);

	printf("Setting the whidth of A : %*c", 3, letter);

	return 0;
}