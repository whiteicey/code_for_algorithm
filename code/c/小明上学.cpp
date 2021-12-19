#include <iostream>
using namespace std;
int main()
{
	int r,y,g,all = 0;
	cin>>r>>y>>g;
	int n;
	cin>>n;
	while(n--)
	{
		int num,t;
		cin>>num>>t;
		if(num == 3)
		{
			continue;
		}
		else if(num == 2)
		{
			all += r;
		}
		all += t;
	}
	cout<<all;
	return 0;
} 
