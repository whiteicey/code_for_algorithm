#include <stdio.h>
#include <math.h>
int main()
{
	int n,j,i;
	double cosx=1.0,x,k=1.0;
	scanf("%lf%d",&x,&n);
	for(i=1;i<=n;i++)
	{
		for(j=2*i;j>0;j--)
		{
			k=k*j;
		}
		cosx=cosx+(pow(-1.0,i)*pow(x,2*i))/k;
		k=1;
	}
	printf("%.8lf",cosx);
	return 0;
}
