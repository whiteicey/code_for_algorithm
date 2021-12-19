#include <stdio.h>
int n;
int method(int m)
{
	int sum=0;
	if(n-m==1)
	{
		sum=1;
	}
	else if(n-m==2)
	{
		sum=2;
	}
	else if(n-m>2)
	{
		sum=method(m+1)+method(m+2);
	}
	return sum;
}
int main()
{
	int sum,m=0;
	scanf("%d",&n);
	sum=method(m);
	printf("%d",sum);
	return 0;
}
