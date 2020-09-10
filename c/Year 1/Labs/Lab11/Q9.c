/*
Saul Hennessy
Written on 30/01/2020
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *ptr, no_num, i;

  printf("How many numbers?\n");
  scanf("%d", &no_num);

  ptr = calloc(no_num, sizeof(int));

  for(i=0; i<no_num; i++)
    {
      printf("Enter number %d\n", i+1);
      scanf("%d", &*(ptr+i));
    }
  for(i=0; i<no_num; i++)
      {
        printf("Number %d: %d\n", i+1, *(ptr+i));
      }
	getchar();
	return 0;
}
