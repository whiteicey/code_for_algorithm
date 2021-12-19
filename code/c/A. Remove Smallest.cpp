#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<vector>
using namespace std;
int t,n;
int a[110]; 
int flag()
{
	for(int i=2;i<=n;i++)
	{
		if(a[i]==a[i-1]+1||a[i]==a[i-1])
		{
			continue;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}
int main() 
{
	while(~scanf("%d",&t))
	{
		while(t--)
		{
			cin>>n;
			for(int i=1;i<=n;i++)
			{
				cin>>a[i];
			}
			sort(a+1,a+n+1);
			if(flag()==1)
			{
				printf("YES\n");
			}else
			{
				printf("NO\n");
			}
		}
	} 
	return 0;
}

