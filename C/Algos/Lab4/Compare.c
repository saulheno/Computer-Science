/*
Saul Hennessy
Written on 25/02/2020
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#include <stdlib.h>



int main()
{
	int i,j, ent_1, ent_2;
	int matching=0;
	int max = 1000;

	printf("How many random numbers in the 1st array?\n\n");
	scanf("%d", &ent_1);

	printf("How many random numbers in the 2nd array?\n\n");
	scanf("%d", &ent_2);

	int arr_rand_1[ent_1];
	int arr_rand_2[ent_2];

	for(i=0; i<ent_1; i++)
	{
		arr_rand_1[i]=rand()%max;
	}

	for(i=0; i<ent_2; i++)
	{
		arr_rand_2[i]=rand()%max;
	}

	for(i=0; i<ent_1; i++)
	{
	  for(j=0; j<ent_2; j++)
	  {
	    if(*(arr_rand_1+i)==*(arr_rand_2+j)) //if a match is found, matching is incremented by 1
	    {
	      matching= matching + 1;
				printf("%d is a match!\n",arr_rand_1[i]);
      }
	 	}

	}

	printf("\n\n%d matching\n", matching);

	getchar();
	return 0;
}
