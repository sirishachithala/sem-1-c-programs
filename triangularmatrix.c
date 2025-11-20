#include<stdio.h>
int main()
{
	int i,j,a[3][3],flag=0;
	printf("enter array elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j>i&&a[i][j]!=0);
			{
				flag=1;
			}
		}
	}
	if(flag==0)
	{
		printf("lower triangular matrix");
	}
	else
	{
		printf("not a lower triangular matrix");
	}
	return 0;
}
