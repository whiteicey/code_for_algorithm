#include <iostream>
using namespace std;
long long a[1000000];
int main()
{
	long long n,k,i,max=0;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	long long left=0,right=max;
	while(left<=right)
	{
		long long mid=(left+right)/2;
		if(mid==0)
		{
			cout<<0<<endl;
			return 0;
		}
		long long sum=0;
		for(i=0;i<n;i++)
		{
			sum+=a[i]/mid;
		}
		if(sum>=k)
		{
			left=mid+1;
		}
		else
		{
			right=mid-1;
		}
	}
	cout<<left-1;
	return 0;
}
