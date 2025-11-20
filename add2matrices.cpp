//write a c program for addition of two numbers.
#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("enter first array elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    printf("enter second array elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[3][3]=a[3][3]+b[3][3];
		}
		{
			printf("%d",c[i][j]);
		}
	}
	printf("\n");
	return 0;
	
}
