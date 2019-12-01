/*
Saul Hennessy
XXXXXXXXXXXXXX
Wrote on 11/11/19
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>

#define limits 10
int main()
{
  int i, a[limits];
  for (i = 0; i < 10; i++)
  {
    a[i] = 9 -i;
  }
  printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);

  for (i = 0; i < 10; i++)
  {
    a[i] = a[ a[i] ];
  }

  printf("%d", a[8]);


	getchar();
	return 0;
}
