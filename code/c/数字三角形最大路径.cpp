#include  <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int map[100][100],sum[100][100]={0};
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			cin>>map[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		sum[n-1][i]=map[n-1][i];
	}
	for(i=n-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(map[i][j]+sum[i+1][j]>map[i][j]+sum[i+1][j+1])
			{
				sum[i][j]=map[i][j]+sum[i+1][j];
			}
			else
			{
				sum[i][j]=map[i][j]+sum[i+1][j+1];
			}
		}
	}
	cout<<sum[0][0];
	return 0;
}
