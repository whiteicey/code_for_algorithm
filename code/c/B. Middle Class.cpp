#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		long long num,w,a[100000],i,temp;
		long long sum=0,x=0;
		scanf("%d%d",&num,&w);
		for(i=0;i<num;i++)
		{
			scanf("%d",&temp);
			a[i]=temp-w;
		}
		sort(a,a+num);
		for(i=num-1;i>=0;i--)
		{
			sum+=a[i];
			if(sum>=0)
			{
				x++;
			}
			else
			{
				break;
			}
		}
		printf("%d\n",x);
	}
	return 0;
}
