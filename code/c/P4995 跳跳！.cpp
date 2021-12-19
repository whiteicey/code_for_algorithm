#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	long long a[1000]={0},n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	long long sum=0;
	sort(a,a+n+1);
	long long head=0,end=n;
	while(head<end)
	{
		sum+=(a[end]-a[head])*(a[end]-a[head]);
		head++;
		sum+=(a[end]-a[head])*(a[end]-a[head]);
		end--;
	}
	cout<<sum;
	return 0;
}
