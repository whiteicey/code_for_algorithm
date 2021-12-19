#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a[100000]={0,1,1},i,m,n;
	for(i=3;i<=10000;i++)
	{
		a[i]=(a[i-2]+a[i-1])%1000;
	}
	cin>>n;
	while(n--)
	{
		cin>>m;
		cout<<a[m]<<endl;
	}
	return 0;
} 
