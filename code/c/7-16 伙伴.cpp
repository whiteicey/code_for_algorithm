#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int i;
	int a[100000],b[100000];
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	sort(a,a+m);
	sort(b,b+n);
	int j,sum,k,temp;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			temp=a[i]+b[j];
			for(k=j;k<n;k++)
			{
				if(temp==b[k])
				{
					sum+=b[k];
				}
			}
		}
	}
	printf("%d",sum);
	return 0;
}
