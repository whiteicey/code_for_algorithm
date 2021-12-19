#include<iostream>
#include <queue>
using namespace std;
#define long long int
struct Edge
{
    int next,to,dis;
};
queue<int> q;
struct Edge edge[10000];
int dis[100000],head[100000],vis[100000];
int num,n,m,s;
void add(int from,int to,int dis)
{
    num++;
    edge[num].next=head[from];
    edge[num].to=to;
    edge[num].dis=dis;
    head[from]=num;
}
void spfa()
{
    for(int i=1;i<=n;i++)
    {
        dis[i]=2147483647;
        vis[i]=0;
    }
    dis[s]=0;
    vis[s]=1;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        vis[u]=0;
        for(int i=head[u];i!=0;i=edge[i].next)
        {
            int zhongdian=edge[i].to;
            if(dis[zhongdian]>dis[u]+edge[i].dis)
            {
                dis[zhongdian]=dis[u]+edge[i].dis;
                if(!vis[zhongdian])
                {
                    q.push(zhongdian);
                    vis[zhongdian]=1;
                }
            }
        }
    }
}
int main()
{
    cin>>n>>m>>s;
    int t=m;
    while(t--)
    {
        int u,v,w;
        cin>>u>>v>>w;
        add(u,v,w);
    }
    spfa();
    for(int i=1;i<=n;i++)
    {
        cout<<dis[i]<<" ";
    }
    system("pause");
    return 0;
}
