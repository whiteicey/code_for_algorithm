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
	}//�ϲ� 

	for(i=0;i<m+n;i++)
	{
		for(j=i;j<m+n;j++)//Ҫע��j��ȡֵ�Ǵ�i��ʼ���漰��1��ʼ����i��ʼֻ����һ������j��ʼ����������ͬ 
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
