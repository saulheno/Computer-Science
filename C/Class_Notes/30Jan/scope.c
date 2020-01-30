/*
Program that uses parameters with a function
*/
#include <stdio.h>

//#define NUMBERS 5

//Function Signature

void stars(int, char);

int main()
{
  int number;
  char character;

  printf("How many stars?\n");
  scanf("%d", &number);


  printf("Enter character.\n");
  scanf("%c", &character);

  //calling stars
  stars(number, character); //Takes value of "number"

  return 0;
}

//Implementing stars Function

void stars(int n1, char c1) //Value of number writes to n1. Used to copy variables from block to block
{
  int i;

  for (i = 0; i < n1; i++)
  {
    printf("*");
  }

  printf("%c", c1);
}
void characters(char c1) //Value of character writes to c1. Used to copy variables from block to block
{

}
