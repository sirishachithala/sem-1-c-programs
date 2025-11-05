#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5;
	float average;
	printf("enter marks of 5 subjects:");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	average=(m1+m2+m3+m4+m5)/5.0;
	printf("average marks=%.2f\n",average);
	return 0;
}
