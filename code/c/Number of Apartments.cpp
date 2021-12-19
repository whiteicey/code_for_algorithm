#include <iostream>
#include <cstring>
using namespace std;
int a[1100][3];
int main()
{
	memset(a,-1,sizeof(a));
	for(int i=0;i<334;i++)
	{
		for(int j=0;j<201;j++)
		{
			for(int k=0;k<143;k++)
			{
				if(3*i+5*j+7*k<=1000)
				{
					a[3*i+5*j+7*k][0]=i;
					a[3*i+5*j+7*k][1]=j;
					a[3*i+5*j+7*k][2]=k;
				}
			}
		}
	}
	int n;
	cin>>n;
	while(n--)
	{
		int m;
		cin>>m;
			if(a[m][0]==-1)
			{
				cout<<-1<<'\n';
				continue;
			}
			cout<<a[m][0]<<' '<<a[m][1]<<' '<<a[m][2]<<'\n';
	}
	return 0;
}
