#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int sum=0,i;
		int m,n;
		scanf("%d%d",&m,&n);
		for(i=1;i<m;i++)
		{
			if(m%i==0)
			{
				sum+=i;
			}
		}
		if(sum==n)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
