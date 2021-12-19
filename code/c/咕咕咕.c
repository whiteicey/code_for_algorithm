#include <stdio.h>
int main()
{
	long long n,i,num=0,index,j;
	int a[100000]={0}; 
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==-1)
		{
			break;
		}
	}
	index=i;
	for(i=0;i<index;i++)
	{
		for(j=0;j<index;j++)
		{
			if(a[i]<a[j])
			{
				num++;
			}
		}
		num+=(n-index);
		if(i==index-1)
		{
			printf("%lld",num);
		}
		else
		{
			printf("%lld ",num);
		}
		num=0;
	}
	return 0;
}
