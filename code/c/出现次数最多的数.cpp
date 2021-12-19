#include <iostream>
#include <map>
using namespace std;
map<int,int> m;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int t;
		cin>>t;
		m[t]++;
	}
	int max=-1,num;
	for(map<int,int>::iterator it = m.begin();it != m.end();it++)
	{
		if(it->second > max)
		{
			max = it -> second;
			num = it -> first;
		}
	}
	cout<<num;
	return 0;
}
