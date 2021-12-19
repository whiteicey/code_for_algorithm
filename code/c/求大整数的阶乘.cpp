#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int a[1000]={1},length=0;
	for(i=2;i<=n;i++)
	{
		int temp=0,up=0;
		for(j=0;j<=length;j++)
		{
			temp=a[j]*i+up;
			up=temp/10;
			a[j]=temp%10;			
		}
		while(up>0)
		{
			length++;
			a[length]=up%10;
			up/=10;
		}
	}
	for(j=length;j>=0;j--)
	{
		cout<<a[j];
	}
	return 0;
} 
