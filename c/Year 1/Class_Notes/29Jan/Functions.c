/*
Saul Hennessy
Program that uses a funtion
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#define NUMBER 5

void stars(void);

int main()
{
  printf("Before function call\n");
  //calling stars
  stars();
  printf("\nAfter function call\n");
	//getchar();
	return 0;
}

void stars()
{
  int i;

  for (i=0; i< NUMBER; i++)
  {
    printf("*");
  }
}
