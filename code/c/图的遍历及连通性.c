#include<stdio.h>
#include<string.h>
int father[1000];
int find(int x)
{
	while(father[x]!=-1) 
	{
		x=father[x];
	}
	return x;
}
void Union(int a,int b)
{
	int fa=find(a),fb=find(b);
	if(fa!=fb)
	{
		father[fa]=fb;
	}
}
int main() 
{
	int n,m,i,j;
	memset(father,-1,sizeof(father));
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&m);
			if(m==1)
			{
				Union(i,j);
			}
		}
	}
	int ans=0;
	for(i=1;i<=n;i++)
	{
		if(father[i]==-1) 
			ans++;
	}
	printf("%d",ans);
	return 0;
}
