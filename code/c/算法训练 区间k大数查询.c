#include <stdio.h>
int main()
{
	int len,m;
	scanf("%d",&len);
	int a[1000];
	int i,j,temp,k,num;
	int index[1000][3];
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d%d%d",&index[i][0],&index[i][1],&index[i][2]);
	}
	int c[1000]={0};
	for(i=0;i<m;i++)
	{
		temp=index[i][0]-1;
		num=0;
		for(j=0;j<=index[i][1]-index[i][0];j++)
		{
			c[j]=a[temp];
			temp++;
		}
		for(j=0;j<=index[i][1]-index[i][0];j++)
		{
			for(k=j;k<=index[i][1]-index[i][0];k++)
			{
				if(c[j]<c[k])
				{
					temp=c[j];
					c[j]=c[k];
					c[k]=temp;
				}
			}
		}
		printf("%d\n",c[index[i][2]-1]);
		for(j=0;j<=index[i][1]-index[i][0];j++)
		{
			c[j]=0;
		}
	}
	return 0;
} 
