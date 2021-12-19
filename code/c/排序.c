#include <stdio.h>
int main()
{
	int a[10],i,temp=0,j,min;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		min=i;
		for(j=i+1;j<9;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		if(i!=min)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
}//Ñ¡ÔñÅÅÐò
int main01()
{
	int a[10],i,temp=0,j;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
}//Ã°ÅÝÅÅÐò
 
