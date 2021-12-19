#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int n,i,j;
	int a[10000],b[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int index=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			b[index]=a[i]+a[j];
			index++;
		}
	}
	sort(b,b+index);
	for(i=0;i<index;i++)
	{
		if(i==0)
		{
			printf("%d",b[i]);
		}
		else
		{
			printf(" %d",b[i]);
		}
	}
	return 0;
}
