#include<stdio.h>
int main()
{
	char s[100];
	int v,c,d,p,i;
	v=c=d=p=0;
	printf("enter a sentence:\n");
	fgets(s,sizeof(s),stdin);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		{
			v++;
		}
		else if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='z')
		{
			c++;
		}
		else if(s[i]>='0'&&s[i]<='9')
		{
			d++;
		}
		else if(s[i]==' ')
		{
			p++;
		}
	}
	printf("vowels:%d\n consonents:%d\n digits:%d\n spaces:%d",v,c,d,p);
}
