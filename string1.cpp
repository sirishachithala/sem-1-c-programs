//write a c program to print words in a sentence.
#include<stdio.h>
int main()
{
	char s1[50];
	printf("enter a sentence:\n");
	fgets(s1,sizeof(s1),stdin);
	printf("%s",s1);
}
