#include <stdio.h>
int main()
{
	int m,n,i,j,temp;
	int a[100]={0},b[100]={0};
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
	int index1=0,num=0,index2=0;
	int temp1[100]={0};
	int temp2[100]={0};
	for(i=0;i<m;i++)
	{
		if(a[i]!=a[i+1])
		{
			temp1[index1]=a[i];
			index1++;
		}
	}
	for(i=0;i<n;i++)
	{
		if(b[i]!=b[i+1])
		{
			temp2[index2]=b[i];
			index2++;
		}
	}
	int flag=0;
	if(index1!=index2)
	{
		printf("0\n");
		for(i=0;i<index1;i++)
		{
			printf("%d ",temp1[i]);
		}
	}
	else
	{
		for(i=0;i<index1;i++)
		{
			flag=0;
			if(temp1[i]!=temp2[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("1\n");
			for(i=0;i<index1;i++)
			{
				printf("%d ",temp1[i]);
			}
		}
		else if(flag==1)
		{
			printf("0\n");
			for(i=0;i<index1;i++)
			{
				printf("%d ",temp1[i]);
			}
		}
	}
	return 0;
} 
