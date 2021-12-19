#include <stdio.h>
int main()
{
	double a,b,c,i,n=0,m=0,k,j=0;
	scanf("%lf%lf%lf",&a,&b,&c);
	for(i=1;i<=a;i++)
	{
		n=n+i;
	}
	for(i=1;i<=b;i++)
	{
		m=m+i*i;
	}
	for(i=1;i<=c;i++)
	{
		j=j+1/i;
	}
	k=n+m+j;
	printf("%.2lf",k);
	return 0;
}
