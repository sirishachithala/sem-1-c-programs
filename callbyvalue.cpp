#include<stdio.h>
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("a=%d b=%d ",x,y);
}
int main()
{
	int a=10,b=5;
	swap(a,b);
}
