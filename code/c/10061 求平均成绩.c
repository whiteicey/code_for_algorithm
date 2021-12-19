#include <stdio.h>
void sort(int a[],int n);
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[30]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	return 0;
}
void sort(int a[],int n)
{
	int max,min,sum=0,i;
	max=min=a[0];
	float ave;
	//temp=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
		sum+=a[i];
	}
	ave=1.0*sum/n;
	printf("%d %d %.2f",max,min,ave);
}
