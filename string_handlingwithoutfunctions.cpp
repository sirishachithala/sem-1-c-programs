#include<stdio.h>
#include<string.h>
int main()
{ 
   char	s1[100],s2[100],result[200];
   int choice,i,j,flag,len;

   printf("\n 1. find length");
   printf("\n 2.copy string");
   printf("\n 3.compare strings");
   printf("\n 4.concatenate strings");
   printf("\n 5.convert to uppercase");
   printf("\n 6.convert to lowercase");
   printf("\n 7.reverse string\n");
   printf("\nenter your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
   	case 1:
	   {
	        printf("enter the string");
   	        scanf(" %[^\n]",s1);
   	        len=0;
   	        for(i=0;s1[i]!='\0';i++)
   	        len++;
   	        printf("length of string:%d\n",len);
   	        break;
   	   }
   	case 2:
	   {
	   	    printf("enter source string:");
   	        scanf(" %[^\n]",s1);
   	        for(i=0;s1[i]!='\0';i++)
   	        s2[i]=s1[i];
   	        s2[i]='\0';
   	        printf("copied string:%s\n",s2);
   	        break;
	   }
	   case 3:
	   {
	   	    printf("enter first string:");
   	        scanf(" %[^\n]",s1);
   	        printf("enter second string:");
   	        scanf(" %[^\n]",s2);
   	        flag=0;
   	        for(i=o;s1[i]!='\0'||s2[i]!='\0';i++){
   	        	if(s1[i]!=s2[i]){
   	        		flag=1;
   	        		break;
				   }
			   }
   	        if(flag==0)
   	        printf("strings are equal\n");
   	        else
   	        printf("strings are not equal\n");
   	        break;
	   }
	    case 4:
	   {
	   	    printf("enter first string:");
   	        scanf(" %[^\n]",s1);
   	        printf("enter second string:");
   	        scanf(" %[^\n]",s2);
   	        
   	        for(i=0;s1[i]!='\0';i++)
   	        	result[i]!=s1[i]);
   	        	
   	        for(j=0;s2[j]!='\0';j++)
   	        	result[j]!=s2[j]);
   	        result[i+j]='\0';
   	        printf("concatanated string=%s\n",result);
   	        break;
	   }      
		           
		     
   }
   
}
