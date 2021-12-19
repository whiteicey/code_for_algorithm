#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[1000];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int b,num=-1;
	scanf("%d",&b);
	for(i=0;i<n;i++)
	{
		if(b==a[i])
		{
			num=i+1;
			break;
		}
	}
	printf("%d",num);
	return 0;
} 
