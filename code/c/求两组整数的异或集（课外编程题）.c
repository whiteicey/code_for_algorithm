#include <stdio.h>
int main()
{
	int a1[40],a2[20],m,n,i,k,j,b[40]={0},t=0,index=0,c[40]={0},num=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a1[i]);
	}//a1������ 
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a1[i]>a1[j])
			{
				k=a1[j];
				a1[j]=a1[i];
				a1[i]=k;
			}
		}
	}//a1�ĴӴ�С 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a2[i]);
	}//a2������
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a1[i]>a1[j])
			{
				k=a1[j];
				a1[j]=a1[i];
				a1[i]=k;
			}
		}
	} //a2�ĴӴ�С
	
	/*for(i=0,j=0;i<m&&j<n;)
	{
			if(a1[i]>=a2[j])
			{
				b[t]=a2[i];
				t++;
				j++;
			}
			else
			{
				b[t]=a2[i];
				t++;
				i++;
			}
		index=t;
	} //�����ó�˳�� */ 
	for(i=0;i<n;i++)
	{
		a1[m+i]=a2[i];
	}//���a1a2��
	
	for(i=0;i<m+n;i++)
	{
		for(j=1;j<m+n;j++)
		{
			if(a1[i]==a1[j]&&i!=j)
			{
				b[i]=1;
			}
	}
	
	for(i=0;i<m+n;i++)
	{
		if(b[i]==0)
		{
			c[i]=a1[i];
		}
		
	}
	
	for(i=0;i<m+n;i++)
	{
		if(c[i]!=0)
		{
			num++;
		}
	}
	
	for(i=0;i<=num;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}
	/* 
	for(i=0;i<m+n;i++)
	{
		for(j=0;j<m+n;j++)
		{
			if(a1[i]>a1[j])
			{
				k=a1[j];
				a1[j]=a1[i];
				a1[i]=k;
			}
		}
	}//ð�ݵó��Ӵ�С˳�� 

	for(t=0;t<index;t++)
	{
		printf("%d ",b[t]);
	}
	return 0;
	*/

