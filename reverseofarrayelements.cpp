//REVERSE OF AN ARRAY.
#include<stdio.h>
int main()
{
	int i,n,a[10];
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter array elements:");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
	 printf("%d\n",a[i]);
    }
    printf("reverse of elements:");
    for (i=n-1;i>=0;i--)
    {
    	printf("\n%d ",a[i]);
	}
	return 0;
}
