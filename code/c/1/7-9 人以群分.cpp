#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int a[100005];
int main()
{
	int n,inn=0,outn=0;
	cin>>n;
	int s=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	sort(a,a+n);
	int out=0,in=0;
	if(n%2!=0)
	{
		inn=n/2;
		outn=n/2+1;
	}
	else
	{
		inn=n/2;
		outn=n/2;
	}
	for(int i=0;i<n/2;i++)
	{
		in+=a[i];
	}
	for(int i=n/2;i<n;i++)
	{
		out+=a[i];
	}
	cout<<"Outgoing #: "<<outn<<endl;
	cout<<"Introverted #: "<<inn<<endl;
	cout<<"Diff = "<<abs(out-in);
	return 0;
}
