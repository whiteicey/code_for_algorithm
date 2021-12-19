#include<iostream>
#include<cstdio>
using namespace std;
char map[50][50];
int n,m;
int dfs(int x,int y)
{
	int i,j,k;
	if(x<0||x>n-1||y<0||y>m-1)
	{
		return 0;
	}
	if(map[x][y]=='#')
	{
		return 0;
	}	
	else
	{
		map[x][y]='#';
		return 1+dfs(x+1,y)+dfs(x-1,y)+dfs(x,y+1)+dfs(x,y-1);
	}
}
int main() 
{
	int flag=0;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		if(m==0&&n==0)
		{
			break;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>map[i][j];
			}
		}
		int sum=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(map[i][j]=='@')
				{
					sum=dfs(i,j);	
				} 
			} 
		}
		cout<<sum<<endl;
	}
	return 0;
}
