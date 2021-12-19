#include <iostream>
using namespace std;
int main()
{
	int n,i,x,y,index=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>x>>y;
	for(i=0;i<n;i++)
	{
		if(a[i]>=x&&a[i]<=y)
		{
			continue;
		}
		else
		{
			if(index==0)
			{
				cout<<a[i];
				index++;
			}
			else
			{
				cout<<' '<<a[i];
			}
		}
	}
	return 0;
}
