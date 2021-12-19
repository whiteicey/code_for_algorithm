#include <stdio.h>
int main()
{
	int k,i,j;
	int a[100]={0};
	int b[200]={0};
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}
	int temp;
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		while(a[i]!=1)
		{
			if(a[i]%2==0)
			{
				
			}
		}
	}
} 
