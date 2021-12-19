#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long m,n;
		cin>>m>>n;
		if(n==1)
		{
			cout<<m<<endl;
		}
		else
		{
			for(int cnt=2;cnt<=n;cnt++)
			{
				long long maxx=0,minn=999999;
				long long temp=m;
				while(temp!=0)
				{
					minn=min(temp%10,minn);
					maxx=max(temp%10,maxx);
					temp/=10;
				}
				if(minn==0||maxx==0)
				{
					cout<<m<<endl;
					break;
				}
				else if(cnt==n)
				{
					cout<<m+minn*maxx<<endl;
				}
				else
				{
					m=m+maxx*minn;
				}
			}
		}
	}
	return 0;
}
