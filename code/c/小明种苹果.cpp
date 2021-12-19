#include <iostream>
using namespace std;
int main()
{
	int n,m,sum=0,shrink=0,num,all;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		sum+=a;
		//shrink=0;
		all=0;
		for(int j=1;j<=m;j++)
		{
			int temp;
			cin>>temp;
			all-=temp;
			sum+=temp;
		}
		if(all>shrink)
		{
			num=i;
			shrink=all;
		}
	}
	cout<<sum<<" "<<num<<" "<<shrink;
	return 0;
}
