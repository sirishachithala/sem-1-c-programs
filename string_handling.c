#include<stdio.h>
#include<string.h>
int main()
{ 
   char	s1[10],s2[10],value;
   int choice;

   printf("\n 1.string length");
   printf("\n 2.string copy");
   printf("\n 3.string compare");
   printf("\n 4.string reverse");
   printf("\n 5.string concatination");
   printf("\n 6.string lower case");
   printf("\n 7.string upper case");
   printf("\nselect any option:");
   scanf("%d",&choice);
   switch(choice)
   {
   	case 1:
	   {
	     printf("enter the string");
   	      scanf(" %[^\n]",s1);
   	     printf("length of given string:%s",strlen(s1));
   	     break;
   	   }
   	case 2:
	   {
	   	  printf("enter the string:");
   	      scanf(" %[^\n]",s1);
   	      strcpy(s2,s1);
   	      printf("copy of given string:%s",s2);
   	      break;
	   }   
		     
   }
   
}
