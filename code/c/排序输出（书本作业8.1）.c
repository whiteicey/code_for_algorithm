#include <stdio.h>
void change(int a[]);
int main()
{
	int a[3],i;
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	change(a);
	return 0;
}
void change(int a[])
{
	int temp;
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=i;j<3;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		printf("%d ",a[i]);
	}
} 
