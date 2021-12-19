#include<stdio.h>
int main()
{
	int a[20]={1,1};
	int i;
	for(i=2;i<=20;i++)
	{
		a[i]=a[i-2]+a[i-1];
	}
	for(i=0;i<20;i++)
	{
		if(i%5==0)
		{
			printf("\n");
		}
		printf("%12d",a[i]);
	}
	return 0;
 } 
