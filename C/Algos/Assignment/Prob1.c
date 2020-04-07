/*
Saul Hennessy
XXXXXXXXXXXXXX
Wrote on 07/04/2020
Wrote in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VALUES 5
#define MAX 1000

int main(){
  double arr[5];
  int i, j;
  double diff = 0;
  double high = 0;
  double low = 0;

  srand(time(0));

  for (i=0; i<VALUES; i++){
    arr[i]=rand()%MAX;
  }
	getchar();
	return 0;
}
