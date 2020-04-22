/*
Saul Hennessy

This program is designed to either take an input of 4 Numbers
ranging from 0 to 9 from the user or generate its own set.
It encrypts this set using an algorithm and compares the
encrypted set to a fixed set. If they match, a "correct" counter is
incrimented, otherwise a "wrong" counter is incremented.
These values are then displayed to the user.
This encryption is reversable and an option is present to do just that.

Wrote on 03/04/2020
Wrote in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_RAND 10
#define MAX 4

struct code_counter {
int correct_code;
int wrong_code;
};

void menu();
void entry(int [MAX], int*);
void encrypt(int [MAX]);
void compare(int [MAX], int [MAX], int, struct code_counter*);
void decrypt(int [MAX]);

int main(){
  menu();

  return 0;
}

void menu(){
  int exit=0;
  int reply;
  int error=0;
  int arr_code[MAX]={};
  int access_code[MAX]={4, 5, 2, 3};
  int correct=0;
  int Encryption_Check=0;
  int Entry_Check=0;
  char confirmation;
  struct code_counter count;
  count.correct_code=count.wrong_code=0;

  //keeps the program running until an exit flag is trigered
  while (exit==0){
    printf("Choose an option\n\n");
    printf("1. Code Selection\n2. Encrypt\n");
    printf("3. Check Code\n4. Decrypt\n");
    printf("5. Attempt Counter\n6. Exit\n");

    scanf("%d", &reply);
    getchar();
    _flushall();
    //this catches any characters or other unwanted replies,
    //and prevents an indefinite loop.

    //Cycles through selected options
    switch (reply){
      case 1:{
        entry(arr_code, &error);
        Encryption_Check=0;
        Entry_Check=1;
        break;
      }case 2:{
        if(Encryption_Check==1){
          system("cls");
          printf("Error. Code is already encrypted!\n\n");
          break;
        }else if(Entry_Check==1){
          encrypt(arr_code);
          Encryption_Check=1;
          break;
        }else{
          system("cls");
          printf("Error. Option 1 must be run first\n\n");
          break;
        }
      }case 3:{
        if(Encryption_Check==1){
          compare(arr_code, access_code, correct, &count);
          break;
        }else{
          system("cls");
          printf("Error. Option 2 must be run first\n\n");
          break;
        }
      }case 4:{
        if(Encryption_Check==1){
          decrypt(arr_code);
          Encryption_Check=0;
          break;
        }else{
          system("cls");
          printf("Error. Option 2 must be run first\n");
          break;
        }
      }case 5:{
        system("cls");
        printf("%d Correct\n", count.correct_code);
        printf("%d Incorrect\n\n", count.wrong_code);
        break;
      }case 6:{
        system("cls");
        printf("Are you sure you want to quit? y/n\n"); //checks to make sure the user didnt accidently hit the exit key
        scanf("%c", &confirmation);
        if(confirmation=='y')
        {
          exit=1; //the exit flag being tripped, closing the program
          break;
        }
        break;
      }default:{
        system("cls");
        //This prevents any unwanted integers bugging out the code
        printf("Error. Please choose an option within the paramaters.\n\n");
        break;
      }
      }
    }
}

void entry(int *arr_code, int *error){
  int reply;

  system("cls");
  printf("1. Manually enter code\n");
  printf("2. Generate Code\n");

  scanf("%d", &reply);
  getchar();
  _flushall();

  switch (reply) {
    case 1:{
      system("cls");
      printf("Code must be 4 numbers long ");
      printf("and each number be between 0 and 9.\n");
      printf("Enter each number one at a time\n");

      for(int i=0;i<MAX;i++){
        printf("Enter number %d\n", i+1);
        scanf("%d", &*(arr_code+i));
        getchar();
        _flushall();

        if(*(arr_code+i)<0 || *(arr_code+i)>9) {
          system("cls");
          printf("Error. Please choose numbers between 0 and 9.\n\n");
          i--; //this decrement ensures the garbage entry is overwritten
        }
      }
      break;
    }case 2:{
      //setting RAND seed
      srand(time(0));
      system("cls");
      printf("The code is ");
      for(int i=0;i<MAX;i++){
        *(arr_code+i) = rand()%MAX_RAND;
        printf("%d", *(arr_code+i));
        }
      printf("\n\n");
      break;
    }default:{
      system("cls");
      printf("Error. Please enter valid characters.\n\n");
      break;
      }
    }
}

void encrypt(int *arr_code){
  int temp;

  //swapping 1st with 3rd
  temp=*(arr_code+2);
  *(arr_code+2)=*(arr_code+0);
  *(arr_code+0)=temp;

  //swapping 2nd with 4th
  temp=*(arr_code+3);
  *(arr_code+3)=*(arr_code+1);
  *(arr_code+1)=temp;

  //adding 1 to all entries
  //switching 10's to 0
  for(int i=0;i<MAX;i++){
    (*(arr_code+i))++;
    if((*(arr_code+i))==10){
      (*(arr_code+i))=0;
    }
  }

  system("cls");
  printf("Encrypted code is ");
  for(int i=0;i<MAX;i++){
    printf("%d", *(arr_code+i));
  }
  printf("\n\n");
}

void compare(int *arr_code, int *access_code, int correct, struct code_counter *count){
  correct=0;
  for(int i=0; i<MAX; i++){
    if((*(arr_code+i))==(*(access_code+i))){
      correct=correct + 1;
    }
  }
  system("cls");
  if(correct==4){
    count->correct_code++;
    printf("Correct! Access granted.\n\n");
  }else{
    count->wrong_code++;
    printf("Incorrect! Access denied.\n\n");
  }
}

void decrypt(int *arr_code){
  int temp;

  //taking 1 from all entries
  //switching -1's to 9
  for(int i=0;i<MAX;i++){
    (*(arr_code+i))--;
    if((*(arr_code+i))==-1){
      (*(arr_code+i))=9;
    }
  }

  //swapping 1st with 3rd
  temp=*(arr_code+2);
  *(arr_code+2)=*(arr_code+0);
  *(arr_code+0)=temp;

  //swapping 2nd with 4th
  temp=*(arr_code+3);
  *(arr_code+3)=*(arr_code+1);
  *(arr_code+1)=temp;

  system("cls");
  printf("Decrypted code is ");
  for(int i=0;i<MAX;i++){
    printf("%d", *(arr_code+i));
  }
  printf("\n\n");
}
