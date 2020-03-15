#include<stdio.h>
#include<math.h>
void main()
{
	int n,x1,i,j;
	float x,s=-1,cosx=1,fact;
	printf("Enter the number of terms in series\);
	scanf("%d",&n);
	printf("enter the angle in degree\n");
	scanf("%f",&x);
	x1=x;
	x=x*(3.142/180);
	for(i=2;i<=n;i+=2)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}
		cosx=cosx+(pow(x,i)/fact)*s;
		s=s*-1;
	}
	printf("sum of cosine series=%f\n",cosx);
	printf("The actual value of cos(%d) is=%f",x1,cos(x));
}
