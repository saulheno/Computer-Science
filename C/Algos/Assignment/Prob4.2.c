/*
Saul Hennessy
XXXXXXXXXXXXXX
Written on XX/XX/XX
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#include <stdlib.h>

#define NUM 50

int main(){
  int i, entry;
  int arr[NUM]={};

  printf("Array before removal\n");
  for(i=0; i<NUM; i++){
    arr[i]=i;
    printf("%d ", arr[i]);
  }
  printf("\nElement to remove?\n");
  scanf("%d", &entry);
  while(entry<0 || entry>=NUM){
    printf("Stay within the parameters. Enter again\n");
    scanf("%d", &entry);
  }

  for(i=entry; i<NUM; i++){
    arr[i]=arr[i+1];
  }

  arr[NUM - 1]=0;

  for(i=0; i<NUM-1; i++){
    printf("%d ", arr[i]);
  }

	getchar();
	return 0;
}
