#include<stdio.h>
int main()
{
	int num,rem,rev=0,temp=num;
	printf("enter a 5 digit number:");
	scanf("%d",&num);
	while(num!=0)
	{
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
	}
	if(temp==rev)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}
