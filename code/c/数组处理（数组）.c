#include <stdio.h>
int main()
{
	int a[20]={0},sum=0,max,min,n,j,m,i;
	float ave;
	scanf("%d",&i);
	for(n=0;n<i;n++)
	{
		scanf("%d",&a[n]);
	}
	for(n=0;n<i;n++)//sum,ave
	{
		sum=sum+a[n];
		ave=(float)sum/i;
	}
	for(n=0;n<i;n++)
	{
		for(j=0;j<i;j++)
		{
			if(a[n]>a[j])
			{
				m=a[n];
				a[n]=a[j];
				a[j]=m;
			}
		}
	}
	max=a[0];
	min=a[i-1];
	printf("%d %d %.2f %d",max,min,ave,sum);
	return 0;
	
}
