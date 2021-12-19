#include<stdio.h>
int map[1000][1000]={0};
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
	for(i=0;i<m;i++)
	{
    	int a,b;
		scanf("%d%d",&a,&b);
      	map[a-1][i]=1;
      	map[b-1][i]=-1;
    }
     for(i=0;i<n;i++)
	{
        for(j=0;j<m;j++)
		{
            printf("%d ",map[i][j]);
        }
        printf("\n");
    }
    return 0;
}
