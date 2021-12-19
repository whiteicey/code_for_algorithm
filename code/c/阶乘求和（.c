#include <stdio.h>
int main()
{
	int n,i,j,sum=0,k=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			k=k*j;
		}
		sum=sum+k;
		k=1;
	}
	printf("%d",sum);
	return 0;
 } 
