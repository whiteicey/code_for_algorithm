#include <stdio.h>
int main()
{
	int a[10],i,j,index1,index2,c,b;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	c=a[0];
	for(i=0;i<10;i++)
	{
		if(c<a[i])
		{
			1;
		}
		else
		{
			c=a[i];
			index1=i;
		}
	}
	b=a[0];
	for(j=0;j<10;j++)
	{
		if(b>a[j])
		{
			1;
		}
		else
		{
			b=a[j];
			index2=j;
		}
	}
	a[index1]=a[0];
	a[0]=c;
	a[index2]=a[9];
	a[9]=b;
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
} 
