#include<stdio.h>
int main()
{
	int i,n=6,key=18,found=0;
	int arr[10]={18,25,37,56,82,92};
	int low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if (arr[mid]==key){
			printf("element %d found at index %d.\n",key,mid);
			found=1;
			break;
		}
		else if(arr[mid]<key){
			low=mid+1;
		}
		else {
			high=mid-1;
		}
	}
	if (!found)
	    printf("element %d not found in the array.\n",key);
	return 0;
}
