#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 1010;
int a[maxn][maxn] = {0};
bool vis[maxn][maxn] = {0};
int p[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};

int ans = 0;
int minl = 1e9;
int m,n;

struct shu
{
	int x;
	int y;
	int step;
	shu(int x1,int y1,int s)
	{
		x = x1;
		y = y1;
		step  = s;
	}
};

queue<shu> q;

void bfs(){
	memset(vis,0,sizeof(vis));
	shu t = shu(1,1,0);
	q.push(t);
	vis[1][1] = 1;
	bool flag = 0;
	while(!q.empty())
	{
		t = q.front() ;
		int xx = t.x ;
		int yy = t.y ;
		int s = t.step ;
		for(int i = 0;i<4;i++)
		{
			int qx = xx+p[i][0];
			int qy = yy+p[i][1];
			if(qx<1||qx>m||qy<1||qy>n) 
				continue;
			if(!a[qx][qy]&&!vis[qx][qy])
			{
				vis[qx][qy] = 1;
				t = shu(qx,qy,s+1);
				q.push(t);
			}
			if(qx == m&&qy == n)
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
	minl = q.front() .step;
}

void dfs(int x,int y,int step)
{
	if(x == m&&y == n)
	{ //剪枝
		ans++;
		//minl = min(minl,step); //这一步就可以代替整个bfs 
		return ;
	}
	for(int i = 0;i<4;i++)
	{
		int tx = x+p[i][0];
		int ty = y+p[i][1];
		if(tx<1||tx>m||ty<1||ty>n)
		{
			continue;
		}
		if(!a[tx][ty]&&!vis[tx][ty])
		{
			vis[tx][ty] = 1;
			dfs(tx,ty,step+1);
			vis[tx][ty] = 0;//回溯 
		}
	}
	return ;
}
int main()
{
	cin >> m >> n;
	for(int i = 1;i <= m;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			cin >> a[i][j];
		}
	}
	vis[1][1] = 1;
	dfs(1,1,0);
	bfs();
	cout << ans << endl;
	if(ans) 
		cout << minl << endl;
	else 
		cout << "NoPath" << endl;
	return 0;
}

