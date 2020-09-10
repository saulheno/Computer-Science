/*
Saul Hennessy
Written on 06/02/2020
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>

void HiLo(int n1, int n2, int n3) //declaring the function beginning
{
  int highest, lowest;
  if(n1>n2) //This big if elseif else tree is running checks to see which numbers are in which position, based on their value compared to each other 
  {
    if(n1>n3)
    {
      highest=n1;
      if(n2>n3)
      {
        lowest=n3;
      }
      else
      {
        lowest=n2;
      }
    }
    else
    {
      highest=n3;
      lowest=n2;
    }
  }
  else if(n1>n3)
  {
    lowest=n3;
    highest=n2;
  }
  else
  {
    lowest=n1;
    if(n2>n3)
    {
      highest=n2;
    }
    else
    {
      highest=n3;
    }
  }

  printf("Highest is %d, lowest is %d\n",highest, lowest);
}
int main()
{
  int n1, n2, n3;
  printf("Enter 3 numbers\n");
  scanf("%d%d%d", &n1, &n2, &n3);

  HiLo(n1,n2,n3);

	getchar();
	return 0;
}
