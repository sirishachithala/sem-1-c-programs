//transpose of a matrix;
#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3],t[3][3];
	printf("enter array elements:");
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
			t[i][j]=a[j][i];
		}
	}
	printf("transpose array elements :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}
