#include<stdio.h>
int main()
{
	char name[10],full_name[20],address[30];
	printf("enter your name");
	scanf("%s",name);
	printf("my name is:%s",name);
	printf("\nenter full name:");
	scanf(" %[^\n]",full_name);
	printf("my full name is:%s",full_name);
	return 0;
}
