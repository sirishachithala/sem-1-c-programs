#include<stdio.h>
int main()
{
	int a=10;
	int *p=&a;
	printf("address of a:%p\n",&a);
	printf("address by using pointer:%p\n",p);
	p++;
	printf("after increament address is :%p\n",p);
}
