#include <stdio.h>
int main()
{
	int n,i,max,index;
	int a[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	index=0;
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			index=i;
		}
	}
	printf("%d %d",max,index);
	return 0;
}
