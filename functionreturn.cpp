#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int a=5,b=8,sum;
	sum = add(a,b);
	printf("sum of a and b is:%d",sum);
}
