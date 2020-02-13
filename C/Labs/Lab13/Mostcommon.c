/*
Saul Hennessy
Written on 13/02/2020
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>

#define NUMBER 7

int common(char a[NUMBER])
{
  int count[2000], i; //need a big range for the count array to function
  int max = 0;
  int index;

  for(i=0; i<NUMBER; i++) //this for loop counts how many of each character there is
  {
    count[a[i]]++; //seperate array made.
                   //Every time a duplicate character appears,
                   //it is incremented for the character
  }
  for(i=0; i<NUMBER; i++)//this for sets the max based off the count from the previous
  {
    if(count[a[i]]>max) //Checks if a certain letters count is greater than the max
    {
      max=count[a[i]]; //sets max to new count
      index = i; //index holds the position (i) of the letter.
                 //Its passed back to get the final character.
    }
      //printf("Max is: %d\n",max); //used for debugging
  }
  return index;
}


int main()
{
  int i;
  int index=0;
  char a[NUMBER];

  printf("Enter %d characters.\n", NUMBER);

  for(i=0;i<NUMBER;i++)
  {
    scanf(" %c", &a[i]); //scans in the entered characters
    getchar();
  }
  for(i=0;i<NUMBER;i++)
  {
    printf("%c ", a[i]);
  }
  printf("\n");

  index = common(a); //passing to array

  printf("The most common character is %c", a[index]);

	//getchar();
	return 0;
}
