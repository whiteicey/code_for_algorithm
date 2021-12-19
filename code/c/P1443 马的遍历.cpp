#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n,m,inx,iny,a[401][401],i,j;
void dfs(int x,int y,int step)
{
    if(step>200)
        return;
    a[x][y]=step;
    if(y+1<=m&&x+2<=n&&(a[x+2][y+1]==-1||a[x+2][y+1]>step+1)) dfs(x+2,y+1,step+1);
    if(y-1>0&&x+2<=n&&(a[x+2][y-1]==-1||a[x+2][y-1]>step+1)) dfs(x+2,y-1,step+1); 
    if(y+2<=m&&x+1<=n&&(a[x+1][y+2]==-1||a[x+1][y+2]>step+1)) dfs(x+1,y+2,step+1);
    if(y+2<=m&&x-1>0&&(a[x-1][y+2]==-1||a[x-1][y+2]>step+1)) dfs(x-1,y+2,step+1);
    if(y-1>0&&x-2>0&&(a[x-2][y-1]==-1||a[x-2][y-1]>step+1)) dfs(x-2,y-1,step+1);
    if(y+1<=m&&x-2>0&&(a[x-2][y+1]==-1||a[x-2][y+1]>step+1)) dfs(x-2,y+1,step+1);
    if(y-2>0&&x+1<=n&&(a[x+1][y-2]==-1||a[x+1][y-2]>step+1)) dfs(x+1,y-2,step+1);
    if(y-2>0&&x-1>0&&(a[x-1][y-2]==-1||a[x-1][y-2]>step+1)) dfs(x-1,y-2,step+1);
}
int main()
{
    cin>>n>>m>>inx>>iny;
    memset(a,-1,sizeof(a));
    dfs(inx,iny,0);
    for (i=1;i<=n;i++)
     {
      for (j=1;j<=m;j++)
       printf("%-5d",a[i][j]);
      printf("\n");
     }
    return 0;
}
