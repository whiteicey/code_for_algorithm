#include <stdio.h>
int main()
{
	int i,m,n,arr[80],j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				m=arr[i];
				arr[i]=arr[j];
				arr[j]=m;
			}
		}
	}
	printf("%d %d",arr[0],arr[n-1]);
	return 0;
}
