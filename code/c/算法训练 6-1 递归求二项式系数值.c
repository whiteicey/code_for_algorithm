#include <stdio.h>
int plus(int k,int n)
{
	int sum;
	if(k==0||k==n)
	{
		sum=1;
	}
	else
	{
		sum=plus(k,n-1)+plus(k-1,n-1);
	}
	return sum;
}
int main()
{
	int k,n,sum;
	scanf("%d%d",&k,&n);
	sum=plus(k,n);
	printf("%d",sum);
	return 0;
}
