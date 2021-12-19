#include <iostream>
#include <queue>
using namespace std;
priority_queue <int>q;
int head[1000000],tail[1000000];
int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
		int n;
		int i=0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			q.push(i);
		}
		//for(int i=1;i<=n-1;i++)
		while(q.size()>1)
		{
			i++;
			int a,b;
			a=q.top();
			head[i]=a;
			q.pop();
			
			b=q.top();
			q.pop();
			tail[i]=b;
			
			int sum=(a+b+1)/2;
			
			q.push(sum);
		}
		cout<<q.top()<<'\n';
		q.pop();
		for(int i=1;i<=n-1;i++)
		{
			if(i==n-1)
			{
				cout<<head[i]<<' '<<tail[i];
				continue;
			}
			cout<<head[i]<<' '<<tail[i]<<'\n';
		}
		cout<<'\n';
	}
	return 0;
}
