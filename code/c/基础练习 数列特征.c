#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int a[10000],sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	int max,min;
	max=min=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("%d\n%d\n%d\n",max,min,sum);
	return 0;
}
