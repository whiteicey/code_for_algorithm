#include <stdio.h>
int main()
{
	int n,i;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int j,m,k,temp;
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[j]);
		}
		for(j=0;j<m;j++)
		{
			for(k=j;k<m;k++)
			{
				if(a[j]>a[k])
				{
					temp=a[j];
					a[j]=a[k];
					a[k]=temp;
				}
			}
		}
		temp=0;
		for(j=0;j<n-1;j++)
		{
			if(a[j+1]!=a[j])
			{
				temp++;
				printf("%d\n",a[j+1]);
				break;
			}
		}
		if(temp==0)
		{
			printf("NO\n");
		}
	}
	return 0;
}
