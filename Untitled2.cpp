#include<stdio.h>
int main()
{
	int m,p,c;
	int total;
	float avg;
	m=35,p=54,c=78;
	total=m+p+c;
	avg=(float)total/3;
	printf("total=%d\n",total);
	printf("average=%f",avg);
	return 0;
}
