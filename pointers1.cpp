#include<stdio.h>
int main()
{
	int a=15;
	int *p;
	p=&a;
	printf("%d\n",a);
	printf("%d\n",&a);
	printf("%p\n",p);
	printf("%d\n",*p);
}
