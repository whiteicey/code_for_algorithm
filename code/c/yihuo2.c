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
	}//�ϲ� 
	
	for(i=0;i<m+n;i++)
	{
		for(j=i;j<m+n;j++)
		{
			if((a[i]==a[j])&&(i!=j))//?ΪʲôҪi!=j? 
			{
				b[i]=1;
				b[j]=1;
			}
		}
	}//�ҵ���ͬ�������޳��ظ� 

	for(i=0;i<m+n;i++)
	{
		if(b[i]==0)
		{
			c[index]=a[i];
			index++;
		}
	}//��ֵ��c[]	 

	for(i=0;i<index;i++)//Ϊʲôi��С��index��Ϊʲô���ܵ��ڣ� 
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
	}//��������
	 
	
	for(i=0;i<index;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
} 
