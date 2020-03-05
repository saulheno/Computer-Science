/*
Saul Hennessy

This program is a "lotto" style game. In it, the user enters 6 unique Numbers
between 1 and 42. The numbers are then sorted, at the users request, and compared
to either a set list of winning numbers or a randomly populated list depending on the
set up of the program. Various prizes are won depending on the amount of correct guesses
made by the user. A running total of each number picked by the user is kept as the program repeats,
allowing the user to see their usage of each number. There is a variety of error checking implemented
to ensure no program crashes or incorrect data entry.

Written on 19/02/2020
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

#define MAX_LOTTO_NUMBERS 6
#define MAX 42
int i,j; //Global declarations
int gate = 0;

void insertionSort(int arr[]) //function is modular enough to take either arr_entry OR arr_winners depending on wanted usage
{
    int i, key, x;
    for (i = 1; i < MAX_LOTTO_NUMBERS; i++)
    {
        key = arr[i]; //Sets value 1 to the key, saving it like a temp.
        x = i - 1; //sets value 0 to X

        while (x >= 0 && arr[x] > key) //if X > value to its right and is 0 or above
        {
            arr[x + 1] = arr[x]; //Right entry (arr[i]/Key) gets replaced with the left entry (arr[x])
            x = x - 1;  //Checks value of entry to the left to see if it needs to keep moving.
        }
        arr[x + 1] = key; //Moves the key back to where the switched value of X was originally
    }
}
int compare(int *arr_e, int *arr_w) //the comparison function
{
  int matching=0;

  for(i=0, j=0; i<MAX_LOTTO_NUMBERS, j<MAX_LOTTO_NUMBERS; i++, j++) // loop sets up arr_e for checking against arr_w
  {
      if(*(arr_e+i)==*(arr_w+j)) //if a match is found, matching is incremented by 1
      {
        matching= matching + 1;
      }

  }
  return matching;
}
void initialise(int *arr_e, int *arr_w, int *arr_c) //Function to initialise one or both arrays, depending on program setup
{
  gate = 1; //this gate flag unlocks options 2-5 on the menu
  // int *arr_winners[MAX_LOTTO_NUMBERS],
  // for(i=0; i<MAX_LOTTO_NUMBERS; i++)
  // {
  // *(arr1+i)= rand()%max;
  // } //this block randomises the value of the array if the user wants to switch to random winning numbers.

  for(i=0; i<MAX_LOTTO_NUMBERS; i++) //loop begins
  {
    printf("Enter number %d \n", i+1);
    scanf("%d", &*(arr_e+i));
    getchar();
    _flushall();
    if(*(arr_e+i)<=0 || *(arr_e+i)>MAX) //checks to see if the number is 0 or below, or if its above 42
    {
      printf("Error. Please choose a number between 1 and 42.\n"); //an error message is shown if the number is not valid
      i--; //this decriment is crucial. It ensures the loop doesnt keep the unwanted entry, allowing it to be overwritten on the next pass
      Sleep(800);

    }
    else
    {
      *(arr_c+*(arr_e+i))= *(arr_c+*(arr_e+i)) + 1;//this increments the counting array for tracking number usage across runs
    }
    for(j=0; j<i; j++)//this is a loop to check if a number has already been used
    {
      if(*(arr_e+i)==*(arr_e+j))//if the entered number is the same as a previously entered number, an error is thrown
      {
        printf("Error. Please use different numbers\n");
        *(arr_c+*(arr_e+i))= *(arr_c+*(arr_e+i)) - 1;//this decriments the counter for number usage to ensure accurate results
        i--;//this decriment is crucial. It ensures the loop doesnt keep the unwanted entry, allowing it to be overwritten on the next pass
        Sleep(800);
      }
    }

    system("cls");
  }
}
int main()
{
  int exit=0;
  int reply;
  int arr_entry[MAX_LOTTO_NUMBERS];
  int arr_count[43]={}; //set to 43 as 0 is not a valid entry, ensuring it has 42 values from 1 on
  int arr_winners[]={1, 3, 5, 7, 9, 11}; //Various variables being initialised
  int matching=0;
  char confirmation;

  while (exit==0)//keeps the program running until an exit flag is trigered
  {
    printf("Hello! Choose an option\n\n");
		printf("1. Choose your numbers\n2. Show your numbers\n3. Sort your numbers\n4. Compare your numbers with the winning numbers\n5. Show the frequency of numbers used\n6. Exit\n\n");
		scanf("%d", &reply);
    getchar();
    //this catches any characters or other unwanted replies, and prevents an indefinite loop.

    switch (reply)
    //Cycles through selected options
    {
      case 1:
      {
        initialise(arr_entry, arr_winners, arr_count);
        break;
      }

      case 2: //this case prints the users entry back to them
      {
        if(gate==1) //checking if case 1 has been run yet before proceeding
        {
          for(i=0; i<6; i++)
          {
            printf("%d ", *(arr_entry+i));
          }

          printf("\n");
          Sleep(800);
          break;
        }
        else
        {
          printf("Please enter your numbers first.\n");//the error shown if case 1 has not had its flag tripped
          break;
        }
      }

      case 3: //this case calls the sorting function
      {
        if(gate==1)//checking if case 1 has been run yet before proceeding
        {
          insertionSort(arr_entry);
          //insertionSort(arr_winners); //only enable this if winners are random
          printf("Your numbers are now sorted in ascending order.\n");
          break;
        }
        else
        {
          printf("Please enter your numbers first.\n");//the error shown if case 1 has not had its flag tripped
          break;
        }
      }

      case 4:
      {
        if(gate==1)//checking if case 1 has been run yet before proceeding
        {
          for(i=0; i<6; i++) //printing user entries
          {
            printf("%d ", *(arr_entry+i));
          }

          printf("\n"); //prints a new line for neatness

          // for(i=0; i<6; i++) //printing the winning numbers
          // {
          //   printf("%d ", *(arr_winners+i));
          // } //block to test array values

          printf("\n");//prints a new line for neatness

          matching=compare(arr_entry, arr_winners); //calls the compare function to find score

          printf("Matching Numbers: %d\n\n", matching); //telling the user their score
          if(matching==6) //shows the prize for 6 matches
          {
            printf("Congratulations! You have won the Jackpot!\n");
          }
          else if(matching==5) //shows the prize for 5 matches
          {
            printf("Congratulations! You have won a new car!\n");
          }
          else if(matching==4) //shows the prize for 4 matches
          {
            printf("Congratulations! You have won a weekend away!\n");
          }
          else if(matching==3) //shows the prize for 3 matches
          {
            printf("Congratulations! You have won a cinema pass!\n");
          }
          else//shows the message for a loss
          {
            printf("Tough luck, you did not win any prizes. Try again perhaps?\n");
          }
          Sleep(1500);
          break;
        }
        else
        {
          printf("Please enter your numbers first.\n");//the error shown if case 1 has not had its flag tripped
          break;
        }
      }

      case 5:
      {
        if(gate==1)//checking if case 1 has been run yet before proceeding
        {
          for(i=1; i<43; i++)//prints the numbers used by the user and how many times they were used
          {
            if(*(arr_count+i)!=0)//does not print the number and its value if it has not been entered by the user yet
            {
              printf("%d was entered %d times\n", i, *(arr_count+i));
            }
          }
          printf("\n\nPress enter to continue\n");
          getchar();
          break;
        }
        else
        {
          printf("Please enter your numbers first.\n");//the error shown if case 1 has not had its flag tripped
          break;
        }
      }

      case 6://the exit case
      {
        printf("Are you sure you want to quit? y/n\n"); //checks to make sure the user didnt accidently hit the exit key
        scanf("%c", &confirmation);
        if(confirmation=='y')
        {
          exit=1; //the exit flag being tripped, closing the program
  			  return 0;
  			  break;
        }
        break;
      }

      default:
      {
        //This prevents any unwanted integers bugging out the code
  			printf("Error. Please choose an option within the paramaters.\n\n");
        Sleep(800);
        break;
      }
    }




    Sleep(800);
    _flushall();
    system("cls");//clears the screen to tidy the program up aesthetics wise
  }
  return 0;
}
