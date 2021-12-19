#include <stdio.h>
int main()
{
	int n,index,a[10][10],i,j,m,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	index=a[0][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>=index)
			{
				index=a[i][j];
				m=i;
				k=j;
			}
		}
	}
	printf("%d %d %d",index,m+1,k+1);
	return 0;
} 
