#include<stdio.h>
int main()
{
	int num,sum,rem;
	printf("enter a 5 digit number:");
	scanf("%d",&num);
	sum=0;
	while(num!=0)
	{
		rem=num%10;
		sum+=rem;
		num=num/10;
	}
	printf("sum of 5467 is %d",sum);
	return 0;
}
