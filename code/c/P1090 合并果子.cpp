#include <iostream>
#include <cstdio>
#include <set>
using namespace std;
int main()
{
	multiset<int>a;
	int i,temp,n,all=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		a.insert(temp);
	}
	multiset<int>::iterator it;
	int sum=0;
	while(!a.empty())
	{
		if(a.size()==1)
		{
			break;
		}
		else
		{
			it=a.begin();
			sum=*it;
			a.erase(it);
			it=a.begin();
			sum+=*it;
			all+=sum;
			a.erase(it);
			a.insert(sum);	
		}			
	}
	cout<<all;
	return 0;
 } 
