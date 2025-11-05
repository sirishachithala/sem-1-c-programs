#include<stdio.h>
int main()
{
	float base,height,area;
	printf("enter base value:");
	scanf("%f",&base);
	printf("enter height value:");
	scanf("%f",&height);
	area=0.5*base*height;
	printf("area of triangle:%f",area);
	return 0;
}
