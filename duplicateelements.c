//write a c program to print duplicate elements in array.
#include<stdio.h>
int main()
{
	int i,j,n,a[10],found=0,k;
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter array elements:");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
          if (a[i]==a[j])
          { 
            for(k=0;k<i;k++)
          	{
          		if (a[k]==a[i])
          		break;
			}
			  if(k==i)
			  if(found=1)
			  {
			  	printf("%d",a[i]);
			  }
		  }
    	}
    	if(found==0)
    	{
    		printf("no dupilicate elements ");
		}
	}
	return 0;
}
