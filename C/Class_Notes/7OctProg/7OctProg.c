#include <stdio.h>

int main()
{
	float balance;
	balance=0;
	printf("Enter Balance \n");
	scanf("%f", &balance);
	{
		if (balance == 100)
		{
			printf("Balance is 100 \n");
		}	
		else
		{
			printf("Balance is not 100 \n");
		}
	}
	/*
	== checks value, needed or it overwrites the specified value
	!= is not equal
	*/
	getchar();
	return 0;

}