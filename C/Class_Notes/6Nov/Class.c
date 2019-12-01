/*
Saul Hennessy
2D+ array initialising and printing.
Written on 06/11/19
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
int main()
{
  int i,j;
  int f[3][4]=
  {
    3, 3, 3, 3,
    2, 2, 2, 2,
    1, 1, 1, 1,
  };
  for(i=0; i<3; i++)
	{
    for(j=0; j<4; j++)
    {
      printf("%d ", f[i][j]);
    }
    printf("\n");
	}

	getchar();
	return 0;
}
