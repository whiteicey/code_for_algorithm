#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<vector>
using namespace std;
long long t,n;
int a[110]; 
int b[110];
int main() 
{
	while(~scanf("%lld",&t))
	{
		while(t--)
		{
			cin>>n;
			int ax=0x3f3f3f3f;
			int bx=0x3f3f3f3f;
			for(long long i=1;i<=n;i++)
			{
				cin>>a[i];
				ax=min(ax,a[i]);
			}
			for(long long i=1;i<=n;i++)
			{
				cin>>b[i];
				bx=min(bx,b[i]);
			}
			long long ans=0;
			for(long long i=1;i<=n;i++)
			{
				ans=ans+max(a[i]-ax,b[i]-bx);
			}
			printf("%lld\n",ans);
		}
	} 
	return 0;
}

