/*
Saul Hennessy
XXXXXXXXXXXXXX
Written on XX/XX/XX
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#include<stdlib.h>

#define DOLLAR 1.19
#define EURO 0.84
#define ENTRY_NO 3

int i;

void change_to_Euro(float *arr_e, float *arr_c)
{
  for(i=0; i<ENTRY_NO; i++)
  {
    *(arr_c+i)=*(arr_e+i) * EURO;
  }

}

void change_to_Dollar(float *arr_e, float *arr_c)
{
  for(i=0; i<ENTRY_NO; i++)
  {
    *(arr_c+i)=*(arr_e+i) * DOLLAR;
  }
}

int main()
{
  int exit=0;
  int curr, reply;
  float average, sum;
  float arr_entry[ENTRY_NO];
  float arr_converted[ENTRY_NO];

  while(exit==0)
  {
    printf("Hello! Choose an option!\n1. Choose a starting currency.\n2. Enter your values.\n3. See your values.\n4. Convert.\n5. Get average.\n6. Exit.\n\n");
    scanf("%d", &reply);
    getchar();
    _flushall();

    switch (reply)
    {
      case 1:
      {
        do
        {
        printf("Choose a currency to convert from!\n1. Euro\n2. Dollar\n\n");
        scanf("%d", &curr);
        getchar();
        _flushall();

        }while(curr <=0 || curr >2);
        break;

      }

      case 2:
      {
        printf("Enter %d values.\n", ENTRY_NO);
        for(i=0; i<ENTRY_NO; i++)
        {
          printf("Entry %d\n", i+1);
          scanf("%f", &arr_entry[i]);
          getchar();
          _flushall();
          system("cls");
        }
        break;
      }

      case 3:
      {
        if(curr==1)
        {
          for(i=0; i<ENTRY_NO; i++)
          {
            printf("€%.2f\n", arr_entry[i]);
          }
        }
        else if(curr==2)
        {
          for(i=0; i<ENTRY_NO; i++)
          {
            printf("$%.2f\n", arr_entry[i]);
          }
        }
        break;
      }

      case 4:
      {
        if(curr==1)
        {
          change_to_Dollar(arr_entry, arr_converted);
          for(i=0; i<ENTRY_NO; i++)
          {
            printf("$%0.2f\n", arr_converted[i]);
          }
        }
        else if (curr==2)
        {
          change_to_Euro(arr_entry, arr_converted);
          for(i=0; i<ENTRY_NO; i++)
          {
            printf("€%0.2f\n", arr_converted[i]);
          }
        }
        break;
      }
      case 5:
      {
        sum=0;
        for(i=0; i<ENTRY_NO; i++)
        {
          sum = sum + arr_converted[i];
        }
        average = sum / ENTRY_NO;
        printf("Average is %.2f\n", average);
        break;
      }

      case 6:
      {
        exit=1; //the exit flag being tripped, closing the program
        return 0;
        break;
      }
      default:
      {
        printf("Error. Please choose an option within the paramaters.\n\n");
        getchar();
        break;
      }
    }
    printf("Press enter to continue..."); //the message that appears after each and every case
    getchar(); //waits for a user input of enter to move on, allowing the user to read anything currently on screen before proceeding
    system("cls"); //clears the screen
  }


	getchar();
	return 0;
}
