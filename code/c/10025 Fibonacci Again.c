#include <stdio.h>
int main()
{
	int n,i;
	unsigned long int f0=7,f1=11,temp;
	scanf("%d",&n);
	if(n==1||n==0)
	{
		printf("no");
	}
	else
	{
		for(i=2;i<=n;i++)
		{
			temp=f1;
			f1=f0+f1;
			f0=temp;
		}
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
