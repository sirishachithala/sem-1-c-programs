#include<stdio.h>
int main()
{
	int i,j,a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,k;
	printf("enter row and coloumn size of first array");
	scanf("%d%d",&r1,&c1);
	printf("enter row and coloumn size of second array");
	scanf("%d%d",&r2,&c2);
	if(c1==r2)
	{
	   printf("enter array elements");
	   for(i=0;i<r1;i++)
	   {
	   	 for(j=0;j<c1;j++)
	   	   {
	   	     scanf("%d",&a[i][j]);	
	       }
	   }
    	printf("enter second array elements");
	   for(i=0;i<r2;i++)
	   {
	   	 for(j=0;j<c2;j++)
	   	   {
	   	     scanf("%d",&b[i][j]);	
	       }
	   }
	   for(i=0;i<r1;i++)
	   {
	   	    
	   	for(j=0;j<c2;j++)
	   	{
	   		c[i][j]=0;
	   	for(k=0;k<c1;k++)
	   	{
	   		c[i][j]+=a[i][k]*b[k][j];
	    }
	    
	    }
	   }
	   for(i=0;i<r1;i++)
	   {
	   	for(j=0;j<c2;j++)
	   	{
	   		printf("%d",c[i][j]);
		   }
		   printf(" \n");
	   }
}
	   if(r1!=c2)
	   {
	   	printf("it is not possible to multiplication");
	   }
	   return 0;
}
