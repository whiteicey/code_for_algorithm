#include <iostream>
#include <cmath>
using namespace std;
int x[100010],y[100010];
int gcd(int x,int y)
{
	return y==0?x:gcd(y,x%y);
}
int main()
{
	int n,sum=0;
	cin>>n;
	n++;
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	sum+=gcd(x[0],y[0]);
	for(int i=1;i<n;i++)
	{
		sum+=gcd(abs(x[i]-x[i-1]),abs(y[i]-y[i-1]));
		sum%=10000;
	}
	cout<<sum;
	return 0;
}
