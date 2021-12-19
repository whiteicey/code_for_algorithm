#include <stdio.h>

int main()
{
	int m,n,i,j,temp,num=1;
	int a[20]={0},b[20]={0};
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	
	
	for(i=0;i<m;i++)
	{
		for(j=i;j<m;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	int c[20]={0};
	int index1=0;
	for(i=0;i<m;i++)
	{
		c[index1]=a[i];
		if(c[index1]!=a[i+1])
		{
			index1++;
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	int d[20]={0};
	int index2=0;
	for(i=0;i<n;i++)
	{
		d[index2]=b[i];
		if(d[index2]!=b[i+1])
		{
			index2++;
		}
	}
	
	if(index1!=index2)
	{
		printf("0\n");
		for(i=0;i<index1;i++)
		{
			printf("%d ",c[i]);
		}
	}
	else
	{
		for(i=0;i<index1;i++)
		{
			if(c[i]!=d[i])
			{
				num=0;
				break;
				
			}
			else
			{
				num=1;
			}
		}
	}
	if(num==0)
	{
		printf("0\n");
		for(i=0;i<index1;i++)
		{
			printf("%d ",c[i]);
		}
	}
	else if(num==1)
	{
		printf("1\n");
		for(i=0;i<index1;i++)
		{
			printf("%d ",c[i]);
		}
	}
}
