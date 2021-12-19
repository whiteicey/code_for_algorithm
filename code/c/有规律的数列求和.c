#include<stdio.h>
int main()
{
	float m=2.0,n,i,j=1.0,o,s,k=0;
	scanf("%f",&n);
	for(i=1.0;i<=n;i++)
	{
		k=k+m/j;
		o=m;
		s=m+j;
		m=s;
		j=o;
	}
	printf("%.2f",k);
	return 0;
}
