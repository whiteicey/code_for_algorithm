#include <iostream>
#include <algorithm>
using namespace std;
int n;
int a[101][101],b[101][101];
int main()
{
	cin>>n;
	int sum;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cin>>a[i][j];
		//	b[i][j]=a[i][j];
		}
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			a[i][j]=a[i][j]+max(a[i+1][j],a[i+1][j+1]);
		}
	}
	sum=a[1][1];
	cout<<sum;
	return 0;
}
