/*
Program that uses a fucntion to return data
*/
#include <stdio.h>

//function Signature
int sum(int, int);

int main
{
  int n1,n2;

  printf("Enter first number.");
  scanf("%d", &n1);

  printf("Enter second number.");
  scanf("%d", &n2);

  printf("Sum of %d and %d is %d", n1, n2, sum);
}
