#include <stdio.h>
int main()
{
	int m,n;
	while(1)
	{
		scanf("%d%d",&m,&n);
		if(m==0&&n==0)
		{
			break;
		}
		int i,j;
		int a[1000]={0};
		for(i=0;i<m;i++)
		{
			scanf("%d",&a[i]);
		}
		int temp;
		for(i=0;i<m;i++)
		{
			for(j=i;j<m;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		printf("%d\n",a[n-1]);	
	}
	return 0;
}
