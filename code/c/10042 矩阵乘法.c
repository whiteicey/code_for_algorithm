#include <stdio.h>
int main()
{
	int m,n,p,i,j,k=0,sum=0;
	int a[10][10]={0},b[10][10]={0};
	scanf("%d%d%d",&m,&n,&p);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	i=0;
	j=0;
	k=0;
	while(1)
	{
		sum=sum+a[i][j]*b[j][k];
		j++;
		if(j==n)
		{
			j=0;
			k++;
			printf("%d ",sum);
			sum=0;
			if(k==p)
			{
				i++;
				k=0;
				printf("\n");
				if(i==m)
				{
					i=0;
					break;
				}
			}
		}
	}
	return 0;
}
