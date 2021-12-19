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
long long cnt;
int book[110];
int main() 
{
	while(~scanf("%lld",&t)) 
	{
		while(t--) 
		{
			cin>>n;
			for(long long i=1;i<=n;i++)
			{
				cin>>a[i];
			}
			long long nx=2*n;
			long long ans=0;
			for(long long k=1;k<=nx;k++)
			{
				cnt=0;
				memset(book,0,sizeof(book));
				for(long long i=1;i<=n;i++)
				{
					if(book[i]==0) 
					{
						for(long long j=i+1;j<=n;j++)
						{
							if(book[j]==0&&a[i]+a[j]==k) 
							{
								book[i]=1;
								book[j]=1;
								cnt++;
								break;
							}
						}
					}
				}
				for(long long i=1;i<=1;i++)
				ans=max(ans,cnt);
			}
			printf("%lld\n",ans);
		}
	}
	return 0;
}

