// its gon be a fucking calculator

//  main.c

//  Calculator

//

//  Created by Bence Abel on 09/10/2019.

//  Copyright © 2019 Bence. All rights reserved.

//



#include <stdio.h>



int main(){

    int main =1;

    while (main < 10) {

//        main++;

   

    char method ;

    float num1, num2;

    

    printf("Choose a Method [+ , - , / , *] or Press [N] if you would like to quit\n");

    scanf("%1s", & method);

        switch (method) {

            case 'n':

            case 'N':

                printf("bye\n");

                return 0;

                break;



        }

    printf("Enter Two Numbers To Use:\n");

    scanf("%f %f", &num1, &num2);

    

    

    switch (method) {

        case '+':

            printf("Adding %1.1f and %1.1f equals %1.1f\n",num1,num2, num1+num2);

            break;

        case '-':

            printf("Subtracting %1.1f and %1.1f equals %1.1f\n",num1,num2, num1-num2);

            break;

        case '/':

        case '%':

            printf("Dividing %1.1f and %1.1f equals %1.1f\n",num1,num2, num1/num2);

            break;

        case '*':

        case 'x':

        case 'X':

            printf("Multiplying %1.1f and %1.1f equals %1.1f\n",num1,num2, num1*num2);

            break;



    }

      



    }

}

