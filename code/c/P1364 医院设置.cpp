#include<cstdio>
using namespace std;
int a[101],g[6][6];
int main()
{
    int n,l,r,min,total;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            g[i][j]=1000000;
        }
    }
    for(int i=1;i<=n;i++)//读入、初始化
    {
        g[i][i]=0;
        scanf("%d%d%d",&a[i],&l,&r);
        if(l>0)
			g[i][l]=g[l][i]=1;
        if(r>0)
			g[i][r]=g[r][i]=1; 
    }
    for(int k=1;k<=n;k++)//用Floyed求任意两结点之间的最短路径
    {
        for(int i=1;i<=n;i++)
        {
            if(i!=k)
            {
                for(int j=1;j<=n;j++)
                {
                    if(i!=j&&k!=j&&g[i][k]+g[k][j]<g[i][j])
                        g[i][j]=g[i][k]+g[k][j];
                }
            }
        }
    }
    min=0x7fffffff;
    for(int i=1;i<=n;i++)//穷举医院建在N个结点，找出最短距离
    {
        total=0;
        for(int j=1;j<=n;j++)
            total+=g[i][j]*a[j];
        if(total<min)min=total;
    }
    printf("%d",min);
    return 0;
}
