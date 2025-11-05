#include<stdio.h>
int main()
{
	int roll_num[50],i,n,key,found=0;
	printf("enter n value");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&roll_num[i]);
	}
	printf("enter key value");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==roll_num[i])
		{
			printf("element found at index %d",i);
			found=1;
			break;
		}
		if(found==0)
		{
			printf("element not found");
		}
	}
	return 0;
}
