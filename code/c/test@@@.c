#include <stdio.h>
int main()
{
	int a[1000];
	for(int i=0;i<1000;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<1000;i++)
	{
		for(int j=i;j<1000;j++)
		{
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<1000;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
