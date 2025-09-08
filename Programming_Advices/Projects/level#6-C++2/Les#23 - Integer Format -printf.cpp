#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int page = 1, TotalPages = 10;

	printf("The page number %d \n", page);
	printf("You are in page %d of %d \n", page, TotalPages);

	printf("The page number %0*d \n", 2, page);
	printf("The page number %0*d \n", 3, page);
	printf("The page number %d*0 \n", 4, page);
	printf("The page number %0*d \n", 5, page);
	printf("The page number %0*d \n", 6, page);

	printf("The result of %d + %d = %d\n", page, TotalPages, page + TotalPages);


	return 0;
}