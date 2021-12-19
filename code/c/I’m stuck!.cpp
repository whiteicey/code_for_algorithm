#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
using namespace std;
char map[100][100];
int map1[100][100],map2[100][100];
int r,c;
int sx,sy;
int tx,ty;
int move[4][2] = {0,1,0,-1,1,0,-1,0};
bool check(int x, int y) 
{
    if (x < 0 || x >= r || y < 0 || y >= c || map[x][y] == '#' || map1[x][y]) 
	{
		return false;
	}
    return true;
}
void dfs1(int x,int y)
{
	map1[x][y] = 1;
	if(map[x][y] == 'S' || map[x][y] == 'T'||map[x][y] == '+')
	{
		for(int i=0;i<4;i++)
		{
			int nx = x + move[i][0];
			int ny = y + move[i][1];
			if(check(nx,ny))
			{
				dfs1(nx,ny);
			} 
		}
	}
	else if(map[x][y] == '-')
	{
		for (int i = 0; i < 2; i++) 
		{
            int nx = x + move[i][0];
            int ny = y + move[i][1];
            if (check(nx, ny)) 
			{
                dfs1(nx, ny);
            }
        }
	}
	else if(map[x][y] == '|')
	{
		for (int i = 2; i < 4; i++) 
		{
            int nx = x + move[i][0];
            int ny = y + move[i][1];
            if (check(nx, ny)) 
			{
                dfs1(nx, ny);
            }
        }
	}
	else if(map[x][y] == '.')
	{
		for (int i = 2; i < 3; i++) 
		{
            int nx = x + move[i][0];
            int ny = y + move[i][1];
            if (check(nx, ny)) 
			{
                dfs1(nx, ny);
            }
        }
	}
}
bool check1(int x, int y) 
{
    if (x < 0 || x >= r || y < 0 || y >= c || map[x][y] == '#' || map2[x][y]) 
	{
		return false;
	}
    return true;
}
void dfs2(int x,int y)
{
	map2[x][y] = 1;
	if(map[x][y] == 'S' ||map[x][y] == '+')
	{
		for(int i=0;i<4;i++)
		{
			int nx = x + move[i][0];
			int ny = y + move[i][1];
			if(check1(nx,ny))
			{
				dfs2(nx,ny);
			} 
		}
	}
	else if(map[x][y] == '-')
	{
		for (int i = 0; i < 2; i++) 
		{
            int nx = x + move[i][0];
            int ny = y + move[i][1];
            if (check1(nx, ny)) 
			{
                dfs2(nx, ny);
            }
        }
	}
	else if(map[x][y] == '|')
	{
		for (int i = 2; i < 4; i++) 
		{
            int nx = x + move[i][0];
            int ny = y + move[i][1];
            if (check1(nx, ny)) 
			{
                dfs2(nx, ny);
            }
        }
	}
	else if(map[x][y] == '.')
	{
		for (int i = 2; i < 3; i++) 
		{
            int nx = x + move[i][0];
            int ny = y + move[i][1];
            if (check1(nx, ny)) 
			{
                dfs2(nx, ny);
            }
        }
	}
}
int main()
{
	cin>>r>>c;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>map[i][j];
			if(map[i][j] == 'S')
			{
				sx=i;
				sy=j;
			}
			if(map[i][j] == 'T')
			{
				tx=i;
				ty=j;
			}
		}
	}
	dfs1(sx,sy);
	int ans=0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(map1[i][j] == 0)
			{
				continue;
			}
			memset(map2,0,sizeof(map2));
			dfs2(i,j);
			if(map2[tx][ty] == 0)
			{
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}
