#include <stdio.h>
int main()
{
	int m,n;
	int index;
	int i;
	scanf("%d%d",&m,&n);
	if(m==n)
	{
		printf("%d",m);
	}
	else if(m<n)
	{
		for(i=n;;i++)
		{
			if(i%m==0&&i%n==0)
			{
				index=i;
				break;
			}
		}
	}
	else if(m>n)
	{
		for(i=m;;i++)
		{
			if(i%m==0&&i%n==0)
			{
				index=i;
				break;
			}
		}
	}
	printf("%d",index);
	return 0;
} 
