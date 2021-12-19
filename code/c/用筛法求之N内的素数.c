#include <stdio.h>
int main()
{
	int n,i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i==2)
		{
			k=1;
		}
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
			printf("%d\n",i);
		}
	}
	return 0;
 } 
