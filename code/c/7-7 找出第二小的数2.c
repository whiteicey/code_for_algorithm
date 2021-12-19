#include <stdio.h>
int main()
{
	int n,i,m,j,k,temp;
	int a[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
		for(j=0;j<m;j++)
		{
			for(k=j;k<m;k++)
			{
				if(a[i][j]>a[i][k])
				{
					temp=a[i][j];
					a[i][j]=a[i][k];
					a[i][k]=temp;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		temp=a[i][0];
		for(j=0;j<n;j++)
		{
			if(temp!=a[i][j])
			{
				temp=a[i][j];
				printf("%d\n",a[i][j]);
				break;
			}
		}
		if(temp==a[i][0])
		{
			printf("NO\n");
		}
	}
	return 0;
}
