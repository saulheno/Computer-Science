/*
Saul Hennessy
Simple program to read, store and then display 3 numbers
Wrote 7th October 2019
*/
#include <stdio.h>
int main()
{
	int Num1;
	int Num2;
	int Num3;
	
	printf("Please enter 3 numbers\n");
	
	scanf("%d\n", &Num1);
	scanf("%d\n", &Num2);
	scanf("%d", &Num3);

	printf("%d\n", Num1);
	printf("%d\n", Num2);
	printf("%d\n", Num3);
	
	getchar();
	return 0;
}