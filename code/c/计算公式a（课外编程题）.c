#include <stdio.h>
int main()
{
	int i,j,n,m=1;
	double sum=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			m=m*j;
		}
		sum=sum+1.0/m;
		m=1;
	}
	printf("%.10lf",sum);
	return 0;
}
