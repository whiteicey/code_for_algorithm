#include <stdio.h>
int main()
{
	int i=1,m=0,k;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		m=m+i*i*i;
	}
	printf("%d",m);
	return 0;
}
