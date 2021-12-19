#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int i,j,index=0;
	for(i=m;i<=n;i++)
	{
		int sum1=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum1+=j;
			}
		}
		if(sum1>n)
		{
			continue;
		}
		else
		{
			int sum2=0;
			for(j=1;j<sum1;j++)
			{
				if(sum1%j==0)
				{
					sum2+=j;
				}
			}
			if(sum2==i&&i<sum1)
			{
				printf("%d %d",i,sum1);
				index++;
			}
		}
	}
	if(index==0)
	{
		printf("NONE");
	}
	return 0;
}
