#include <stdio.h>
long long int jiecheng(int m);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%lld",jiecheng(n));
	return 0;
}
long long int jiecheng(int m)
{
	static long long int sum=1;
	sum=sum*m;
	m--;
	if(m>1)
	{
		jiecheng(m);
	}
	return sum;
}
