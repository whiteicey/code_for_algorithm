#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int m;
	int a[11];
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		a[i]=i;
	}
	reverse(a+1,a+1+m); 
	for(int i=1;i<=m;i++)
	{
		cout<<a[i];
	}
	cout<<"\n";
	while(prev_permutation(a+1,a+m+1))
	{
		for(int i=1;i<=m;i++)
		{
			cout<<a[i];
		}
		cout<<"\n";
	}
	return 0;
}
