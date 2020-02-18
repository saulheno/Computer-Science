/*
Saul Hennessy
Written on 18/02/2020
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
int main()
{
	int i;
	int entry;
	int remainder[32];
	int decimal;
	printf("Enter number to convert\n");
	scanf("%d", &entry);

	decimal=entry;

	for(i=0; decimal>0; i++)
	{
		remainder[i]= decimal % 2;
		decimal = decimal / 2;
		//printf("i is %d. Decimal is %d. Remainder is %d\n", i, decimal, remainder[i]);
	}
	//printf("i is %d\n", i);
	printf("%d in binary is ", entry);

	for(i=i-1; i>=0; i-- )
	{
		printf("%d",remainder[i]);
		//printf("loop");
	}


	getchar();
	return 0;
}
