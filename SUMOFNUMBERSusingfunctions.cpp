#include<stdio.h>
int digit(int n)
{
	int r,sum=0;
	while(n>0)
	{
		r=n%10;
		sum+=r;
		n=n/10;
	}
	return sum;
}
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	printf("sum of digits=%d",digit(n));
	return 0;
}
