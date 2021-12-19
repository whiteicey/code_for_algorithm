#include <iostream>
#include <cmath>
using namespace std;
bool map[100][100],b[100];
int path[50],sum,n,maxx,ans[50],count;
int num[100];
bool check(int x)
{
	for(int i=1;i<=n;i++)
	{
		if(map[x][i]&&!b[i])
		{
			return false;
		}
	}
	return true;
}
void dfs(int x,int step,int sum)
{
	if(check(x))
	{
		if(maxx<sum)
		{
			maxx=sum;
			count=step;
			for(int i=1;i<=step;i++)
			{
				ans[i]=path[i];
			}
		}
		return ;
	}
	for(int i=1;i<=n;i++)
	{
		if(map[x][i]&&!b[i])
		{
			b[i]=1;
			path[step+1]=i;
			dfs(i,step+1,sum+num[i]);
			b[i]=0;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1+i;j<=n;j++)
		{
			cin>>map[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		b[i]=1;
		path[1]=i;
		dfs(i,1,num[i]);
		b[i]=0;
	}
	for(int i=1;i<=count;i++)
	{
		cout<<ans[i]<<' ';
	}
	cout<<endl;
	cout<<maxx;
	return 0;
}
