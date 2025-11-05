#include<stdio.h>
int main()
{
	int num,rem,temp,sum=0;
	printf("Enter any num:");
	scanf("%d",&num);
	temp=num;
	while (num!=0) 
	{
		rem = num %10;
		sum+=(rem*rem*rem);
	    num=num/10;
	}
	if(temp==sum)
	{
		printf("It is armstrong number");
	}
	else{
		printf("it is not an armstrong number");
	}
	return 0;
	
	
}
