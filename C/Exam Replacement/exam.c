/*
Saul Hennessy
XXXXXXXXXXXXXX
Wrote on XX/XX/XX
Wrote in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int i,j;

struct code_counter {
int correct_code;
int wrong_code;
};

int main(){
  int exit=0;
  int reply;
  int arr_code[4]={};

  //keeps the program running until an exit flag is trigered
  while (exit==0){
    printf("Hello! Choose an option\n\n");
    printf("1. Code Selection\n2. Encrypt\n");
    printf("3. Check Code\n4. Decrypt\n");
    printf("6. Exit\n");

    scanf("%d", &reply);
    getchar();
    _flushall();
    //this catches any characters or other unwanted replies,
    //and prevents an indefinite loop.

    //Cycles through selected options
    switch (reply){
      case 1:{
        printf("1. Manually enter code\n");
        printf("2. Generate Code\n");

        scanf("%d", &reply);
        getchar();
        _flushall();

        switch (reply) {
          case 1:{
            printf("Code must be 4 numbers long ");
            printf("and each number be between 0 and 9\n");

            for(i=0;i<4;i++){
              scanf("%d", &*(arr_code+i));
              getchar();
              _flushall();

              //checks to see if the number is 0 or below, or if its above 42
              if(*(arr_code+i)<0 || *(arr_code+i)>9) {
                //an error message is shown if the number is not valid
                printf("Error. Please choose a number between 0 and 9.\n");

                //this decriment is crucial.
                //It ensures the loop doesnt keep the unwanted entry,
                //allowing it to be overwritten on the next pass
                i--;
              }
            }

            for(i=0;i<4;i++){
              printf("%d", *(arr_code+i));
            }
            printf("\n");
          }case 2:{
            //setting RAND seed
            srand(time(0));
            for(i=0;i<4;i++){
              *(arr_code+i) = rand()%MAX;
              printf("%d", *(arr_code+i));
            }
          }default:{

          }
        }

      }case 2:{

      }case 3:{

      }case 4:{

      }case 5:{

      }
      default:{

      }
    }
  }
}
