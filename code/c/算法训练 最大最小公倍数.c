#include <stdio.h>
int main()
{
	long long n,ans;
	scanf("%lld",&n);
	if(n%2!=0)//当N为奇数时,那么N,N-1,N-2互为质数,很明显N*N-1*N-2是1~N最小公倍数的最大值。
	{
		ans=n*(n-1)*(n-2);
	}
	else//当N为偶数时,且能被3整除时,N-1,N-2,N-3互质,此时N-1*N-2*N-3是1~N最小公倍数的最大值；
		//当N为偶数时,但不能被3整除时,N,N-1,N-3互质,此时N*N-1*N-3是1~N最小公倍数的最大值
	{
		if(n%3==0)
		{
			ans=(n-1)*(n-2)*(n-3);
		}
		else
		{
			ans=n*(n-1)*(n-3);
		}
	}
	printf("%lld",ans);
	return 0;
} 
