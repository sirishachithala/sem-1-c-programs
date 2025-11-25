#include<stdio.h>
int main()
{
	int i,n,marks[50];
	printf("enter number of students:");
	scanf("%d",&n);
	printf("enter marks of the %d students:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&marks[i]);
	}
	printf("\n marks of the students are:\n");
	for(i=0;i<n;i++)
	{
		printf("student%d=%d\n",i+1,marks[i]);
	}
	return 0;
}
