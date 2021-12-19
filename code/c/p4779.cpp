#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int dis[100000],bk[100000];
int map[10010][10010];
int main()
{
	int n,m,s;
	cin>>n>>m>>s;
	memset(map,0x3f3f3f3f,sizeof(map));
	for(int i=1;i<=m;i++)
	{
		int t1,t2,t3;
		cin>>t1>>t2>>t3;
		if(map[t1][t2]>t3)
		{
			map[t1][t2]=t3;
			map[t2][t1]=t3;
		}
	}
	for(int i=1;i<=n;i++)
	{
		dis[i]=map[s][i];
	}
	dis[s]=0;
	bk[1]=1;
	for(int i=1;i<=n-1;i++)
	{
		int minn=0x3f3f3f3f,u;
		for(int j=1;j<=n;j++)
		{
			if(bk[j]==0&&dis[j]<minn)
			{
				minn=dis[j];
				u=j;
			}
		}
		bk[u]=1;
		for(int v=1;v<=n;v++)
		{
			if(map[u][v]<0x3f3f3f3f&&dis[v]>dis[u]+map[u][v])
			{
				dis[v]=dis[u]+map[u][v];
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<dis[i]<<" ";
	}
	return 0;
}
