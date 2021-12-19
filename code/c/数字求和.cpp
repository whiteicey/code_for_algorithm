#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int a,n=5,temp,sum=0;
	cin>>a;
	while(n--)
	{
		cin>>temp;
		if(a>temp)
		{
			sum+=temp;
		}
	}
	cout<<sum;
	return 0;
}
