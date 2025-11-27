//with return and with parameters
#include<stdio.h>
int add(int a,int b)//function_defination //formal parameters
{
	return a+b;
}
int main()
{
	int a=5,b=7,sum=0;
	sum=add(a,b);//function_calling //actual parameters
	printf("%d",sum);
	
}
