#include<stdio.h>
int main()
{
	char op;
	int first,second;
	printf("enter a operator(+,-,*,/):");
	scanf("%c",&op);
	printf("enter two operands:");
	scanf("%d %d",&first,&second);
	switch(op){
		case'+':
		printf("%d+%d=%d",first,second,first+second);
		break;
	case'-':
		printf("%d-%d=%d",first,second,first-second);
		break;
		case'*':
		printf("%d*%d=%d",first,second,first*second);
		break;
		case'/':
		printf("%d/%d=%d",first,second,first/second);
		break;
	}
	
}
