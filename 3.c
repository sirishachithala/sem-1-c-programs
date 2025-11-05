#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("enter temperature in celsius:");
	scanf("%f",&celsius);
	fahrenheit=(celsius*9/5)+32;
	printf("temprature in fahrenheit=%.2f\n",fahrenheit);
	scanf("%f",&fahrenheit);
}
