#include <iostream>
#include <cstring>
using namespace std;
int m,n,x,y,num;
char map[50][50];
int step[4][2]={1,0,-1,0,0,1,0,-1};
void dfs(int x,int y)
{
	num++;
	map[x][y]='#';	
	for(int i=0;i<4;i++)
	{
		int tx,ty;
		tx=x+step[i][0];
		ty=y+step[i][1];
		if(map[tx][ty]=='.'&&tx>=1&&tx<=m&&ty>=1&&ty<=n)
		{
			dfs(tx,ty);
		}
	}
	return ;
}
int main()
{
	while(cin>>n>>m)
	{
		memset(map,'#',sizeof(map));
		num=0;
		if(n==0&&m==0)
		{
			break;
		}
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>map[i][j];
				if(map[i][j]=='@')
				{
					x=i;
					y=j;
				}
			}
		}
		dfs(x,y);
		cout<<num<<endl;
	}
	return 0;
}
