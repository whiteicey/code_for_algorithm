#include <stdio.h>
int main()
{
	int n,i,temp,j,index=0,k=0;
	scanf("%d",&n);
	int a[100000]={0};
	int count[100000]={0};
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			scanf("%d",&a[index]);
			count[index]++;
		}
		else
		{
			scanf("%d",&temp);
			k=0;
			for(j=0;j<=index;j++)
			{
				if(temp==a[j])
				{
					count[j]++;
					k=0;
					break;
				}
				else
				{
					k=1;
				}
			}
			if(k==1)
			{
				index++;
				a[index]=temp;
				count[index]++;
			}
		}
	}
	for(i=0;i<=index;i++)
	{
		if(count[i]>(n/2))
		{
			printf("%d",a[i]);
		}
	}
	return 0;
}
