#include <iostream>
#include <algorithm>
using namespace std;
long long gcd(long long a,long long b)
{
	return b?gcd(b,a%b):a;
}
int main()
{
	long long a,b,c,d;
	cin>>a>>b>>c;
	d=a*b/__gcd(a,b);
	d=c*d/__gcd(c,d);
	cout<<d;
	return 0;
}
