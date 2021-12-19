#include <stdio.h>
int main()
{
	int i,j,n,num=0,k;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		k=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				k=2;
			}
		}
		if(k==1&&i%10==1)
		{
			num++;
			printf("%d ",i);
		}
	}
	if(num==0)
	{
		printf("-1");
	}
	return 0;
}
