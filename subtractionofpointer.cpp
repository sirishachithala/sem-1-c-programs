#include<stdio.h>
int main()
{
	int a=10;
	int *p=&a;
	printf("address by using pointer :%p\n",p);
	p-=2;
	printf("after subtraction address is:%p\n",p);
}
