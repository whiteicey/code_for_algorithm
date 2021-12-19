#include <iostream>
using namespace std;
int main()
{
	int map[100][100]={1};
	int i,n,j;
	cin>>n;
	for(i=1;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==0||j==i)
			{
				map[i][j]=1;
			}
			else
			{
				map[i][j]=map[i-1][j-1]+map[i-1][j];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<map[i][j]<<' ';
		}
		cout<<"\n";
	}
	return 0;
} 
