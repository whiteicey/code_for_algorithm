#include<cstdio>
#include<iostream>
using namespace std;
int n,m,x,p,y,fa[10009];
int find(int x)
{
    if(fa[x]==x)
	return x;
    return fa[x]=find(fa[x]);
} 
void combine(int a,int b)
{
    fa[find(a)]=find(b);
}
int main()
{
    cin>>n>>m>>p;
    for(int i=1;i<=n;i++)
    {
        fa[i]=i; 
    }/*初始化操作*/ //并查集一定要初始化 
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        combine(x,y);
    }
    for(int i=1;i<=p;i++)
    {
        cin>>x>>y;
        if(find(x)==find(y))
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    return 0;
}
