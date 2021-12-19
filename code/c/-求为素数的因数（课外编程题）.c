#include <stdio.h>
int main()
{
	int n,i,j,k=0;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
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
		}
		if(k==1)
		{
			printf("%d",i);
		}
	}
	return 0;
}
