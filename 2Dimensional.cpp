#include<stdio.h>
int main()
{
	int i,j,rows,cols,matrix[10][10];
	printf("enter no.of rows and cols:");
	scanf("%d %d",&rows,&cols);
	printf("enter elements of the matrix:");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
	{
		scanf("%d",&matrix[i][j]);
	}
	}
	printf("\n matrix elements are:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d",matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
