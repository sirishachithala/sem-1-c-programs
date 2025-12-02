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
   printf("\n 5.string concatenation");
   printf("\n 6.string lower case");
   printf("\n 7.string upper case");
   printf("\nenter your choice:");
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
	case 3:
    	{
		    printf("enter the string s1:");
   	        scanf(" %[^\n]",s1);
   	        printf("enter a string s2:");
   	        scanf(" %[^\n]",s2);
   	        printf("comparing two strings :%d",strcmp(s1,s2));
   	        break;
		}
	case 4: 
    	{
		    printf("enter the string s1:");
   	        scanf(" %[^\n]",s1);
   	        printf("reverse of given string is :%s",strrev(s1));
   	        break;
	    }
	case 5:
		{
			 printf("enter the string s1:");
   	        scanf(" %[^\n]",s1);
   	        printf("enter the string s2:");
   	        scanf(" %[^\n]",s2);
   	        printf("concatenation two strings :%d",strcat(s1,s2));
   	        break;
		}
	case 6:
	   	{
	    	 printf("enter the string s1:");
   	        scanf(" %[^\n]",s1);
   	        printf("lower case of given string is :%s",strlwr(s1));
   	        break;	
		}
	case 7:
	    {
	    	 printf("enter the string s1:");
   	        scanf(" %[^\n]",s1);
   	        printf("upper case of given string is :%s",strupr(s1));
   	        break;
		}
		default:
		{
			printf("invalid option");
	}	}	
   return 0;
}
