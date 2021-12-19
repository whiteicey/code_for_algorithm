#include <iostream>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
//	cout<<m<<' '<<n<<endl;
//	for(int i=0;i<n;i++)
//	{
//		cout<<a[i]<<' ';
//	}
//	cout<<endl;
	m%=n;
	for(int i=m;i<n;i++)
	{
		cout<<a[i]<<' ';
	}
	for(int i=0;i<m;i++)
	{
		cout<<a[i]<<' ';
	}
	return 0;
}
