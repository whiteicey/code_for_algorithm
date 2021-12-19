#include <iostream>
using namespace std;
int n,sum=0,num[10000],k=0,pos=0;
int sum1;
void dfs(int x)
{
	if(sum==n)
	{
		sum1++;
		return ;
	}
	else if(sum<n)
	{
		for(int i=x;i<=n;i++)
		{
			sum+=i;
			dfs(i);
			sum-=i;
		}
	}
}
int main()
{
	while(cin>>n)
	{
		dfs(1);
		cout<<sum1<<endl;
		sum1=0;
	}
	return 0; 
} 
