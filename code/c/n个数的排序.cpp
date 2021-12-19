#include <iostream>
#include <string>
#include <set>
using namespace std;
int main()
{
	multiset<int>a;
	multiset<double>b;
	multiset<string>c;
	int n,i,x;
	double y;
	string z;
	//cin>>n;
	for(i=0;i<5;i++)
	{
		cin>>x;
		a.insert(x);
	}
	for(multiset<int>::iterator it=a.begin();it!=a.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	for(i=0;i<3;i++)
	{
		cin>>z;
		c.insert(z);
	}
	for(multiset<string>::iterator it=c.begin();it!=c.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	for(i=0;i<8;i++)
	{
		cin>>y;
		b.insert(y);
	}
	for(multiset<double>::iterator it=b.begin();it!=b.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	return 0;
}
