/*
Saul Hennessy
Written on 18/02/2020
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#include <time.h>

int main()
{
  int i, t, power;
  int n=1;
  double sum;
  double time_taken;

  printf("N power?\n");
  scanf("%d", &power);

  t=clock();

  for(i=1; i<=power; i++)
  {
    n=n*10;
  }
  printf("N is %d\n\n", n);

  for(i=1; i<=n; i++)
  {
    //printf("in loop");
    sum = sum + (1.0/i);
    //printf("%f", sum);
  }
  printf("%lf\n\n", sum);
  t=clock() - t;
  time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

  printf("%lf s to run", time_taken);


	getchar();
	return 0;
}
