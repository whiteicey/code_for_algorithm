#include <iostream>
#include <algorithm>
using namespace std;
struct road
{
	int x,y,t;
};
int village[1003];
road roads[100003];
bool cmp(const road &a,const road &b)
{
	return a.t<b.t;
}
int find(int x)
{
	int res=x;
	while(village[res])
	{
		res=village[res];
	}
	while(x!=res)
	{
		int tmp=village[x];
		village[x]=res;
		x=tmp;
	}
	return res;
}
bool union1(int u,int v)
{
	int fu=find(u),fv=find(v);
	if(fu!=fv)
	{
		village[fu]=fv;
		return true;
	}
	return false;
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>roads[i].x>>roads[i].y>>roads[i].t;
	}
	sort(roads,roads+m,cmp);
	for(int i=0;i<m;i++)
	{
		n-=union1(roads[i].x,roads[i].y);
		if(n==1)
		{
			cout<<roads[i].t;
			break;
		}
	}
	if(n>1)
	{
		cout<<-1;
	}
	return 0;
}
