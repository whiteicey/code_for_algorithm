#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
	int n,i;
	set<int>x;
	set<int>y;
	int a,b;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		x.insert(a);
		y.insert(b);
	}
	int minn=min(x.size(),y.size());
	cout<<minn;
	return 0;
} 
