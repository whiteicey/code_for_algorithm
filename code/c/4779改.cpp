#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
struct edge
{
	long long to,next,w;
};
struct node
{
	long long dis,pos;
	bool operator <(const node &x)const
	{
		return x.dis<dis;
	}
};
long long num,head[100010],dis[100010],vis[100010];
struct edge e[500010];
priority_queue<node> q; 
void add(long long from,long long next,long long w)
{
	num++;
	e[num].w=w;
	e[num].next=head[from];
	e[num].to=next;
	head[from]=num;
}
long long n,m,s;
int main()
{
	cin>>n>>m>>s;
	memset(dis,0x3f3f3f3f,sizeof(dis));
	for(long long i=1;i<=m;i++)
	{
		long long a,b,c;
		cin>>a>>b>>c;
		add(a,b,c);
	}
	dis[s]=0;
	q.push((node){0,s});
	while(!q.empty())
	{
		node tmp=q.top();
		q.pop();
		long long begin=tmp.pos,d=tmp.dis;
		if(vis[begin]) 
			continue;
		vis[begin]=1;
		for(long long i=head[begin];i;i=e[i].next)
		{
			long long end=e[i].to;
			if(dis[end]>dis[begin]+e[i].w)
			{
				dis[end]=dis[begin]+e[i].w;	
				if(vis[end]==0)
				{
					q.push((node){dis[end],end});
				}
			}
		}
	}
	for(long long i=1;i<=n;i++)
	{
		cout<<dis[i]<<" ";
	}
	return 0;
}
