#include <stdio.h>
int main()
{
	int m,n;
	char c;
	scanf("%c%d%d",&c,&m,&n);
	if(c=='+')
	{
		printf("%d",m+n);
	}
	else if(c=='-')
	{
		printf("%d",m-n);
	}
	else if(c=='*')
	{
		printf("%d",m*n);
	}
	else if(c=='/')
	{
		printf("%d",m/n);
	}
	return 0;
 } 
