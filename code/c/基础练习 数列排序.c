#include <stdio.h>
int main()
{
	int a[200]={0};
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int temp;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
