#include <stdio.h>
int main()
{
	int m,n,i,temp,index=0,j,k,index1=0;
	int a[2][8];
	int b[1000]={0};
	long long sum=0;
	scanf("%d",&n);
	while(index1<n)
	{
		sum=0;
		scanf("%d",&m);
		for(i=0;i<2;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<2;i++)
		{
			if(i==0)
			{
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
			else
			{
				for(j=0;j<m;j++)
				{
					for(k=j;k<m;k++)
					{
						if(a[i][j]<a[i][k])
						{
							temp=a[i][j];
							a[i][j]=a[i][k];
							a[i][k]=temp;
						}
					}
				}
			}
		}
		for(i=0;i<m;i++)
		{
			sum+=a[0][i]*a[1][i];
		}
		b[index]=sum;
		index++;
		index1++;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}
