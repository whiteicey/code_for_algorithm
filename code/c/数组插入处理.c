#include <stdio.h>
int main()
{
	int a[10],j,i,k,index;
	for(i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&j);
	for(i=0;i<10;i++)
	{
		if(j>a[i]&&j<a[i+1])
		{
			index=i+1;
			k=a[i+1];
			a[i+1]=j;
			break;
		}
	}
	for(;index<10;index++)
	{
		i=a[index+1];
		a[index+1]=k;
		k=i;
	}
	for(i=0;i<=9;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
