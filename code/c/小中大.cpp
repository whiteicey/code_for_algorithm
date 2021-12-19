#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[100000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	if(n%2 == 0)
	{
		//cout<<a[n-1]<<" "<<(int)round((a[n/2]+a[n/2-1])/2.0)<<" "<<a[0];
		if((a[n/2]+a[n/2 -1]) % 2 == 0)
			cout<<a[n-1]<<" "<<(a[n/2]+a[n/2-1])/2<<" "<<a[0];
		else
		{
			cout<<a[n-1]<<" ";
			printf("%.1f ",((a[n/2]+a[n/2-1])/2.0 + 0.5));
			cout<< a[0];
		}
	}
	else
	{
		cout<<a[n-1]<<" "<<a[n/2]<<" "<<a[0];
	}
	return 0;
 } 
