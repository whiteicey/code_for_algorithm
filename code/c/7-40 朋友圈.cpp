#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m,t,a,b,maxn=0;
int f[30010],num[30010];
int findf(int a)
{
	return f[a]==a?a:f[a]=findf(f[a]);
}
void merge(int a,int b)
{
	int fa=findf(a),fb=findf(b);
	if(fa!=fb)
		f[fa]=fb;
}
int main()
{
	memset(num,0,sizeof(num));
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		f[i]=i;
	for(int i=0;i<m;i++)
	{
		cin>>t;
		if(t>=2)
		{
			cin>>a>>b;
			merge(a,b);
			t-=2;
			while(t--)
			{
				cin>>b;
				merge(a,b);
			}
		}
		else
			cin>>a;
	}
	for(int i=1;i<=n;i++)
	{
		maxn=max(maxn,++num[findf(i)]);
	}
	printf("%d",maxn);
	return 0;
}
