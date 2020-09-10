/*
Saul Hennessy
A program to determine if user entry is even or odd
Wrote on 14/10/19
*/
#include <stdio.h>
int main()
{
	int input;
	
	
	printf("Enter a number between 1 and 100!\n");
	scanf("%d", &input);
	
	if ((input == 100 || input < 100) && (input == 1 || input > 1))
	
	/*
	This line exists solely because i didnt realise <= worked
	*/
		{ 
			if (input % 2 == 0) //Modulus does not work with float values
				{
					printf("The number is even!\n");
				}
			else
				{
					printf("the number is odd!\n");
				}			
		}
	else
		{
			printf("A number between 1 and 100 only, please\n");
		}
	getchar();
	return 0;	
}