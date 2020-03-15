#include<stdio.h>
void main()
{
	int i,j,r,n=1;
	printf("Enter the number of rows\n");
	scanf("%d",&r);
	printf("Floyd's triangle containing %d rows is\n",r);
	for(i=0;i<r;i++)
	{
	  for(j=0;j<=i;j++)
	  {
		  printf("%d ",n);
		  n++;
	  }
	  printf("\n");
  }
}
