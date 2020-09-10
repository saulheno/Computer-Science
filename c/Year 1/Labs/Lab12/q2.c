/*
Saul Hennessy
Written on 06/02/2020
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>

void function (char c, int n) //Can declare and define funtions in one go
{
  int i;
  for (i=0;i<n;i++)
  {
    printf("%c", c);
  }

}
int main()
{
  int n;
  char c;
  printf("Character?\n");
  scanf("%c", &c);

  printf("Number?\n");
  scanf("%d", &n);

  function(c, n);


	getchar();
	return 0;
}
