/*
Saul Hennessy
XXXXXXXXXXXXXX
Wrote on XX/XX/XX
Wrote in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int i;
  int ran;

  srand(time(0));
  while(1){
  for(i=0; i<10; i++){
    ran=rand()%3;
    printf("Ran is %d\n", ran);
    _sleep(500);
  }
}
	getchar();
	return 0;
}
