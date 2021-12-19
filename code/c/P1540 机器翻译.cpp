#include <iostream>
#include <queue>
using namespace std;
bool inqueue[100003];
queue<int>memory;
int main()
{
	int m,n;
	cin>>m>>n;
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		int v;
		cin>>v;
		if(!inqueue[v])
		{
			cnt++;
			memory.push(v);
			inqueue[v]=true;
			while(memory.size()>m)
			{
				inqueue[memory.front()]=false;
				memory.pop();
			}
		}
	}
	cout<<cnt;
	return 0;
}
