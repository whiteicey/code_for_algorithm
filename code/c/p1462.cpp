#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<queue>
using namespace std;
const int maxn=10010;
struct pp
{
	int u;
	int v;
	int w;
	int next;
}e[maxn*maxn];
struct node
{
	int dis;
	int pos;
	bool operator <(const node &x) const
	{
		return x.dis<dis;
	}
};
int dis[maxn],head[maxn],vis[maxn],cost[maxn],f[maxn];
int n,m,b,s,ans,cnt,res,flag,maxl,l,r;
priority_queue <node> q;
void add(int x,int y,int z)
{
	e[++cnt].u=x;
	e[cnt].v=y;
	e[cnt].w=z;
	e[cnt].next=head[x];
	head[x]=cnt;
}
bool go( int t)
{
	for(int i=1;i<=n;i++) dis[i]=1000000010,vis[i]=0;
	dis[1]=0;
	q.push((node) {0,1});
	while(!q.empty())
	{
		node tmp=q.top();
		q.pop();
		int begin=tmp.pos;
		if(vis[begin]) continue;
		vis[begin]=1;
		for(int i=head[begin];i;i=e[i].next)
		{
			int end=e[i].v;
			if(dis[end]>dis[begin]+e[i].w&&cost[end]<=t)
			{
				dis[end]=dis[begin]+e[i].w;
				if(!vis[end])
				{
					q.push((node) {dis[end],end} );
				}
			}
		}
	}
	if(dis[n]<b) 
		return true;
	else 
		return false;
	
}
int main()
{
	scanf("%d%d%d",&n,&m,&b);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&f[i]);
		cost[i]=f[i];
	}
	sort(f+1,f+1+n);
	for(int i=1;i<=m;i++)
	{
		int aa,bb,cc;
		scanf("%d%d%d",&aa,&bb,&cc);
		add(aa,bb,cc);
		add(bb,aa,cc);
	}
	l=1;
	r=n;
	if(!go(f[n]+8)) 
	{
		printf("AFK");
		return 0;
	}
	while (l<=r)
	{
		int mid=(l+r)>>1;
		if(go(f[mid])) 
		{
			ans=f[mid];
			r=mid-1;
		}
		else 
		{
			l=mid+1;
		}	
	}
	printf("%d",ans);
	return 0;
}
