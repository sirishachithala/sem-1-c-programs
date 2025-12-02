//write a c program using register keyword
#include<stdio.h>
int display()
{
	register int a=10;
	a++;
	return a;
}
int main()
{
	printf("value of a: %d\n",display());
	printf("value of a: %d\n",display());
	printf("value of a: %d\n",display());
}
