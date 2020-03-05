/*
Saul Hennessy
XXXXXXXXXXXXXX
Written on XX/XX/XX
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int i,j;
  int gate=0;
  char entered_name[100];
  char *names[7]={
    "Saul",
    "Conor",
    "Katie",
    "Lorcan",
    "Bence",
    "Ben",
    "Tom",
                };
  printf("Enter your name\n");
  gets(entered_name);
  //puts(entered_name)

  printf("%s\n", names[5]);

  printf("%d\n", strlen(entered_name));

  for(i=0; i<7;i++)
  {
    if(strcmp(entered_name, names[i])==0)
    {
      gate=1;
    }
  }
  if(gate>=1)
  {
    printf("Welcome Back\n");
  }
  else
  {
    printf("Who are you?\n");
  }



  // for(i=0, j=0; i<strlen(entered_name), j<strlen(names); i++, j++)
  // {
  //
  // }

	getchar();
	return 0;
}
