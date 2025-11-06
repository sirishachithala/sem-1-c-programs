//min value in an array
#include<stdio.h>
int main()
{
	int i,n,a[10],min;
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter array elements:");
	for (i=n;i>=0;i--)
	{
		scanf("%d\n",&a[i]);
	}
	for (i=n;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	min=a[0];
	for (i=n-1;i>=0;i--)
	{
		if (a[i]<min)
		{
			min=a[i];
		}
	}
	printf("minimum value is:%d",min);
	return 0;
}
