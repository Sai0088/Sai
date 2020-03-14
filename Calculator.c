#include <stdio.h>
 void main()
    {
     char operator;
     float n1, n2, result;
     printf("Enter two numbers:\n");
     scanf("%f %f", &n1, &n2);
     printf("Enter the operator to be used [+,-,*,/]\n");
     scanf("%s", &operator);
     switch (operator)
       {
         case '+':
         result = n1 + n2;
        break;
         case '-':
         result = n1 - n2;
        break;
         case '*':
         result = n1*n2;
        break;
         case '/':
         result = n1/n2;
        break;
        default:
         printf("Operator is invalid \n");
        break;
       }
     printf( "\n %f %c %f = %f", n1, operator, n2, result);
 
    }
