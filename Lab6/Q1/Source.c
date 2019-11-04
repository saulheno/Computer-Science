/*
Saul Hennessy
Small program to enter into an array
Written on 4/11/19
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>

#define numbers 5
//defines all variables for controlling entries

int main()
{
  int entry [numbers];
  int transfer [numbers];
  int i,j;

  printf("Enter numbers\n\n");

  for(i=1; i<=numbers; i++)
  {
    scanf("%d", &entry [i]);
  }

  for(i=1; i<=numbers; i++)
  {
    transfer[i]=entry[i]; //Transfering array entry into array transfer
  }

  for(i=1; i<=numbers; i++)
  {
    printf("%d", entry [i]);
    printf("%d", transfer [i]); //checking to make sure array has transferred correctly
  }

	getchar();
	return 0;
}
