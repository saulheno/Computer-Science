/*
Program that uses a fucntion to return data
*/
#include <stdio.h>

//function Signature
int sum(int, int);

int main()
{
  int n1,n2,total;

  printf("Enter first number.\n");
  scanf("%d", &n1);

  printf("Enter second number.\n");
  scanf("%d", &n2);
  //calling function to do the equation
  total=sum(n1,n2);

  printf("Sum of %d and %d is %d", n1, n2, total);
}

int sum(int n1,int n2)
{
  int total;

  total=n1+n2;

  //return total; //this is needed in Borland, but it breaks gcc
}
