#include <iostream>
using namespace std;
long long gcd(int a,int b)
{
	if(b<=1)
	{
		return b;
	}
	return gcd(b,a%b);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b;
		cin>>a>>b;
		if(a<b)
		{
			swap(a,b);
		}
		if(!gcd(a,b))
		{
			cout<<"NONE"<<'\n';
			continue;
		} 
		cout<<a*b-a-b<<'\n';
	}
	return 0;
} 
