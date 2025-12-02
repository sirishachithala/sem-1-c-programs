#include<stdio.h>
int sum(int n)
{
	if(n==0)//base condition
	return 0;
	else
	return n+sum(n-1);//recursive function
}
int main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	printf("%d",sum(n));
	
}
