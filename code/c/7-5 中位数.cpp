#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int n,k;
	int a[200000],i,index;
	while(~scanf("%d%d",&n,&k))
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		int cntdiff;
		const int mid=(n-1)/2;
		while(k>0)
		{
			int temp=a[mid];
			for(i=mid;a[i]==temp&&i<n;++i);
			if(i==n)
			{
				a[mid]+=k/(n-mid);
				break;
			}
			cntdiff=a[i]-temp;
			if(k/(i-mid)<=cntdiff)
			{
				a[mid]+=k/(i-mid);
				break;
			}
			for(int j=mid;j<i;++j)
			{
				a[j]+=cntdiff;
				k-=cntdiff;
			}
		}
		printf("%d\n",a[mid]);
	}
	return 0;
 } 
