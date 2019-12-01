/*
Saul Hennessy
A program to determine if user input is a vowel or not
Wrote on 14/10/19
*/
#include <stdio.h>
int main()
{
	char ch1;
	
	printf("Enter a letter\n");
	scanf("%1s",&ch1);
	
		switch (ch1) 
		{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				printf("It is a Vowel!\n");
				break;
				
			default:
				printf("It is a Consonant!\n");
		}	
	getchar();
	return 0;	
}