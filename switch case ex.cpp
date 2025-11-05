#include<stdio.h>
int main()
{
	char operator;
	int num1,num2;
	printf("enter the values:");
	scanf("%d%c%d",&num1,&operator,&num2);
	 
	 switch(operator){
	 	case'+':
	 		printf("result:%d\n",num1+num2);
	 		break;	
	 	case'-':	i
		 	printf("result:%d\n",num1-num2);
		 	break;
		case'*':
		 	printf("result:%d\n",num1*num2);
		 	break;
		case'/':
			if(num1!=0)
		 	printf("result:%f\n",(float)num1/num2);
		 	else
		 	prtintf("division by zero error!\n");
		 	break;
		default:
		printf("invalid operstor\n");
		 	
	 }
	 
	 return 0;
}

