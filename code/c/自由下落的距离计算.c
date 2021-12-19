#include <stdio.h>
int main()
{
	float M=100,N,i,a=1;
	scanf("%f",&N);
	float high1,sum,high2;
	for(i=1;i<=N;i++)
	{
		a=2*a;
		high1=M/a;
	}
	a=1;
	sum=M;
	for(i=2;i<=N;i++)
	{
		a=a*2;
		sum=sum+(M/a)*2;
	}
	printf("%.2f %.2f",sum,high1);
	return 0;
}
