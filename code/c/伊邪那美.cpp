#include <iostream>
using namespace std;
long long n,x,y,res;
long long sum;
long long mul(long long a,long long b)
{
	while(b)
    {
        if(b&1)
        {
            res=(res+a);
        }
        a=a*2;
        b>>=1;
    }
    return res;
}
long long exgcd(long long a,long long b,long long &x,long long &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    long long gcd=exgcd(b,a%b,x,y);
    long long temp,k;
    k=a/b;
    temp=x;
    x=y;
    long long temp2=k*y;
    y=temp-temp2;
    return gcd;
}
int main()
{
	cin>>n;
	int m=exgcd(6,1007,x,y);
	sum=mul(mul(mul(n,n+1),n+2),m);
	exgcd(sum,1007,x,y);
	cout<<x%1007;
	return 0;
}

