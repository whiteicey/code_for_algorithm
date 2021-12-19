#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int map[100][100];
int main()
{
	int sum=0;
	memset(map,0x3f3f3f3f,sizeof(map));
	string from,end;
	cin>>from>>end;
	int n;
	cin>>n;
	while(n--)
	{
		char a,b;
		cin>>a>>b;
		map[(a-'a')+1][(b-'a')+1]=1;
	}
	for(int k=1;k<=30;k++)
	{
		for(int i=1;i<=30;i++)
		{
			for(int j=1;j<=30;j++)
			{
				map[i][j]=min(map[i][j],map[i][k]+map[k][j]);
			}
		}
	}
	for(int i=0;i<from.length();i++)
	{
		if(from[i]==end[i]) continue;
		if(map[from[i]-'a'+1][end[i]-'a'+1]==0x3f3f3f3f)
		{
			sum=-1;
			break;
		}
		sum+=map[from[i]-'a'+1][end[i]-'a'+1];
	}
	cout<<sum;
	return 0;
}
