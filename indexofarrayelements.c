#include<stdio.h>
int main()
{
	int i,n,a[10],index;
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter array elements:");
	for (i=0;i<n;i++)
	{
		scanf("%d\n",a[i]);
	}
	for (i=0;i<n;i++)
	{
	 printf("%d\n",index);
	}
	printf("index to update");
	scanf("%d",&index);
	a[index]=9;
	printf("updated array elements are:\n");
	for (i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
