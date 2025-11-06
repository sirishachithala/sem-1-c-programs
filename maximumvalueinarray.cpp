//max value in an array
#include<stdio.h>
int main()
{
	int i,n,a[10],max;
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
    max=a[0];
    for(i=1;i<n;i++)
    {
    	if (a[i]>max)
    	{
    		max=a[i];
		}
	}
	printf("maximum element is:%d",max);
	return 0;
}
