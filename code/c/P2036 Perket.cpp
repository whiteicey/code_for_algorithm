#include <iostream>
#include <algorithm>
using namespace std;
int s=1,b=0,m,ans=999999;
struct help
{
	int sour;
	int sweet;
}a[10];
void dfs(int step)
{
	if(step==m)
	{
		return ;
	}
	s*=a[step].sour;
	b+=a[step].sweet;
	ans=min(ans,abs(s-b));
	dfs(step+1);
	s/=a[step].sour;
	b-=a[step].sweet;
	dfs(step+1);
}
int main()
{
	int i;
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>a[i].sour>>a[i].sweet;
	}
	dfs(0);
	cout<<ans;
	return 0;
} 
