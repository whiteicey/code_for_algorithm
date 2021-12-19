#include <stdio.h>
int main()
{
	int m,s,n;
	int a[200][200]={0},b[200][200]={0};
	int c[200][200]={0};
	scanf("%d%d%d",&m,&s,&n);
	int i,j,k,sum=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<s;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<s;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
		{
			for(k=0;k<s;k++)
			{
				sum+=a[i][k]*b[k][j];
			}
			c[i][j]=sum;
			sum=0;
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j!=n-1)
			{
				printf("%d ",c[i][j]);
			} 
			else
			{
				printf("%d",c[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
