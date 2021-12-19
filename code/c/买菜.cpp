#include <iostream>
#include <algorithm>
using namespace std;
int t[1000001];
int main()
{
	ios::sync_with_stdio(false);
	int n,j=0,all=0,m=-1;
	cin>>n;
	for(int i=0;i<2*n;i++)
	{
		int s,e;
		cin>>s>>e;
		m=max(m,e);
		for(int j=s;j<e;j++)
		{
			t[j]++;
		}
	} 
	for(int i=0;i<m;i++)
	{
		if(t[i]==2)
		{
			all++;
		}
	}
	cout<<all;
	return 0;
 } 
