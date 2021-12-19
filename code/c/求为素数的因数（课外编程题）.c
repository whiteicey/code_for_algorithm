#include <stdio.h>
int main()
{
	int n,m,i,j,num=0;
	scanf("%d",&n);
	if(n!=1)
	{
		for(i=2;i<=n;i++)
		{
			m=1;
			if(n%i==0)
			{
				for(j=2;j<i;j++)
				{
					if(i%j==0)
					{
						m=2;
						break;
					}
					else
					{
						m=1;
						num++;
					}
				}
				if(m==1)
				{
					printf("%d ",i);
				}
			}
		}
		if(num==0)
		{
			printf("No Answer");
		}
	}
	else
	{
		printf("No Answer");
	}
	return 0;
}
