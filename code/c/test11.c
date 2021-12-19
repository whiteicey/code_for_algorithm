#include <stdio.h>
int main()
{
	int a[100];
	int i=0,index=0,j,temp;
	for(i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
		index++;
		if(a[i]==0)
		{
			break;
		}
	}
	for(i=0;i<index;i++)
	{
		for(j=0;j<index;j++)
		{
			if(a[i]<=a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<index;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
 } 
