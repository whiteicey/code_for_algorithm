#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int n,k,i,temp=0;
	scanf("%d%d",&n,&k);
	int length[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&length[i]);	
	}
	sort(length,length+n);
	for(i=n-1;i>=0;i--)
	{
		if(k%length[i]==0)
		{
			temp=length[i];
			break;
		}
	}
	printf("%d",k/temp);
	return 0;
}
