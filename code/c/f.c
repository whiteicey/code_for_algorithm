#include <stdio.h>
int gcd(int x,int y)
{
    return y==0?x:gcd(y,x%y);
} 
int main()
{
	int n,i,minmal=0,j,temp;
	int a[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]*a[j]<=minmal)
			{
				continue;
			}
			temp=(a[i]*a[j])/gcd(a[i],a[j]);
			if(temp>minmal)
			{
				minmal=temp;
			}
		}
	}
	printf("%d",minmal);
	return 0;
}
