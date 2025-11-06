#include<stdio.h>
int main()
{
	int i,n,a[10],index;
	printf("enter n value:");
	scanf("%d\n",&n);
	printf("enter array elements:\n");
	for (i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("enter index to update:\n");
	scanf("%d\n",&index);
	a[index]=9;
	printf("updated array elements are:\n");
	for (i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
