#include<stdio.h>
#include<math.h>
int main()
{
	int p=5900;
	int t=2;
	int r=2;
	float CI=p*(pow((1+((float)r/100)),t)-1);
	printf("compound interest is:%f",CI);
	return 0;
}
