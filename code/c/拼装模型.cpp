#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,i,time=0;
	cin>>n;
	int a[100000];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	i=0;
	sort(a,a+n);
	while(1)
	{
		int sum=0;
		sum+=a[i];
		i++;
		if(i==n)
		{
			break;
		}
		sum+=a[i];
		a[i]=sum;
		time+=a[i];
		sort(a+i,a+n);
	}
	cout<<time;
	return 0;
}
