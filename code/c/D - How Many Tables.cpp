#include <iostream>
#include <cstdio>
#include <cmath>
#include <map>
#include <algorithm>
#include <set>
#include <vector>
#include <stack>
#include <string>
#include <cstring>
int fri[1005];
int t,m,a,b;
int n,all;
int find(int x)
{
	if(x!=fri[x])
	{
		return fri[x]=find(fri[x]);
	}
	return x;
}
void unite(int a,int b)
{
	int fa=find(a);
	int fb=find(b);
	if(fa!=fb)
	{
		fri[fa]=fb;
		all--;
    }
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m); 
		for(int i=1;i<=n;i++)
		{
			fri[i]=i;
		}	
		all=n;
		for(int i=1;i<=m;i++)
		{
			scanf("%d %d",&a,&b);
			unite(a,b);	
		}
		printf("%d\n",all);
	}
}
