#include<iostream>
#include<cstdio>
#define ll long long
ll a,b,n,m,l[22][22],map[23][23];//map��Ҫ�����QwQ
using namespace std;
void bj(ll x,ll y)//�����Ŀ��Ƶ�
{
    map[x][y]=1;
    map[x-1][y-2]=1;
    map[x-2][y-1]=1;
    map[x-2][y+1]=1;
    map[x-1][y+2]=1;
    map[x+1][y-2]=1;
    map[x+2][y-1]=1;
    map[x+2][y+1]=1;
    map[x+1][y+2]=1;
}
int main()
{
    scanf("%lld%lld%lld%lld",&n,&m,&a,&b);
    bj(a,b);
    l[1][0]=1;//Ϊ�˰�Ӧ����һ����һ������ȥ
    for(int i=1;i<=n+1;++i)
    {
        for(int j=1;j<=m+1;++j)
        {
            l[i][j]=l[i-1][j]+l[i][j-1];//һ�����·�����������Ϸ�
            if(map[i-1][j-1]) l[i][j]=0;//������������ô��0
        }
    }
    printf("%lld",l[n+1][m+1]);//����������Ųһ��
    return 0;
}
