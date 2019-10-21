/*
Saul Hennessy
Simple program to read, store and then display 3 characters
Wrote 7th October 2019
*/
#include <stdio.h>
int main()
{
	char Ch1;
	char Ch2;
	
	printf("Please enter 2 characters\n");
	scanf("%c\n", &Ch1);
	scanf("%c", &Ch2);
	
	printf("%c\n%c\n", Ch1,Ch2);
	
	getchar();
	return 0;
}