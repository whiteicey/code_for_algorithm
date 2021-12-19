#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int m,n,a[100000]={0},i,f[100000]={0},j;
	cin>>m>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=m;j>=a[i];j--)
		{
			f[j]=max(f[j],f[j-a[i]]+a[i]);
		}
	}
	cout<<m-f[m];
	return 0;
}
