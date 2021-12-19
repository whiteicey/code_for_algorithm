#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	long long i,n,s=0;
	while(~scanf("%lld",&n))
	{
		for(i=1;i<=n;i++)
		{
			if(i%7!=0&&i%10!=7&&i/10!=7)
			{
				s+=i*i;
			}
		}
		printf("%lld\n",s);
	}
	return 0;
}
