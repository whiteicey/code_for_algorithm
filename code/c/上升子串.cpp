#include<iostream>
#include<cstring>
using namespace std;
const int N=110;
char g[N][N];
long long f[N][N];
int n=100,m=100;
long long ans=0;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
long long dfs(int x,int y)
{
    if(f[x][y]!=-1) 
		return f[x][y];
    f[x][y]=1;
    for(int i=0;i<4;i++)
	{
        int a=dx[i]+x;
		int b=dy[i]+y;
        if(a<0||a>=n||b<0||b>=m) 
			continue;
        if(g[x][y]>g[a][b])
            f[x][y]+=dfs(a,b);
    } 
    return f[x][y];
}
int main()
{
    memset(f,-1,sizeof f);
    for(int i=0;i<n;i++)
	{
        scanf("%s",g[i]);
    }
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
		{
            ans+=dfs(i,j);
            //cout<<dfs(i,j)<<endl;
    	}
	}    
    cout<<ans<<endl;
    return 0;
}

