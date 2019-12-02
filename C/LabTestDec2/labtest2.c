/*
Saul Hennessy
Lab Test 2
Written on 02/12/2019
Written in Atom (Linux) and compiled with GCC
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{

	int i;
	int *ptr;
	char barack[]={'Y','E','S',' ','W','E',' ','C','A','N'};
	char michelle[10];

	//Part 1
	for (i = 0; i < 10; i++)
	{
		*(michelle+i)=*(barack+i);
	}

	//Part 2
	for (i = 0; i < 10; i++)
	{
		if (*(michelle+i)==' ')
		{
			*(michelle+i)='_';
		}
		//Part 3
		printf("%c", *(michelle+i));
	}

	getchar();
	return 0;
}
