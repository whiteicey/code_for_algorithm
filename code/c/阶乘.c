#include <stdio.h>
int main()
{
	long long int sn=0;
	int n,i,m=1;
	scanf("%d",&n);
	if(n<=20)
	{
		for(i=1;i<=n;i++)
		{
			m=i*m;
			sn=sn+m;
		}
		printf("%ld\n",sn);
	}
	return 0;
}
