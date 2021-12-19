#include<iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int N=300;
int vis[N][N];
char s;
int u[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int a,b,c,d,n;
int flag=0;
void searchh(int x,int y)
{
    if(x==c&&y==d)
    {
        cout<<"YES"<<endl;
        flag=1;
        return;
    }
    else
    {
        for(int i=0;i<4;i++)
        {
            int xx=x+u[i][0];
            int yy=y+u[i][1];
            if(xx>=0&&xx<n&&yy>=0&&yy<n&&(!vis[xx][yy]))
            {
                vis[xx][yy]=1;
                searchh(xx,yy);
            }
        }
    }
    return ;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        flag=0;
        memset(vis,0,sizeof(vis));
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>s;
                if(s=='#')
                    vis[i][j]=1;
            }
        }
        cin>>a>>b>>c>>d;
        if(vis[a][b]||vis[c][d])
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
            searchh(a,b);
        if(!flag)
            cout<<"NO"<<endl;
    }
    return 0;
}
