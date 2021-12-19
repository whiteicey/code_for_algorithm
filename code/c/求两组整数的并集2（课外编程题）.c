#include <stdio.h>
int main()
{
	int m,n,i,a[40],j,temp,index=0,b[40]={0},c[40];
	
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=m;i<m+n;i++)
	{
		scanf("%d",&a[i]);
	}//合并 

	for(i=0;i<m+n;i++)
	{
		for(j=i;j<m+n;j++)//要注意j的取值是从i开始还涉及从1开始，从i开始只会标记一处，从j开始会标记所有相同 
		{
			if((a[i]==a[j])&&(i!=j))
			{
				b[j]=1;
			}
		}
	}

	for(i=0;i<m+n;i++)
	{
		if(b[i]==0)
		{
			c[index]=a[i];
			index++;
		}
	}
	
	for(i=0;i<index;i++)
	{
		for(j=0;j<index;j++)
		{
			if(c[i]<c[j])
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	for(i=0;i<index;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}
