#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
using namespace std;
set<string> a;
set<string> b;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int p;
		cin>>p;
		if(p>=2)
		{
			while(p--)
			{
				string t;
				cin>>t;
				a.insert(t);
			}
		}			
		else
		{
			string t;
			cin>>t;
			continue;
		}
	}		 
	int m;
	cin>>m;
	int flag=0;
	while(m--)
	{
		string q;
		cin>>q;
		if(a.find(q)==a.end()&&b.find(q)==b.end())
		{
			b.insert(q);
			if(flag==1)
			{
				cout<<" ";
			}
			cout<<q;
			flag=1;
		}
	}
	if(!flag)
	{
		cout<<"No one is handsome";
	}
	return 0;
} 
