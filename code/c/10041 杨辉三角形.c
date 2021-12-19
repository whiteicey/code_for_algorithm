#include <stdio.h>
int main()
{
	int a[20][30]={{1},{1,1}};
	int i,j,n;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==0)
			{
				a[i][j]=1;
			}
			else if(j==n)
			{
				a[i][j]=1;
			}
			else
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
