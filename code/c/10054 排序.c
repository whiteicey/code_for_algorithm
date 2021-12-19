#include <stdio.h>
int main()
{
	int pop(int* a);
	int a[10];
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	pop(a);
	return 0;
}
int pop(int* a)
{
	int i,j,temp;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[i]<=a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
}
