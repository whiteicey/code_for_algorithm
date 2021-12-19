//Dlove's template
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#define R register
#define ll long long
#define ull unsigned long long
#define db double
#define ld long double
#define Ls root << 1
#define Rs Ls | 1
#define sqr(_x) ((_x) * (_x))
#define Cmax(_a, _b) ((_a) < (_b) ? (_a) = (_b), 1 : 0)
#define Cmin(_a, _b) ((_a) > (_b) ? (_a) = (_b), 1 : 0)
#define Max(_a, _b) ((_a) > (_b) ? (_a) : (_b))
#define Min(_a, _b) ((_a) < (_b) ? (_a) : (_b))
#define Abs(_x) (_x < 0 ? (-(_x)) : (_x))
using namespace std;
inline int read()
{
	R int a = 0, b = 1; R char c = getchar();
	for(; c < '0' || c > '9'; c = getchar()) (c == '-') ? b = -1 : 0;
	for(; c >= '0' && c <= '9'; c = getchar()) a = (a << 1) + (a << 3) + c - '0';
	return a * b;
}
inline ll lread()
{
	R ll a = 0, b = 1; R char c = getchar();
	for(; c < '0' || c > '9'; c = getchar()) (c == '-') ? b = -1 : 0;
	for(; c >= '0' && c <= '9'; c = getchar()) a = (a << 1) + (a << 3) + c - '0';
	return a * b;
}
int minn = 0x7fffffff;
int sum;
int m,n;
int p[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
int a[1000][1000];
int vis[1000][1000];
struct pos
{
	int x,y,step;
	pos(int x1,int y1,int s1)
	{
		x = x1;
		y = y1;
		step = s1;
	}
};
queue<struct pos> q;
void dfs(int x,int y)
{
	if(x==m&&y==n)
	{
		sum++;
		return ;
	}
	for(int i = 0;i<4;i++)
	{
		int tx = x + p[i][0];
		int ty = y + p[i][1];
		if(tx<1||tx>m||ty<1||ty>n)
		{
			continue;
		}
		if(!a[tx][ty]&&!vis[tx][ty])
		{
			vis[tx][ty] = 1;
			dfs(tx,ty);
			vis[tx][ty] = 0;
		}
	}
	return ;
}
void bfs()
{
	memset(vis,0,sizeof(vis));
	struct pos t = pos(1,1,0);
	q.push(t);
	vis[1][1] = 1;
	bool flag = 0;
	while(!q.empty())
	{
		t = q.front() ;
		int xx = t.x ;
		int yy = t.y ;
		int s = t.step ;
		for(int i = 0; i < 4; i++)
		{
			int qx = xx + p[i][0];
			int qy = yy + p[i][1];
			if(qx<1||qx>m||qy<1||qy>n) 
				continue;
			if(!a[qx][qy] && !vis[qx][qy])
			{
				vis[qx][qy] = 1;
				t = pos(qx,qy,s+1);
				q.push(t);
			}
			if(qx == m && qy == n)
			{
				flag = 1;
			}
		}
		q.pop() ;
		if(flag) break;
	}
	while(q.size() > 1)
	{
		q.pop() ;
	}
	minn = q.front().step;
}
int main()
{
	cin>>m>>n;
	for (int i = 1; i <= m;i++)
	{
		for (int j = 1; j <= n;j++)
		{
			cin>>a[i][j];
		}
	}
	vis[1][1] = 1;
	dfs(1,1);
	bfs();
	printf("%d\n",sum);
	if(sum)
	{
		printf("%d",minn);
	}
	else
	{
		printf("NoPath");
	}
	return 0;
}


