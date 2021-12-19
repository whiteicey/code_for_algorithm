#include <stdio.h>
int main()
{
	int m,n,i,j,k=0,sum=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==j)
		{
			k++;
			printf("%d ",sum);
		}
	}
	if(k==0)
	{
		printf("No Answer");
	}
	return 0;
}
