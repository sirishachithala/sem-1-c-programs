#include<stdio.h>
int main()
{
	int n=4;
	if(n==4)
	{
		goto next;
		printf("It is four\n");
	}
	next:
		printf("It is not four\n");
		return 0;
}
