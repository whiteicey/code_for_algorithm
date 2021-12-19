#include <stdio.h>
int main()
{
	int n,i,j,number=0,k=0,index=0,temp;
	int a[40]={0},b[40]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				k=0;
				break;
			}
			else
			{
				k=1;
			}
		}
		if(a[i]==2)
		{
			k=1;
		}
		if(k==1)
		{
			b[index]=a[i];
			index++;
			number++;
		}
	}
	for(i=0;i<index;i++)
	{
		for(j=0;j<index;j++)
		{
			if(b[i]<=b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	if(number==0)
	{
		printf("no prime");
	}
	else
	{
		for(i=0;i<index;i++)
		{
			printf("%d ",b[i]);
		}
	}
	return 0;
}
