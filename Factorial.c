
#include <stdio.h>
 void main()
    {
     int i,f =1,n;
 
     printf("Enter the number \n");
     scanf("%d",&n);
     if (n<=0)
        f = 1;
     else
        {
          for (i=1;i<=n;i++)
            {
             f =f*i;
            }
        }
     printf("Factorial of %d = %d\n",n,f);
    }
