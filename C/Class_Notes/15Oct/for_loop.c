/*
Saul Hennessy
This program is a basic intro to FOR loops
Wrote on 15/10/19
*/
#include <stdio.h>
int main()
{
	int i;
	for(i=0; i<11; i=i+2) //for(initial_value; condition; counter_change)
	{
		printf("%d\n", i);
	}
	return 0;
}
