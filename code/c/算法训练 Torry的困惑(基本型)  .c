#include <stdio.h>
int main()
{
	int n,i,j,k,index=0;
	long long sum=1;
	scanf("%d",&n);
	while(index<n)
	{
		for(i=2;;i++)
		{
			k=1;
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					k=0;
					break;
				}
				else
				{
					k=1;
				}
			}
			if(k==1)
			{
				index++;
				sum*=i;
				sum%=50000;
				if(index>=n)
				{
					break;
				}
			}
		}
	}
	printf("%lld",sum);
	return 0;
}
