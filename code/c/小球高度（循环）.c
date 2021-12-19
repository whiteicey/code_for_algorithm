#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	double sum=100,h=100;
	for(i=0;i<n;i++)
	{
		h/=2;
		if(i==n-1)
		{
			break;
		}
		sum+=h*2;
	}
	printf("%.2lf %.2lf",sum,h);
	return 0;
}
