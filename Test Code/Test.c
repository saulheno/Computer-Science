/*
Saul Hennessy
XXXXXXXXXXXXXX
Written on XX/XX/XX
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
int main()
{
  int qnum;
  printf("How many questions (Max of 5)?\n");
  scanf("%d", &qnum);
  printf("%d here", qnum);
  if(qnum != 1)&&(qnum != 2)&&(qnum != 3)&&(qnum != 4)&&(qnum != 5)
  {
    printf("Between 1 and 5, please.\n");
    qnum='0';
  }
  else
  {
  printf("In else");
  }

	getchar();


	return 0;
}
