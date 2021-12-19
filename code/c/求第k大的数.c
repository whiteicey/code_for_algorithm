#include <stdio.h>
int main()
{
	int n,k,i,max=-99999999,min=0x7fffffff;
	int a[100000];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		a[t]++;
		if(t>max)
		{
			max=t;
		}
		if(t<min)
		{
			min=t;
		}
	}
	for(i=max;i>=min;i--)
	{
		if(a[i]>=1)
		{
			k-=a[i];
		}
		if(k<=0)
		{
			printf("%d",i);
			break; 
		}
	}
	return 0;
}
