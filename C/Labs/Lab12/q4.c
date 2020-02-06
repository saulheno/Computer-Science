/*
Saul Hennessy
Written on 06/02/2020
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>

int average(int sum)
{
  int avg;
  avg = sum/3;
}
int sum(int n1, int n2, int n3)
{
  int avg, sum;
  sum=n1 + n2 + n3;
  avg=average(sum);
}
int main()
{
  int n1,n2,n3,avg;
  printf("Numbers?\n");
  scanf("%d%d%d",&n1,&n2,&n3);

  avg=sum(n1, n2, n3);

  printf("Average of %d,%d and %d is %d\n",n1, n2, n3, avg);


	getchar();
	return 0;
}
