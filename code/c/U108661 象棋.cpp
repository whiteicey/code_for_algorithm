#include <iostream>
using namespace std;
int map[100][100];
int main()
{
	long long n,m,k,i;
	cin>>n>>m>>k;
	long long x,y,cnt=0;
	for(i=0;i<k;i++)
	{
		cin>>x>>y;
		if(map[x][y]==0)
		{
			map[x][y]=2;
			if(x+2<=n&&y+1<=m)
				map[x+2][y+1]=1;
			if(x+2<=n&&y-1>=1)
				map[x+2][y-1]=1;
				
			if(x-2>=1&&y+1<=m)
				map[x-2][y+1]=1;
			if(x-2>=1&&y-1>=1)
				map[x-2][y-1]=1;
				
			if(x+1<=n&&y+2<=m)
				map[x+1][y+2]=1;
			if(x-1>=1&&y+2<=m)	
				map[x-1][y+2]=1;
				
			if(x+1<=n&&y-2>=1)
				map[x+1][y-2]=1;
			if(x-1>=1&&y-2>=1)
				map[x-1][y-2]=1;
		}
		else
		{
			continue;
		}
		if(1)
		{
			if(map[x-1][y]==2&&x-1>=1)
			{
				if(map[x-1+2][y+1]!=2)
					map[x-1+2][y+1]=0;
				if(map[x-1+2][y-1]!=2)
					map[x-1+2][y-1]=0;
			}
			if(map[x+1][y]==2&&x+1<=n)
			{
				if(map[x+1-2][y+1]!=2)
					map[x+1-2][y+1]=0;
				if(map[x+1-2][y-1]!=2)
					map[x+1-2][y-1]=0;
			}
			if(map[x][y-1]==2&&y-1>=1)
			{
				if(map[x+1][y-1+2]!=2)
					map[x+1][y-1+2]=0;
				if(map[x-1][y-1+2]!=2)
					map[x-1][y-1+2]=0;
			}
			if(map[x][y+1]==2&&y+1<=m)
			{
				if(map[x+1][y+1-2]!=2)
					map[x+1][y+1-2]=0;
				if(map[x+1-2][y+1]!=2)
					map[x+1-2][y+1]=0;
			}
		}	
		cnt++;
	}
	cout<<cnt;
	return 0;
}
