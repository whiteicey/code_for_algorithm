#include <stdio.h>
int main()
{
	int i,n,k,m;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		m=1;
		for(k=2;k<i;k++)
		{
			if(i%k==0)
			{
				m=2;
				break;
			}
		}
		if(m==1)
		{
			printf("%d\n",i);
		}
	}
	return 0;
 } 
