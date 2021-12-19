#include <stdio.h>
int main()
{
	int m,n,i,sum=0,k=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(i%2==0)
		{
			k=0;
		}
		else
		{
			k=1;
			sum=sum+i;
		}
	}
	printf("%d",sum);
	return 0;
}
