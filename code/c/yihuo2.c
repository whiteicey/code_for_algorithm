#include <stdio.h>
int main()
{
	int a[40],b[40]={0},i,j,m,n,c[40]={0},temp,num=0,index=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	for(i=m;i<m+n;i++)
	{
		scanf("%d",&a[i]);
	}//合并 
	
	for(i=0;i<m+n;i++)
	{
		for(j=i;j<m+n;j++)
		{
			if((a[i]==a[j])&&(i!=j))//?为什么要i!=j? 
			{
				b[i]=1;
				b[j]=1;
			}
		}
	}//找到相同的数并剔除重复 

	for(i=0;i<m+n;i++)
	{
		if(b[i]==0)
		{
			c[index]=a[i];
			index++;
		}
	}//赋值给c[]	 

	for(i=0;i<index;i++)//为什么i是小于index，为什么不能等于？ 
	{
		for(j=0;j<index;j++)
		{
			if(c[i]>c[j])
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			} 
		}
	}//降序排列
	 
	
	for(i=0;i<index;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
} 
