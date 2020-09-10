/*
Saul Hennessy
Written on 13/02/2020
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>

#define NUMBER 3

int Average(int num1, int num2, int num3)
{
	int avg, sum;

	sum = num1 + num2 + num3;

	avg = sum/NUMBER;

	return avg;
}
int main()
{
	int num1, num2, num3, avg;
	printf("Enter 3 numbers\n");

	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);

	avg=Average(num1, num2, num3);

	printf("The average of %d, %d and %d is %d", num1, num2, num3, avg);

	getchar();
	return 0;
}
