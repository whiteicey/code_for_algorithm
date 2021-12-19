#include <iostream>
#include <cstdio>
#include <set>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
int a[1000000];
int main()
{
	int n;
	scanf("%d",&n);
	int temp=3*n-1;
	while(temp--)
	{
		int t;
		scanf("%d",&t);
		if(a[t]==0)
		{
			a[t]=1;
		}
		else
		{
			a[t]=0;
		}
	}	
	printf("%d",find(a+1,a+n,0)-a);
	return 0;
}
