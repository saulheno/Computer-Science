//  resposnive calculator
//  main.c
//  Calculator2.0
//
//  Created by Bence Abel on 16/10/2019.
//  Copyright © 2019 Bence. All rights reserved.
//

#include <stdio.h>
//start main
int main(){
    
    int num;
    int total;
    int i;
    char operator;
    char reply;
    
    
    printf("Enter Number\n");
    scanf("%d", &num);
    
    total = num;
    
    //start for
    for (i=0; i==0; i = i) {
        
        
        printf("Enter An Operator");
        scanf("%1s", &operator);
        
        switch (operator) {
            case '+':
                printf("Enter Another Number\n");
                scanf("%d", &num);
                total = total + num;
                printf("Total: %d\n", total);
                printf("Keep Going? [Y/N]\n");
                scanf("%1s", &reply);
                switch (reply) {
                    case 'y':
                    case 'Y':
                        printf("Okay\n");
                        break;
                    case 'n':
                    case 'N':
                        printf("bye\n");
                        return 0;
                        break;
                    default:
                        printf("bye\n");
                        return 0;
                        break;
                }
                break;
                
            case '-':
                printf("Enter Another Number\n");
                scanf("%d", &num);
                total = total - num;
                printf("Total: %d\n", total);
                printf("Keep Going? [Y/N]\n");
                scanf("%1s", &reply);
                switch (reply) {
                    case 'y':
                    case 'Y':
                        printf("Okay\n");
                        break;
                    case 'n':
                    case 'N':
                        printf("bye\n");
                        return 0;
                        break;
                    default:
                        printf("bye\n");
                        return 0;
                        break;
                }
                break;
                
            case '*':
            case 'x':
            case 'X':
                printf("Enter Another Number\n");
                scanf("%d", &num);
                total = total * num;
                printf("Total: %d\n", total);
                printf("Keep Going? [Y/N]\n");
                scanf("%1s", &reply);
                switch (reply) {
                    case 'y':
                    case 'Y':
                        printf("Okay\n");
                        break;
                    case 'n':
                    case 'N':
                        printf("bye\n");
                        return 0;
                        break;
                    default:
                        printf("bye\n");
                        return 0;
                        break;
                }
                break;
            case '%':
            case '/':
                printf("Enter Another Number\n");
                scanf("%d", &num);
                total = total / num;
                printf("Total: %d\n", total);
                printf("Keep Going? [Y/N]\n");
                scanf("%1s", &reply);
                switch (reply) {
                    case 'y':
                    case 'Y':
                        printf("Okay\n");
                        break;
                    case 'n':
                    case 'N':
                        printf("bye\n");
                        return 0;
                        break;
                    default:
                        printf("bye\n");
                        return 0;
                        break;
                }
            default:
                printf("invalid operator");
                break;
        }
        
      
    }//end for
}//end main
