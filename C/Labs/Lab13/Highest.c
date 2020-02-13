/*
Saul Hennessy
Written on 13/02/2020
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#define NUMBERS 3

int highest(int a[NUMBERS])
{
  int high=a[0];
  int i;

  for(i=0; i<NUMBERS; i++)
  {
    if(a[i]>high)
    {
      high = a[i];
    }
  }
  return high;
}
int main()
{
  int i, high;
  int a[NUMBERS];
  printf("Enter %d numbers.\n", NUMBERS);

  for(i=0; i<NUMBERS; i++)
  {
    scanf("%d", &a[i]);
  }

  high = highest(a);

  printf("Highest number is %d", high);


	getchar();
	return 0;
}
