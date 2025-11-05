#include<stdio.h>
int main()
{
	int A[50]={7,9,14,8,10,22,5};
	A[7]=9;
	printf("%d\n",A[7]);
    printf("before updation %d\n",A[3]);
    A[3]=18;
    peintf("after updation %d",A[3]);
    printf("%d",A[4]);
	return 0;
	
}
