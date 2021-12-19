#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
using namespace std;
int main()
{
	int a, b;
	int n;
	int asum=0,bsum=0;
	int ahan,ahua,bhan,bhua;
	cin>>a>>b;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ahan>>ahua>>bhan>>bhua;
		if(ahua==ahan+bhan&&bhua!=ahan+bhan)
		{
			asum++;
			a--;
		}
		if (bhua==ahan+bhan&&ahua!=ahan+bhan)
		{
			bsum++;
			b--;
		}
		if(a==-1||b==-1)
		{
			break;
		}			
	}
	if (a==-1)
	{
		cout<<'A'<<endl<<bsum;
	}	
	else
	{
		cout<<'B'<<endl<<asum;
	}	
	return 0;
}
