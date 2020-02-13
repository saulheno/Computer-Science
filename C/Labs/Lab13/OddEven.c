/*
Saul Hennessy
Written on 13/02/2020
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#include <stdbool.h>


int OddEven(int num)
{
  bool check;

  if(num%2==0)
  {
    check=true;
  }
  else
  {
    check=false;
  }
  return check;
}
int main()
{
  int num;
  bool check;
  printf("Enter a  number\n");
  scanf("%d", &num);

  check=OddEven(num);

  if(check)
  {
    printf("%d\n", check);
  }
  else
  {
    printf("%d\n", check);
  }

	getchar();
	return 0;
}
