#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,i;
	double sum=100,h=100;
	cin>>n;
	for(i=0;i<n;i++)
	{
		h/=2;
		if(i==n-1)
		{
			break;
		}
		sum+=h*2;
	}
	cout<<sum<<" "<<h;
	return 0;
}
