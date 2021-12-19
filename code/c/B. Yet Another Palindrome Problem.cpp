#include<iostream>
#include<map>
using namespace std;
const int N=50005;
map<int,int> v;
int x;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		v.clear();
		scanf("%d",&n);
		int f=0;
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			if(v[x]==0)
			{
				v[x]=i;
			}
			else
			{
				int p=i-v[x];
				if(p>1) 
					f=1;
			}
		}
		if(f==1) 
			cout<<"YES\n";
		else 
			cout<<"NO\n";
	}
}
