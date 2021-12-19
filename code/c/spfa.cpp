#include <iostream>
#include <queue>
#define ll long long
using namespace std;
ll n,m,s;
struct Edge{
	ll next,to,w;
};
struct Edge edge[100000];
ll head[100000],vis[100000],dis[100000];
ll num;
queue<ll> q;
void add(ll from,ll to,ll l)
{
	num++;
	edge[num].next=head[from];
	edge[num].to=to;
	edge[num].w=l;
	head[from]=num;
}
void spfa()
{
	for(ll i=1;i<=m;i++)
	{
		dis[i]=2147483647;
		vis[i]=0;
	}
	dis[s]=0;
	vis[s]=1;
	q.push(s);
	while(!q.empty())
	{
		ll begin=q.front();
		q.pop();
		vis[begin]=0;
		for(ll i=head[begin];i!=0;i=edge[i].next)
		{
			ll end=edge[i].to;
			if(dis[end]>dis[begin]+edge[i].w)
			{
				dis[end]=dis[begin]+edge[i].w;
				if(vis[end]==0)
				{
					q.push(end);
					vis[end]=1;
				}
			}
		}
	}
}
int main()
{
	cin>>n>>m>>s;
	for(ll i=1;i<=m;i++)
	{
		ll u,v,w;
		cin>>u>>v>>w;
		add(u,v,w);
	}
	spfa();
	for(ll i=1;i<=n;i++)
	{
		cout<<dis[i]<<" ";
	}
	return 0;
}
