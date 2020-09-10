/*
Saul Hennessy
Simple program to read, store and then display 3 floats/decimals
Wrote 7th October 2019
*/
#include <stdio.h>
int main()
{
	float Num1, Num2, Num3;
	
	printf("Please enter 3 decimals\n");
	
	scanf("%f\n", &Num1);
	scanf("%f\n", &Num2);
	scanf("%f", &Num3);
	
	printf("%.4f\n%.3f\n%.0f", Num1, Num2, Num3);
	
	getchar();
	return 0;	
}