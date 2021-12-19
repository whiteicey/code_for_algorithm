#include <iostream>
using namespace std;
int main()
{
	int n,i,j,path[100];
	int map[110][110],sum[110][110];
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			cin>>map[i][j];
		}
	}
	for(i=0;i<=n-1;i++)
	{
		sum[n-1][i]=map[n-1][i];
	}
	int step=1;
	for(i=n-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(map[i][j]+sum[i+1][j]<map[i][j]+sum[i+1][j+1])
			{
				sum[i][j]=map[i][j]+sum[i+1][j];
			}
			else
			{
				sum[i][j]=map[i][j]+sum[i+1][j+1];
			}
		}
	}
	path[0]=map[0][0];
	i=0;
	j=0;
	while(i<n)
	{
		if(sum[i][j]-map[i][j]==sum[i+1][j])
		{
			path[step]=map[i+1][j];
			j=j;
			step++;
		}
		else if(sum[i][j]-map[i][j]==sum[i+1][j+1])
		{
			path[step]=map[i+1][j+1];
			step++;
			j=j+1;
		}
		i++;
			
	}
	cout<<sum[0][0]<<endl;
	for(i=0;i<n;i++)
	{
		cout<<path[i]<<' ';
	}
	return 0;
}
