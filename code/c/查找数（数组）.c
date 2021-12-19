#include <stdio.h>
int main()
{
	int n,a[20],i,j,k,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&j);
	for(i=0;i<n;i++)
	{
		if(j==a[i])
		{
			k=1;
			m=i+1;
			break;
		}
		else
		{
			k=2;
		}
	}
	if(k==1)
	{
		printf("%d",m);
	}
	else if(k==2)
	{
		printf("no");
	}
	return 0;
}
