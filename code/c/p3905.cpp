#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int h[110][110];
int mp[110][110];
int main()
{

	memset(h,0x3f3f3f3f,sizeof(h));
	int n,m,d;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int s,e,t;
		cin>>s>>e>>t;
		//cin>>m[s][e];
		mp[e][s]=mp[s][e]=t;
		h[e][s]=h[s][e]=0;
	}
	cin>>d;
	for(int i=1;i<=d;i++)
	{
		int s,e;
		cin>>s>>e;
		h[s][e]=mp[s][e];
		h[e][s]=mp[s][e];
	}
	int x,y;
	cin>>x>>y;
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				h[i][j]=min(h[i][j],h[i][k]+h[k][j]);
			}
		}
	}
	cout<<h[x][y];
	return 0;
}
