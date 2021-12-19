#include <iostream>
#include <cstdio>
using namespace std;
int map[10000][10000];
int main()
{
	int m,n;
	cin>>m>>n;
	while(n--)
	{
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		map[x1][y1]++;
		map[x2+1][y1]--;
		map[x1][y2+1]--;
		map[x2+1][y2+1]++;
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=m;j++)
		{
			printf("%d ",map[i][j]+=map[i-1][j]+map[i][j-1]-map[i-1][j-1]);
		}
		cout<<"\n";
	}
	return 0;
} 
