#include <iostream>
#include <math.h> 
using namespace std;
long long a[20];
int n;
int sum=0;
bool prime(int x)
{
	int i;
	if(x==0||x==1)
	{
		return false;
	}
	else if(x==2)
	{
		return true;
	}
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			return false;
		}
	}
	return true;
}



int func(int left, int already, int next)
{
	int x;
	if(next+left>n)
	{
		return 0;
	}
	if(left==0)
	{
		if(prime(already))
		{
			sum++;
			return sum;
		}
	}
	else
	{
		for(x=next;x<n;x++)
		{
			func(left-1,already+a[x],x+1);
		}
	}
}



int main()
{
	int k;
	cin>>n>>k;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-k+1;i++)
	{
		func(k-1,a[i],i+1);
	}
	cout<<sum;
	return 0;
}

