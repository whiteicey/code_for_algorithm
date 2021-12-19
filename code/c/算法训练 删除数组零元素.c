#include <stdio.h>
int main()
{
	int n,index=0;
	int a[100]={0},b[100]={0};
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			b[index]=a[i];
			index++;
		}
	}
	if(b[0]!=0)
	{
		printf("%d\n",index);
		for(i=0;i<index;i++)
		{
			printf("%d ",b[i]);
		}
	}
	else
	{
		printf("0");
	}
	return 0;
} 
