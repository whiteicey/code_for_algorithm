#include <iostream>
#include <list>
using namespace std;
bool vis[100001];
list<int> stu;
list<int>::iterator pos[100001];
int main()
{
	int n;
	cin>>n;
	stu.push_front(1);
	pos[1]=stu.begin();
	for(int i=2;i<=n;i++)
	{
		int k,p;
		cin>>k>>p;
		if(p==0)
		{
			pos[i]=stu.insert(pos[k],i);
		}
		else
		{
			list<int>::iterator it=pos[k];
			it++;
			pos[i]=stu.insert(it,i);
		}
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		if(!vis[x])
		{
			stu.erase(pos[x]);
			vis[x]=true;
		}
	}
	for(list<int>::iterator it=stu.begin();it!=stu.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	return 0;
}
