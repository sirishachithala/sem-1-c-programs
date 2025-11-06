//write a c program to find product of two numbers using "+".
#include<stdio.h>
int main()
{
	int num1,num2,product=0;
	printf("enter two numbers:");
	scanf("%d %d",&num1,&num2);
	int positive=1;
	if(num1<0)
	{
	 num1=-num1;
	 positive=-positive;
	}
		if(num2<0)
	{
	 num2=-num2;
	 positive=-positive;
	}
	for(int i=0;i<num2;i++)
	{
		product=product+num1;
	}
	 product=product*positive;
	 printf("product:%d",product);
	 return 0;
}
