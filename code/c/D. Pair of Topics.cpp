#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		int b;
		cin>>b;
		a[i]-=b;
	}
	sort(a,a+n);
	int l=0,r=n-1;
	long long num=0;
	while(a[r] > 0 && l < r)
	{
		while(a[l] + a[r] <= 0)
		{
			l++;
		}
		if(l >= r)
		{
			break;
		}
		num=num+(long long)(r - l);
		r--;
	}
	cout<<num;
	return 0;
}
