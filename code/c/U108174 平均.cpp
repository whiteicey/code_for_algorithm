#include <iostream>
using namespace std;
int main()
{
	long long n,m,i,sum=0,j,k;
	cin>>n>>m;
	long long a[100000],b[100000];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==1)
			{
				b[j]=a[j];
				continue;
			}
			for(k=1;k<=j;k++)
			{
				sum+=a[k];
			}
			b[j]=(sum/j)%998244353;
			sum=0;
		}
		for(j=1;j<=n;j++)
		{
			a[j]=b[j];
		}
	}
	for(i=1;i<=n;i++)
	{
		cout<<a[i]<<' ';
	}
	return 0;
}
