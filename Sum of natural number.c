
#include <stdio.h>
 void main()
  {
    int n,i,sum = 0;

    printf("Enter the value of n(positive integer):");
    scanf("%d",&n);

    for(i=1;i<= n;i++)
      {
        sum = sum+i;
      }

    printf("Sum of first %d natural numbers is:%d",n,sum);

  }
