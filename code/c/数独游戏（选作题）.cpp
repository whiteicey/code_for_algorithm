#include <iostream>
using namespace std;
int map[10][10];
bool check(int x,int y,int num)
{
	int row,col;
	for(row=0;row<9;row++)
	{
		if(map[row][y]==num)
		{
			return false;
		}
	}
	for(col=0;col<9;col++)
	{
		if(map[x][col]==num)
		{
			return false;
		}
	}
	int xx,yy;
	xx=(x/3)*3;
	yy=(y/3)*3;
	for(row=xx;row<xx+3;row++)
	{
		for(col=yy;col<yy+3;col++)
		{
			if(map[row][col]==num)
			{
				return false;
			}
		}
	}
	return true;
}
int dfs(int sum)
{
	if(sum==81)
	{
		return 0;
	}
	int x,y,number;
	x=sum/9;
	y=sum%9;
	if(map[x][y]==0)
	{
		for(number=1;number<=9;number++)
		{
			if(check(x,y,number))
			{
				map[x][y]=number;
				dfs(sum+1);
				map[x][y]=0;
			}
		}
	}
	else
	{
		dfs(sum+1);
	}
}
int main()
{
	
	int i,j;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			cin>>map[i][j];
		}
	}
	dfs(0);
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			cout<<map[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
