#include<stdio.h>
int main()
{
	int m,n,k,j,t;
	scanf("%d%d",&m,&n);
	k=m*n;
	if(m<n)
	{
		if(n%m==0)
		{
			printf("%d %d",m,n);
		}
		else
		{
			for(t=m;t>=1;t--)
			{
				if(n%t==0&&m%t==0)
				{
					j=k/t;
					break;
				}
			}
			printf("%d %d",t,j);
		}
	}
	else
	{
		if(m>n)
		{
			if(m%n==0)
			{
				printf("%d %d",n,m);
			}
			else
			{
				for(t=n;t>=1;t--)
				{
					if(m%t==0&&n%t==0)
					{
						j=k/t;
						break;
					}
				}
				printf("%d %d",t,j);
			}
		}
	}
	return 0;
}
