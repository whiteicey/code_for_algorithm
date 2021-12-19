#include <iostream>
#include<cstdio>
#include <cstring>
using namespace std;
char a[10000000];
int main()
{
	long long n,len,temp;
	cin>>a>>n;
	len=strlen(a);
	temp=len;
	while(len<n)
	{
		len*=2;
	}
	len/=2;
	while(n>temp)
	{
		if(n<len)
		{
			len/=2;
			continue;
		}
		n-=(len+1);
		if(n==0)
		{
			n=len;
		}
		len/=2;
	}
	cout<<a[n-1];
	return 0;
}
