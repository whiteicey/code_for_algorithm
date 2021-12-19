#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int a[1000];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",n-1);
	return 0;
}
