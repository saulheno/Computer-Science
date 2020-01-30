//Program that uses DMA



#include <stdio.h>

#include <stdlib.h> //first time we've used a second library



int main()

{

int *ptr;

int number_of_nums;

int number_of_bytes;

int i;



printf("Enter the number of numbers:\n"); //we dont know how many the user wants so we just ask

scanf("%d", &number_of_nums);


//allocate the memory required

ptr = calloc(number_of_nums, sizeof(int));


//check if allocation was successful

if(ptr == NULL)

{

printf("Memory failed to allocate\n");

}

else

{

//enter data into memory block

for(i = 0; i < number_of_nums; i ++)

{

scanf( "%d", &*(ptr + i) ); //ptr + 1 acts like a array, writing to each block for an int

}



//display contents of memory block

for(i = 0; i < number_of_nums; i ++)

{

printf( "%d, ", *(ptr + i) );

}



//release memory block

free(ptr);
return 0;
}
}
