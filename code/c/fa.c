#include <stdio.h>
int main()
{
	int a[40]={1,1},i;
	for(i=2;i<40;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(i=0;i<40;i++)
	{
		printf("%d\n",a[i]); 
	}
	return 0;
 } 
