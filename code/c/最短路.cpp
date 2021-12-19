#include <iostream>
using namespace std;
int map[200][200];
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		if(n==0&&m==0)break;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				map[i][j]=99999999;
			}
			map[i][i]=0;
		}
		for(int i=1;i<=m;i++)
		{
			int a,b,w;
			cin>>a>>b>>w;
			map[a][b]=map[b][a]=w;
		}
		for(int k=1;k<=n;k++)
		{
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					if(map[i][j]>map[i][k]+map[k][j])
					{
						map[i][j]=map[i][k]+map[k][j];
					}
				}
			}
		}
		cout<<map[1][n]<<endl;
	}
	return 0;
}
