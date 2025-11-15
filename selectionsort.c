#include<stdio.h>
int main()
{
	int i,j,n,min,temp,a[10];
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			min=i;
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
		printf("sorted array elements");
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
	return 0;
}
