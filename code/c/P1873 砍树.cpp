#include <iostream>
#include <algorithm>
using namespace std;
long long a[100000000];
int main()
{
	long long n,m,i;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	long long left=0,right=a[n-1];
	while(left<=right)
	{
		long long mid=(left+right)/2,sum=0;
		for(i=0;i<n;i++)
		{
			if(a[i]>mid)
			{
				sum+=(a[i]-mid);
			}
		}
		if(sum<m)
		{
			right=mid-1;
		}
		else
		{
			left=mid+1;
		}
	}
	cout<<left-1;
	return 0;
}
