#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,i;
	long long sum=1;
	cin>>n;
	int a[100000];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(i=2;i<=n;i++)
	{
		a[i]-=(i-1);
	}
	for(i=1;i<=n;i++)
	{
		sum*=a[i];
		sum%=1000000007;
	}
	cout<<sum;
	return 0;
}
