/*
Saul Hennessy
A "scrap paper" of sorts to work out kinks in my function logic
Written on 19/02/2020
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_LOTTO_NUMBERS 6
int i;
int max=42;//Global declaration

int compare(int *arr_entry, int *arr_winners)
{
  int matching;

  for(i=0; i<MAX_LOTTO_NUMBERS; i++)
  {

  }
}
int main()
{
  int *arr_entry[MAX_LOTTO_NUMBERS], i, matching;
  int  *arr_winners[]={1, 3, 5, 7, 9, 11};

  //int *arr_winners[MAX_LOTTO_NUMBERS],
  // for(i=0; i<MAX_LOTTO_NUMBERS; i++)
  // {
  // *(arr1+i)= rand()%max;
  // } //this block randomises the value of the array if the user wants to switch to random winning numbers.

  for(i=0; i<MAX_LOTTO_NUMBERS; i++)
  {
    printf("Enter\n");
    scanf("%d", &*(arr_entry+i));
    if(*(arr_entry+i)<=0 || *(arr_entry+i)>MAX_LOTTO_NUMBERS)
    {
      printf("Error. Please choose a number within the paramaters.\n");
      i--;
    }
  }

  matching=compare(*arr_entry, *arr_winners);

  for(i=0; i<6; i++)
  {
    printf("%d ", *(arr_entry+i));
  }
  printf("\n");

  for(i=0; i<6; i++)
  {
    printf("%d ", *(arr_winners+i));
  }

	getchar();
	return 0;
}
