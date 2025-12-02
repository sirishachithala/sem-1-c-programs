//write a c program using auto keyword
#include<stdio.h>
int display()
{
	auto int a=10;
	a++;
	return a;
}
int main()
{
	printf("value of a: %d\n",display());
	printf("value of a: %d\n",display());
	printf("value of a: %d\n",display());
}
