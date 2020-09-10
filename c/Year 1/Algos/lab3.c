/*
Saul Hennessy
Written on 18/02/2020
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, power;
  int n=1;
  double sum;

  printf("N power?\n");
  scanf("%d", &power);

  for(i=1; i<=power; i++)
  {
    n=n*10;
  }
  printf("%d\n", n);

  for(i=1; i<=n; i++)
  {
    //printf("in loop");
    sum = sum + (1.0/i);
    //printf("%f", sum);
  }
  printf("%lf", sum);
	getchar();
	return 0;
}
