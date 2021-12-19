#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	long long a[50]={0,0,1,2};
	for(i=4;i<=42;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	while(n--)
	{
		int m,sum;
		scanf("%d",&m);
		printf("%lld\n",a[m]);
	}
	return 0;
}
