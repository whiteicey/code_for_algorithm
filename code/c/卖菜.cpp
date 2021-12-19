#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[1001];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(i == 0)
		{
			cout<<(a[i]+a[i+1])/2<<" ";
		}
		else if(i == n - 1)
		{
			cout<<(a[i-1]+a[i])/2;
		}
		else
		{
			cout<<(a[i-1]+a[i]+a[i+1])/3<<" ";
		}
	}
	return 0;
}
