#include<stdio.h>
int main()
{
	int a=10;
	int b=5;
	int *p=&a;
	int *q=&b;
	if(*p>*q)
	{
		printf("a is big");
	}
}
