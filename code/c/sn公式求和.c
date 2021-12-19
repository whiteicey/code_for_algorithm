#include <stdio.h>
int main()
{
	int a=2,sn=0,n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		sn=sn+a;
		a=a*10+2;
	}
	printf("%d",sn);
	return 0;
 } 
