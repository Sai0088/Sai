#include <stdio.h>
 void main()
    {
     int a=0,b=1,c,n,i;
 
     printf("Enter the number of terms:\n");
     scanf("%d",&n);
     printf("Fibonacci Series\n",n);
     for(i=0;i<n;i++)
         { 
          if(i<=1)
             c=i;
          else
            {
             c = a+b;
             a = b;
             b = c;
            }
          printf("%d\n",c);
         }
     }
