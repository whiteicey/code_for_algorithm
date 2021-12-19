#include <stdio.h>
int main()
{
	int a[10],i,j,k;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[i]<a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
 } 
