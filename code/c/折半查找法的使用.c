#include <stdio.h>
int main()
{
	int n,i;
	int a[10000],b[10000];
	int f;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d,",&a[i]);
	} 
	scanf("%d",&f);
	int left,right;
	left=0;right=n-1;i=0;
	int flag=0;
	while(left<=right)
	{
		int mid=(left+right)>>1;
		b[i]=a[mid];
		i++;
		if(a[mid]<f)
		{
			left=mid+1;
		}
		else if(a[mid]>f)
		{
			right=mid-1;
		}
		else
		{
			flag=1;
			printf("%d\n",mid);
			break;
		}
	}
	int j;
	if(flag)
	{
		for(j=0;j<i;j++)
		{
			if(j!=i-1)
				printf("%d,",b[j]);
			else
				printf("%d",b[j]);
		}
	}
	else
	{
		printf("no\n");
		for(j=0;j<i;j++)
		{
			if(j!=i-1)
				printf("%d,",b[j]);
			else
				printf("%d",b[j]);
		}
	}
	return 0;
 } 
