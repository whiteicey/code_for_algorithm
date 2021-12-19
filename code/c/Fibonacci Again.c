#include <stdio.h>
int main()
{
	int f0=7,f1=11,n,f,a=7,b=11,i;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		f=f1;
		f1=f0+f1;
		f0=f;
	}
	if(n==0)
	{
		printf("no");
	}
	else if(n==1)
	{
		printf("no");
	}
	else
	{
		if(f1%3==0)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}
	return 0;
}
