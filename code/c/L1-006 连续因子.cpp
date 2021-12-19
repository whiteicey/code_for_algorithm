#include <iostream>
using namespace std;
long long n,sum=1;
int main()
{
	cin>>n;
	for(int i=1;;i++)
	{
		for(int j=i;sum<n;j++)
		{
			sum*=j;
		}
		if(sum==n)
		{
			
		}
	}
}
