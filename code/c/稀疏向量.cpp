#include <iostream>
#include <cstdio>
#include <map>
using namespace std;
map<int,long long>u;
long long sum;
int main()
{
	ios::sync_with_stdio(false);
	int n,a,b;
	//scanf("%d%d%d",&n,&a,&b);
	cin>>n>>a>>b;
	for(int i = 1 ; i <= a ; i++)
	{
		int x,y;
		//scanf("%d%d",&x,&y);
		cin>>x>>y;
		u[x] = y;
	}
	for(int i = 1 ; i <= b ; i++)
	{
		int x,y;
		//scanf("%d%d",&x,&y);
		cin>>x>>y;
		if(u[x])
		{
			sum += u[x] * y;
		}
	}
	//printf("%lld",sum);
	cout<<sum;
	return 0;
}
