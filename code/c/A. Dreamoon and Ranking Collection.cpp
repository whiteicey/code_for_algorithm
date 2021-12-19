#include <iostream>
#include <set>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		set<int>a;
		a.clear();
		int x,y;
		cin>>x>>y;
		for(int i=0;i<x;i++)
		{
			int temp;
			cin>>temp;
			a.insert(temp);
		}
		int m=1;
		int i;
		for(i=1;y>0;i++)
		{
			if(a.find(i)==a.end())
			{
				y--;
				if(y==0)
				{
					i++;
					for(i;;i++)
					{
						if(a.find(i)==a.end())
						{
							break;
						}
					}
					i--;
				}
			}
		}
		if(a.find(i)==a.end())
		{
			i--;
		}
		cout<<i<<"\n";
	}
	return 0;
}
