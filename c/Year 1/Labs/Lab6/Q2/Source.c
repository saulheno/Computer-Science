/*
Saul Hennessy
Converting a users entry of farenheit into celsius
Written on 4/11/19
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>

#define size 3
int main()
{
	int i;
	//int conversion;
	int f[size];
	int c[size];
	printf("Enter temp in Farenheit\n");

	for(i=0; i<size; i++)
	{
		scanf("%d", &f[i]);
	}

	for(i=0; i<size; i++)
	{
		c[i]=(f[i]-32) * 5/9; //Brackets ruin this
	}

	for(i=0; i<size; i++)
	{
		printf("%dF=%dC\n", f[i], c[i]);
	}





	getchar();
	return 0;
}
