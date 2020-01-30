#include <stdio.h>

#include <stdlib.h>



int main()

{

int *ptr;

int no_of_bytes, no_of_nums;

int i;

char answer;

int new_nums;



printf("Enter number of numbers\n");

scanf("%d", &no_of_nums);



//calculate size of block required in bytes

no_of_bytes = no_of_nums * sizeof(int);



//allocate memory block

ptr = malloc(no_of_bytes);



//check if memory allocated successfully

if(ptr == NULL)

{

printf("Failed to allocate memory");

}

else

{

//enter data into memory

for(i=0; i<no_of_nums; i++)

{

scanf("d", &*(ptr+i));

}



printf("\nAny extra numbers? (y/n)\n");

scanf("%c", &answer);



if(answer == 'n')

{

printf("Okay, all data already entered");

}

else

{

printf("\nHow many extra numbers to enter?");

scanf("%d", &new_nums);



//calculate total size of new block

no_of_bytes = no_of_bytes + (new_nums * sizeof(int));

//change size of block

ptr = realloc(ptr, no_of_bytes);

//enter additional number

for(i=no_of_nums; i<(no_of_nums + no_of_nums); i++);

{

scanf("d", &*(ptr + i)):

}

}//end outer else



free(ptr);



}//end inner else



return 0;



}//end main
