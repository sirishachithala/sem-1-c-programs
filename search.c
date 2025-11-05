#include<stdio.h>
int main()
{
	int i,n,low,high,mid,found=0,key,arr[50];
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter array elements in sorted order");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter key value:");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==mid)
		{
			printf("element found at %d:",mid);
			found=1;
			break;
		}
		else if(key<mid)
		{
			high=mid-1
		}
		else
		{
			low=mid+1
		}
	}
	return 0;
}
