#include <iostream>
#include <cstring>
#include <queue> 
using namespace std;
struct edge
{
	int to,next,w;
};
struct node
{
	int dis,pos;
	bool operator<(const node &x)const
	{
		return x.dis<dis;
	}
};
struct edge e[500010];
int head[100010],dis[100010],vis[100010],num;
priority_queue<node> q;
void add(int from,int to,int w)
{
	num++;
	e[num].to=to;
	e[num].next=head[from];
	e[num].w=w;
	head[from]=num;
}
int main()
{
	int n,m,s;
	cin>>n>>m>>s;
	for(int i=1;i<=m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		add(a,b,c);
	}
	for(int i=1;i<=n;i++)
	{
		dis[i]=2147483647;
	}
	dis[s]=0;
	q.push((node){0,s});
	while(!q.empty())
	{
		node temp=q.top();
		q.pop();
		int begin=temp.pos;
		if(vis[begin])
		{
			continue;
		}
		vis[begin]=1;
		for(int i=head[begin];i;i=e[i].next)
		{
			int end=e[i].to;
			if(dis[end]>dis[begin]+e[i].w)
			{
				dis[end]=dis[begin]+e[i].w;
				if(vis[end]==0)
				{
					q.push((node){dis[end],end});
					//vis[end]=1;
				}
			}
		} 
	}
	for(int i=1;i<=n;i++)
	{
		cout<<dis[i]<<" ";
	}
	return 0;
}
