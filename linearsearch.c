#include<stdio.h>
int main()
{
	int i,n=6,key=67,found=0;
	int arr[10]={26,12,64,25,67,46};
	for(i=0;i<n;i++)
	{
		if (arr[i]==key){
			printf("element %d found at index %d.\n",key,i);
			found=1;
			break;
		}
	}
	if (found==0)
	printf("element %d not found in the array.\n",key);
	return 0;
}
