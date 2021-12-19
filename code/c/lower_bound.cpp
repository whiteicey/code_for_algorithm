#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int m,n,i;
	cin>>m>>n;
	vector<int>a;
	for(i=0;i<m;i++)
	{
		int temp;
		cin>>temp;
		a.push_back(temp);
	}
	for(i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		int pos;
		pos=lower_bound(a.begin(),a.end(),temp)-a.begin();
		if(temp==a[pos])
		{
			cout<<pos+1<<' ';
		}
		else
		{
			cout<<-1<<' ';
		}
	}
	return 0;
} 
