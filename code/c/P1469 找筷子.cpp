#include <iostream>
#include <cstdio>
using namespace std;
bool a[10000010];
int main()
{
	int n,i,l=0,temp;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&temp);
		if(a[temp]==0)
		{
			l+=temp;
			a[temp]=1;
		}
		else
		{
			l-=temp;
			a[temp]=0;
		}
	}
	cout<<l;
	return 0;
}
