#include <stdio.h>
int method(int n)
{
	int sum=0;
	if(n==1)
	{
		sum=1;
	}
	else if(n==0)
	{
		sum=1;
	}
	else if(n>=2)
	{
		sum=method(n-1)+method(n-2);
	}
	return sum;
}
int main()
{
	int n,sum;
	scanf("%d",&n);
	sum=method(n);
	printf("%d",sum);
	return 0;
}
