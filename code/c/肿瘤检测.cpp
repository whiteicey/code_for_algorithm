#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j,map[100][100]={0},temp,s=0,c=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&temp);
			if(temp<=50)
			{
				map[i][j]=-1;
				s++;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(map[i][j]==-1)
			{
				if(map[i-1][j]==0||map[i+1][j]==0||map[i][j-1]==0||map[i][j+1]==0)
				{
					c++;
				}
			}
		}
	}
	cout<<s<<" "<<c;
	return 0;
} 
