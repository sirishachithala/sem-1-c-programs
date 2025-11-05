#include<stdio.h>
int main()
{
	float a,t,u,d;
	printf("enter acceleration:");
	scanf("%f",&a);
	printf("enter t value:");
	scanf("%f",&t);
	printf("enter u value:");
	scanf("%f",&u);
	d=u*t+(a*t*t)/2;
	printf("%f",d);
	return 0;
}
