#include <cstdio>
using namespace std;
long long map[50][50]={0},step=0,book[50][50]={0};
long long endx,endy;
long long housex,housey;
long long next[2][2]={{0,1},{1,0}};
void dfs(int x,int y)
{
	long long tx,ty,k;
	if(x==endx&&y==endy)
	{
		step++;
		return ;
	}
	for(k=0;k<2;k++)
	{
		tx=x+next[k][0];
		ty=y+next[k][1];
		if(tx<0||tx>endx||ty<0||ty>endy)
		{
			continue;
		}
		if(map[tx][ty]==0&&book[tx][ty]==0)
		{
			book[tx][ty]=1;
			dfs(tx,ty);
			book[tx][ty]=0;
		}
	}
	return ;
}
int main()
{
	scanf("%lld%lld%lld%lld",&endx,&endy,&housex,&housey);
	map[housex][housey]=1;
	if(housex-1>=0&&housey-2>=0)
    map[housex-1][housey-2]=1;
    if(housex-2>=0&&housey-1>=0)
    map[housex-2][housey-1]=1;
    if(housex-2>=0&&housey+1>=0)
    map[housex-2][housey+1]=1;
    if(housex-1>=0&&housey+2>=0)
    map[housex-1][housey+2]=1;
    if(housex+1>=0&&housey-2>=0)
    map[housex+1][housey-2]=1;
    if(housex+2>=0&&housey-1>=0)
    map[housex+2][housey-1]=1;
    if(housex+2>=0&&housey+1>=0)
    map[housex+2][housey+1]=1;
    if(housex+1>=0&&housey+2>=0)
    map[housex+1][housey+2]=1;
    dfs(0,0);
	printf("%lld",step);
	return 0;
}
