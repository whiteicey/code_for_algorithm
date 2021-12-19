#include <stdio.h>
int main()
{
	long i,n,k=1;
	double m=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=k*i;
		m=m+(1.0/k);
	}
	printf("%.10lf",m);
	return 0;
 } 
