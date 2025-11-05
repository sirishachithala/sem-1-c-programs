#include<stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  sum=sum+i;
	}
	printf("sum of first %d numbers is %d",n,sum);
	return 0;
	
	
}
