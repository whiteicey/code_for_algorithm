#include <stdio.h>
int main()
{
	int n,sum=0,i=1,m=1,index;
	scanf("%d",&n);
	while(1)
	{
		sum+=i;
		if(sum>=n)
		{
			break;
		}
		i++;
	}
	if(i%2==0)
	{
		while(1)
		{
			if(sum==n)
			{
				printf("%d/%d",i,m);
				return 0;
			}
			i--;
			m++;
			sum--;
		}
		
	}
	else
	{
		while(1)
		{
			if(sum==n)
			{
				printf("%d/%d",m,i);
				return 0;
			}
			i++;
			m--;
			sum++;
		}
		
	}
}
