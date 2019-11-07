/*
Saul Hennessy
My first assignment, a program to simulate a maths quiz game
Written on 07/11/19
Written in Atom (Linux/Windows) and compiled with GCC
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
  srand(time(NULL));  // Initialization of randomisation code
  int max = 10;
  int max_op = 4;
  int a, i, reply, qnum, quizcount, exit, correct, incorrect;
  float ans,Uans;
  float qn1,qn2;
  int op_select;
  char qo;
  exit=quizcount=0; //Begins the loop, and locks option 3 on first launch.
  while (exit==0)
  {
    qn1=qn2=0.00;
    ans=Uans=0.00;

    printf("Hello! Choose an option\n\n");
		printf("1. Choose the amount of questions\n2. Begin the quiz\n3. See results\n4. Exit\n\n");
		scanf("%d", &reply);

    switch (reply) //Cycles through selected options
		{
			case 1:
        do {
    				printf("How many questions (Max of 5)?\n\n");
    				scanf("%d", &qnum);
          }while(qnum>5 || qnum<1);
				break;

      case 2:
        correct=incorrect=0; //Reseting the counters
        quizcount=1; //This unlocks option 3, case 3 below.
        for (i=1; i<=qnum; i++)
        {
          qn1 = rand()%max;
          qn2 = rand()%max;

          op_select = rand()%max_op;
          switch (op_select)
          {
            case 1:
              qo='*';
              ans=qn1*qn2;
              break;
            case 2:
              qo='/';
              ans=qn1/qn2;
              break;
            case 3:
              qo='+';
              ans=qn1+qn2;
              break;
            case 4:
              qo='-';
              ans=qn1-qn2;
              break;
          }

          printf("Q%d:%.2f%c%.2f\n\n",i ,qn1, qo, qn2);
          scanf("%f", &Uans);



          printf ("%.2f,%.2f\n\n",ans, Uans);
        }
        break;
    }
  }
}
