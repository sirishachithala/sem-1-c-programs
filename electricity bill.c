#include<stdio.h>
int main()
{
	float units;
	int amount;
	int price;
	printf("enter units:");
	scanf("%f",&units);
	if (units<=50){
		price=20;
	}
	else if(units<=100)
	price=30;
	else if(units<=200)
	price=40;
	else
	price=50;
	amount=price*units;
	printf("electricity bill:%d",amount);
	return 0;
}
