/*
Saul Hennessy
Wrote on 07/04/2020
Wrote in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VALUES 1000
#define MAX 1000000

int main(){
  double arr[VALUES]={};
  int i, j;
  double diff = 200;
  double high = 0;
  double low = 0;

  srand(time(0));

  for (i=0; i<VALUES; i++){
    arr[i]=rand()%MAX;
  }
  for(i=0;i<VALUES;i++){
    for(j=0;j<VALUES;j++){
      if(arr[i]-arr[j]>=0){
        if(arr[i]-arr[j]<diff){
          diff=arr[i]-arr[j];
          high=arr[i];
          low=arr[j];
        }else if(arr[j]-arr[i]>=0){
          if(arr[j]-arr[i]<diff){
            diff=arr[j]-arr[i];
            high=arr[j];
            low=arr[i];
          }
        }
      }else if(arr[j]-arr[i]>=0){
        if(arr[j]-arr[i]<diff){
          diff=arr[j]-arr[i];
          high=arr[j];
          low=arr[i];
        }
      }
      if(diff==0){
        j=VALUES;
        i=VALUES;
      }
    }
  }
  printf("High is %.0lf\n", high);
  printf("Low is %.0lf\n", low);
  printf("Diff is %.0lf\n", diff);
	getchar();
	return 0;
}
